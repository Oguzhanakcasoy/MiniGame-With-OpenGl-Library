#include <GL/glew.h> // Include the GLEW header file
#include <GL/glut.h> // Include the GLUT header file
#include<iostream>
#include <stdlib.h>
#include<fstream> 
#include<string> 
using namespace std;
float xr = 0, yr = 0;
float c = 1;
int kalancan = 3;
int puanbilgisi = 0;

float ax = 0, ay = 0, ac = 0;
void speed() {
	ax += 0.3f * c;
	ac += 0.1 * c;
}
void carpismakontrol() {
	//Referans Noktasý
	//glVertex2f(153 + ax + ac, 555);//sol alt  ---gövde üzeri kýzak büyük
	/*glVertex2f(106 + ax + ac, 555);//sað alt

	glVertex2f(310 + xr, 120 + yr);//sað üst
	glVertex2f(160 + xr, 120 + yr);//sol üst
	*/
	if (((160 + xr > 106 + ax && 160 + xr < 153 + ax) || (310 + xr > 106 + ax && 310 + xr < 153 + ax)) && (120 + yr > 555 && 120 + yr < 605)) {
		cout << "carpisma ";
		kalancan--;
		ax = 0; ay = 0; ac = 0;
		xr = 0; yr = 0; c--;
	}
	/*glColor3f(0.0f, 0.0f, 0.0f); Referans Noktasý
	glVertex2f(153 - ax, 435);//sol alt  ---gövde üzeri kýzak büyük
	glVertex2f(106 - ax, 435);//sað alt
	glVertex2f(106 - ax, 429);//sað üst
	glVertex2f(153 - ax, 429);//sol üst*/

	if (((160 + xr > 106 + ax && 160 + xr < 153 + ax) || (310 + xr > 106 + ax && 310 + xr < 153 + ax)) && (120 + yr > 435 && 120 + yr < 605)) {
		cout << "carpisma ";
		kalancan--;
		ax = 0; ay = 0; ac = 0;
		xr = 0; yr = 0; c--;
	}
	if (((160 + xr > 106 + ax && 160 + xr < 153 + ax) || (310 + xr > 106 + ax && 310 + xr < 153 + ax)) && (120 + yr > 195 && 120 + yr < 605)) {
		cout << "carpisma ";
		kalancan--;
		ax = 0; ay = 0; ac = 0;
		xr = 0; yr = 0; c--;
	}
	if (((160 + xr > 106 + ax && 160 + xr < 153 + ax) || (310 + xr > 106 + ax && 310 + xr < 153 + ax)) && (120 + yr > 315 && 120 + yr < 605)) {
		cout << "carpisma ";
		kalancan--;
		ax = 0; ay = 0; ac = 0;
		xr = 0; yr = 0; c--;
	}
}

void display(void) {
	speed();
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Clear the background of our window to red
	glClear(GL_COLOR_BUFFER_BIT);//Clear the colour buffer (more buffers later on)
	glEnd();
	carpismakontrol();
	const unsigned char* hak_num = reinterpret_cast<const unsigned char*>("kalan can");
	//glRasterPos2i(15, 15);//Score kodlamasý hata verince pasif olarak aldým.
	/*glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, hak_num);
	const unsigned char* puan_num = reinterpret_cast<const unsigned char*>("Puan:");
	glRasterPos2i(15, 15);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, puan_num);
	*/

	if (ax >= 480) {
		ax = -300;
		(ac >= 500);
		ac = -300;

	}

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); //4. helikopter Sarý
	glVertex2f(155 - ax, 210);//sol  alt ---gövde
	glVertex2f(105 - ax, 210);//sað alt
	glVertex2f(105 - ax, 260);//sað üst
	glVertex2f(155 - ax, 260);//sol üst

	glVertex2f(105 - ax, 243);//sol  alt  ---kuyruk
	glVertex2f(55 - ax, 243);//sað alt
	glVertex2f(55 - ax, 230);//sað üst
	glVertex2f(105 - ax, 230);//sol üst

	glVertex2f(135 - ax, 230);//sol  alt  ---gövde üzeri pervane ucu
	glVertex2f(125 - ax, 230);//sað alt
	glVertex2f(125 - ax, 270);//sað üst
	glVertex2f(135 - ax, 270);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(142 - ax, 195);//sol  alt  ---gövde üzeri kýzak 1
	glVertex2f(138 - ax, 195);//sað alt
	glVertex2f(138 - ax, 220);//sað üst
	glVertex2f(142 - ax, 220);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(116 - ax, 195);//sol  alt  ---gövde üzeri kýzak 2
	glVertex2f(120 - ax, 195);//sað alt
	glVertex2f(120 - ax, 220);//sað üst
	glVertex2f(116 - ax, 220);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(153 - ax, 195);//sol alt  ---gövde üzeri kýzak büyük
	glVertex2f(106 - ax, 195);//sað alt
	glVertex2f(106 - ax, 189);//sað üst
	glVertex2f(153 - ax, 189);//sol üst

	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(128 - ax, 225);//sol alt  ---gövde üzeri iç pencere
	glVertex2f(145 - ax, 225);//sað alt
	glVertex2f(145 - ax, 245);//sað üst
	glVertex2f(128 - ax, 245);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(60 - ax, 243);//sol alt  ---kuyruk ucu siyah nokta
	glVertex2f(50 - ax, 243);//sað alt
	glVertex2f(50 - ax, 230);//sað üst
	glVertex2f(60 - ax, 230);//sol üst
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//ilk pervane
	glBegin(GL_LINES);
	glVertex2f(50 - ax, 252);//sol 
	glVertex2f(200 - ax, 289);//sað
	glVertex2f(50 - ax, 272);//sol  //ikinci pervane
	glVertex2f(190 - ax, 269);//sað
	glVertex2f(25 - ax, 251);//sol  //arka 1.pervane
	glVertex2f(80 - ax, 231);//sað
	glVertex2f(25 - ax, 231);//sol  //arka 2.pervane
	glVertex2f(80 - ax, 251);//sað
	glEnd();

	/////1.HEKLÝKOPTER-------------------------------------------------------------
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);//+360
	glVertex2f(155 + ax + ac, 570);//sol  alt ---gövde
	glVertex2f(105 + ax + ac, 570);//sað alt
	glVertex2f(105 + ax + ac, 620);//sað üst
	glVertex2f(155 + ax + ac, 620);//sol üst

	glVertex2f(105 + ax + ac, 603);//sol  alt  ---kuyruk
	glVertex2f(55 + ax + ac, 603);//sað alt
	glVertex2f(55 + ax + ac, 590);//sað üst
	glVertex2f(105 + ax + ac, 590);//sol üst

	glVertex2f(135 + ax + ac, 590);//sol  alt  ---gövde üzeri pervane ucu
	glVertex2f(125 + ax + ac, 590);//sað alt
	glVertex2f(125 + ax + ac, 630);//sað üst
	glVertex2f(135 + ax + ac, 630);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(142 + ax + ac, 555);//sol  alt  ---gövde üzeri kýzak 1
	glVertex2f(138 + ax + ac, 555);//sað alt
	glVertex2f(138 + ax + ac, 580);//sað üst
	glVertex2f(142 + ax + ac, 580);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(116 + ax + ac, 555);//sol  alt  ---gövde üzeri kýzak 2
	glVertex2f(120 + ax + ac, 555);//sað alt
	glVertex2f(120 + ax + ac, 580);//sað üst
	glVertex2f(116 + ax + ac, 580);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(153 + ax + ac, 555);//sol alt  ---gövde üzeri kýzak büyük
	glVertex2f(106 + ax + ac, 555);//sað alt
	glVertex2f(106 + ax + ac, 549);//sað üst
	glVertex2f(153 + ax + ac, 549);//sol üst

	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(128 + ax + ac, 585);//sol alt  ---gövde üzeri iç pencere
	glVertex2f(145 + ax + ac, 585);//sað alt
	glVertex2f(145 + ax + ac, 605);//sað üst
	glVertex2f(128 + ax + ac, 605);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(60 + ax + ac, 603);//sol alt  ---kuyruk ucu siyah nokta
	glVertex2f(50 + ax + ac, 603);//sað alt
	glVertex2f(50 + ax + ac, 590);//sað üst
	glVertex2f(60 + ax + ac, 590);//sol üst
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//ilk pervane
	glBegin(GL_LINES);
	glVertex2f(50 + ax + ac, 612);//sol 
	glVertex2f(200 + ax + ac, 649);//sað
	glVertex2f(50 + ax + ac, 632);//sol  //ikinci pervane
	glVertex2f(190 + ax + ac, 629);//sað
	glVertex2f(25 + ax + ac, 611);//sol  //arka 1.pervane
	glVertex2f(80 + ax + ac, 591);//sað
	glVertex2f(25 + ax + ac, 591);//sol  //arka 2.pervane
	glVertex2f(80 + ax + ac, 611);//sað
	glEnd();

	/////////2. helikopter
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);//+240 Helikopter Gövde
	glVertex2f(155 - ax, 450);//sol  alt 
	glVertex2f(105 - ax, 450);//sað alt
	glVertex2f(105 - ax, 500);//sað üst
	glVertex2f(155 - ax, 500);//sol üst

	glVertex2f(105 - ax, 483);//sol  alt  Helikopter kuyruk
	glVertex2f(55 - ax, 483);//sað alt
	glVertex2f(55 - ax, 470);//sað üst
	glVertex2f(105 - ax, 470);//sol üst

	glVertex2f(135 - ax, 470);//sol  alt  ---gövde üzeri pervane ucu
	glVertex2f(125 - ax, 470);//sað alt
	glVertex2f(125 - ax, 510);//sað üst
	glVertex2f(135 - ax, 510);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(142 - ax, 435);//sol  alt  ---gövde üzeri kýzak 1
	glVertex2f(138 - ax, 435);//sað alt
	glVertex2f(138 - ax, 460);//sað üst
	glVertex2f(142 - ax, 460);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(116 - ax, 435);//sol  alt  ---gövde üzeri kýzak 2
	glVertex2f(120 - ax, 435);//sað alt
	glVertex2f(120 - ax, 460);//sað üst
	glVertex2f(116 - ax, 460);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(153 - ax, 435);//sol alt  ---gövde üzeri kýzak büyük
	glVertex2f(106 - ax, 435);//sað alt
	glVertex2f(106 - ax, 429);//sað üst
	glVertex2f(153 - ax, 429);//sol üst

	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(128 - ax, 465);//sol alt  ---gövde üzeri iç pencere
	glVertex2f(145 - ax, 465);//sað alt
	glVertex2f(145 - ax, 485);//sað üst
	glVertex2f(128 - ax, 485);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(60 - ax, 483);//sol alt  ---kuyruk ucu siyah nokta
	glVertex2f(50 - ax, 483);//sað alt
	glVertex2f(50 - ax, 470);//sað üst
	glVertex2f(60 - ax, 470);//sol üst
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2f(50 - ax, 492);//sol //ilk pervane
	glVertex2f(200 - ax, 529);//sað
	glVertex2f(50 - ax, 512);//sol  //ikinci pervane
	glVertex2f(190 - ax, 509);//sað

	glVertex2f(25 - ax, 491);//sol  //arka 1.pervane
	glVertex2f(80 - ax, 471);//sað
	glVertex2f(25 - ax, 471);//sol  //arka 2.pervane
	glVertex2f(80 - ax, 491);//sað
	glEnd();

	//////////3.HElikopter
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5, 0.0f);//+120 //turuncu
	glVertex2f(155 + ax, 330);//sol  alt ---gövde
	glVertex2f(105 + ax, 330);//sað alt
	glVertex2f(105 + ax, 380);//sað üst
	glVertex2f(155 + ax, 380);//sol üst

	glVertex2f(105 + ax, 363);//sol  alt  ---kuyruk
	glVertex2f(55 + ax, 363);//sað alt
	glVertex2f(55 + ax, 350);//sað üst
	glVertex2f(105 + ax, 350);//sol üst

	glVertex2f(135 + ax, 350);//sol  alt  ---gövde üzeri pervane ucu
	glVertex2f(125 + ax, 350);//sað alt
	glVertex2f(125 + ax, 390);//sað üst
	glVertex2f(135 + ax, 390);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(142 + ax, 315);//sol  alt  ---gövde üzeri kýzak 1
	glVertex2f(138 + ax, 315);//sað alt
	glVertex2f(138 + ax, 340);//sað üst
	glVertex2f(142 + ax, 340);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(116 + ax, 315);//sol  alt  ---gövde üzeri kýzak 2
	glVertex2f(120 + ax, 315);//sað alt
	glVertex2f(120 + ax, 340);//sað üst
	glVertex2f(116 + ax, 340);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(153 + ax, 315);//sol alt  ---gövde üzeri kýzak büyük
	glVertex2f(106 + ax, 315);//sað alt
	glVertex2f(106 + ax, 309);//sað üst
	glVertex2f(153 + ax, 309);//sol üst

	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(128 + ax, 345);//sol alt  ---gövde üzeri iç pencere
	glVertex2f(145 + ax, 345);//sað alt
	glVertex2f(145 + ax, 365);//sað üst
	glVertex2f(128 + ax, 365);//sol üst

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(60 + ax, 363);//sol alt  ---kuyruk ucu siyah nokta
	glVertex2f(50 + ax, 363);//sað alt
	glVertex2f(50 + ax, 350);//sað üst
	glVertex2f(60 + ax, 350);//sol üst
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//ilk pervane
	glBegin(GL_LINES);
	glVertex2f(50 + ax, 372);//sol 
	glVertex2f(200 + ax, 409);//sað

	glVertex2f(50 + ax, 392);//sol //ikinci pervane
	glVertex2f(190 + ax, 389);//sað

	glVertex2f(25 + ax, 371);//sol //arka 1.pervane
	glVertex2f(80 + ax, 351);//sað

	glVertex2f(25 + ax, 351);//sol //arka 2.pervane
	glVertex2f(80 + ax, 371);//sað
	glEnd();

	glColor3f(0.0f, 0.0f, 1.0f);//Uçak Hareket
	if (yr >= 640) {
		yr = 0;
		xr = 0;
		c++;
		puanbilgisi = puanbilgisi + 10;
		cout << puanbilgisi;
	}

	glBegin(GL_QUADS);//Uçak 
	glVertex2f(230 + xr, 40 + yr);//sol alt //orta direk
	glVertex2f(240 + xr, 40 + yr);//sað alt
	glVertex2f(240 + xr, 150 + yr);//sað üst
	glVertex2f(230 + xr, 150 + yr);//sol üst

	glVertex2f(160 + xr, 130 + yr);//sol alt //ilk kanat
	glVertex2f(310 + xr, 130 + yr);//sað alt
	glVertex2f(310 + xr, 120 + yr);//sað üst
	glVertex2f(160 + xr, 120 + yr);//sol üst

	glVertex2f(200 + xr, 65 + yr);//sol alt //2. kanat 
	glVertex2f(270 + xr, 65 + yr);//sað alt
	glVertex2f(270 + xr, 55 + yr);//sað üst
	glVertex2f(200 + xr, 55 + yr);//sol üst
	glEnd();
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}

void specialkey(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		yr = yr + 20;

		glutPostRedisplay();
		break;
	case GLUT_KEY_DOWN:
		yr = yr - 20;

		glutPostRedisplay();
		break;
	case GLUT_KEY_LEFT:
		xr = xr - 20;

		glutPostRedisplay();
		break;
	case GLUT_KEY_RIGHT:
		xr = xr + 20;

		glutPostRedisplay();
		break;
	case GLUT_KEY_HOME:
		exit(0);
		break;
	}
}

void abc(unsigned char key, int x, int y) {
	if (key == 13) {
		cout << "sifirla"; 
		kalancan = 3;
		puanbilgisi = 0;
		xr = 0, yr = 0;
		ax = 0, ac = 0, ay = 0;
		c = 1;
	}

}

int main(int argc, char** argv) {
	glutInit(&argc, argv); // Initialize GLUT
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // Set up a basic display buffer (only single buffered for now)
	glutInitWindowSize(480, 640); // Set the width and height of the window
	glutInitWindowPosition(100, 100); // Set the position of the window
	glutCreateWindow("Mehmet Oðuzhan Akçasoy 150320099"); // Pencere Baþlýðý 
	glutDisplayFunc(display);
	glClearColor(1, 1, 1, 1);
	gluOrtho2D(0, 480, 0, 640);//Pencere Ölçüleri
	glutSpecialFunc(specialkey);
	glutKeyboardFunc(abc);
	glutMainLoop(); // Enter GLUT's main loop
	return 0;
}