#include <gl/glut.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
void DibujarCirculo(float centrox, float centroy, float r, int num_segments) {
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < num_segments; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
		float x = r * cosf(theta);
		float y = r * sinf(theta);
		glVertex2f(x + centrox, y + centroy);
	}
	glEnd();
}
void Piernas(){
	//Pie derecho
	glBegin(GL_LINE_LOOP);
	glVertex2i(70, 75);
	glVertex2i(150, 75);
	glVertex2i(150, 100);
	glEnd();
	//Tobillo derecho
	glBegin(GL_LINE_LOOP);
	glVertex2i(150, 100);
	glVertex2i(120, 100);
	glVertex2i(120, 91);
	glEnd();
	//Pierna derecha
	glBegin(GL_LINE_LOOP);
	glVertex2i(120, 100);
	glVertex2i(150, 100);
	glVertex2i(150, 205);
	glVertex2i(120, 205);
	glEnd();
	//Pie Izquierdo
	glBegin(GL_LINE_LOOP);
	glVertex2i(220, 75);
	glVertex2i(300, 75);
	glVertex2i(220, 100);
	glEnd();
	//Tobillo Izquierdo	
	glBegin(GL_LINE_LOOP);
	glVertex2i(220, 100);
	glVertex2i(250, 100);
	glVertex2i(250, 91);
	glEnd();
	//Pierna Izquierda
	glBegin(GL_LINE_LOOP);
	glVertex2i(250, 205);
	glVertex2i(220, 205);
	glVertex2i(220, 100);
	glVertex2i(250, 100);
	glEnd();		
}
void Brazos(){
	//Dedo Derecho
	glBegin(GL_LINE_LOOP);
	glVertex2i(35, 190);
	glVertex2i(50, 190);
	glVertex2i(50, 225);
	glVertex2i(35, 225);
	glEnd();
	//Dedo Izquierdo
	glBegin(GL_LINE_LOOP);
	glVertex2i(75, 190);
	glVertex2i(90, 190);
	glVertex2i(90, 225);
	glVertex2i(75, 225);
	glEnd();
	//Muñeca
	glBegin(GL_LINE_LOOP);
	glVertex2i(60, 255);
	glVertex2i(65, 255);
	glVertex2i(65, 260);
	glVertex2i(60, 260);
	glEnd();
	//Circulo de la mano derecha
	float centroxD = (65 + 60) / 2.0f;
	float centroyD = (230 + 245) / 2.0f;
	float radioD = 18.0f; // Ajusta el radio según tus necesidades
	int num_segmentsD = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxD, centroyD, radioD, num_segmentsD);
	//Brazo
	glBegin(GL_LINE_LOOP);
	glVertex2i(50, 260);
	glVertex2i(75, 260);
	glVertex2i(75, 350);
	glVertex2i(50, 350);
	glEnd();
	//Soporte del brazo
	glBegin(GL_LINE_LOOP);
	glVertex2i(55, 350);
	glVertex2i(70, 350);
	glVertex2i(70, 365);
	glVertex2i(55, 365);
	glEnd();
	//Circulo del hombro derecho
	float centroxHD = (60 + 65) / 2.0f;
	float centroyHD = (370 + 405) / 2.0f;
	float radioHD = 22.0f; // Ajusta el radio según tus necesidades
	int num_segmentsHD = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxHD, centroyHD, radioHD, num_segmentsHD);
	//Circulo peque del hombro derecho
	float centroxHDp = (60 + 65) / 2.0f;
	float centroyHDp = (370 + 405) / 2.0f;
	float radioHDp = 8.0f; // Ajusta el radio según tus necesidades
	int num_segmentsHDp = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxHDp, centroyHDp, radioHDp, num_segmentsHDp);
	//Hombro
	glBegin(GL_LINE_LOOP);
	glVertex2i(85, 385);
	glVertex2i(100, 385);
	glVertex2i(100, 395);
	glVertex2i(85, 395);
	glEnd();
	//Dedo Derecho
	glBegin(GL_LINE_LOOP);
	glVertex2i(295, 190);
	glVertex2i(280, 190);
	glVertex2i(280, 225);
	glVertex2i(295, 225);
	glEnd();
	//Dedo Izquierdo
	glBegin(GL_LINE_LOOP);
	glVertex2i(320, 190);
	glVertex2i(335, 190);
	glVertex2i(335, 225);
	glVertex2i(320, 225);
	glEnd();
	//Muñeca
	glBegin(GL_LINE_LOOP);
	glVertex2i(305, 255);
	glVertex2i(310, 255);
	glVertex2i(310, 260);
	glVertex2i(305, 260);
	glEnd();
	//Circulo de la mano izquierda
	float centroxI = (305 + 310) / 2.0f;
	float centroyI = (230 + 245) / 2.0f;
	float radioI = 18.0f; // Ajusta el radio según tus necesidades
	int num_segmentsI = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxI, centroyI, radioI, num_segmentsI);
	//Brazo
	glBegin(GL_LINE_LOOP);
	glVertex2i(295, 260);
	glVertex2i(320, 260);
	glVertex2i(320, 350);
	glVertex2i(295, 350);
	glEnd();
	//Soporte del brazo
	glBegin(GL_LINE_LOOP);
	glVertex2i(300, 350);
	glVertex2i(315, 350);
	glVertex2i(315, 365);
	glVertex2i(300, 365);
	glEnd();
	//Circulo del hombro izquierdo
	float centroxHI = (305 + 310) / 2.0f;
	float centroyHI = (370 + 405) / 2.0f;
	float radioHI = 22.0f; // Ajusta el radio según tus necesidades
	int num_segmentsHI = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxHI, centroyHI, radioHI, num_segmentsHI);
	//Circulo peque del hombro izquierdo
	float centroxHIp = (305 + 310) / 2.0f;
	float centroyHIp = (370 + 405) / 2.0f;
	float radioHIp = 8.0f; // Ajusta el radio según tus necesidades
	int num_segmentsHIp = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxHIp, centroyHIp, radioHIp, num_segmentsHIp);
	//Hombro
	glBegin(GL_LINE_LOOP);
	glVertex2i(270, 385);
	glVertex2i(285, 385);
	glVertex2i(285, 395);
	glVertex2i(270, 395);
	glEnd();
}
void Cabeza(){
	//Cuello
	glBegin(GL_LINE_LOOP);
	glVertex2i(150, 405);
	glVertex2i(220, 405);
	glVertex2i(220, 420);
	glVertex2i(150, 420);
	glEnd();
	//Cabeza
	glBegin(GL_LINE_LOOP);
	glVertex2i(120, 420);
	glVertex2i(250, 420);
	glVertex2i(250, 480);
	glVertex2i(120, 480);
	glEnd();
	//Ojo derecho
	float centroxD = (140 + 165) / 2.0f;
	float centroyD = (450 + 470) / 2.0f;
	float radioD = 15.0f; // Ajusta el radio según tus necesidades
	int num_segmentsD = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxD, centroyD, radioD, num_segmentsD);
	//Ojo Izquierdo
	float centroxI = (205 + 230) / 2.0f;
	float centroyI = (450 + 470) / 2.0f;
	float radioI = 15.0f; // Ajusta el radio según tus necesidades
	int num_segmentsI = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxI, centroyI, radioI, num_segmentsI);
	// Curva hacia abajo en el ojo derecho
	glBegin(GL_LINE_STRIP);
	glVertex2f(centroxD - 5, centroyD - 5);
	glVertex2f(centroxD - 2.5, centroyD - 2.5);
	glVertex2f(centroxD, centroyD);
	glVertex2f(centroxD + 2.5, centroyD - 2.5);
	glVertex2f(centroxD + 5, centroyD - 5);
	glEnd();
	// Curva hacia abajo en el ojo izquierdo
	glBegin(GL_LINE_STRIP);
	glVertex2f(centroxI - 5, centroyI - 5);
	glVertex2f(centroxI - 2.5, centroyI - 2.5);
	glVertex2f(centroxI, centroyI);
	glVertex2f(centroxI + 2.5, centroyI - 2.5);
	glVertex2f(centroxI + 5, centroyI - 5);
	glEnd();	
	//Boca
	glBegin(GL_LINE_LOOP);
	glVertex2i(160, 425);
	glVertex2i(210, 425);
	glVertex2i(210, 435);
	glVertex2i(160, 435);
	glEnd();
	//Dientes
	glBegin(GL_LINES);
	glVertex2i(172.5, 425);
	glVertex2i(172.5, 435);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(185, 425);
	glVertex2i(185, 435);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(197.5, 425);
	glVertex2i(197.5, 435);
	glEnd();
	//Antena
	glBegin(GL_LINE_LOOP);
	glVertex2i(180, 480);
	glVertex2i(190, 480);
	glVertex2i(190, 520);
	glVertex2i(180, 520);
	glEnd();
	//Circulo de la antena
	float centroxA = (180 + 190) / 2.0f;
	float centroyA = (528 + 538) / 2.0f;
	float radioA = 13.0f; // Ajusta el radio según tus necesidades
	int num_segmentsA = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxA, centroyA, radioA, num_segmentsA);
}
void Cuerpo(){
	//Cuerpo Grande
	glBegin(GL_LINE_LOOP);
	glVertex2i(100, 205);
	glVertex2i(270, 205);
	glVertex2i(270, 405);
	glVertex2i(100, 405);
	glEnd();
	//1 circulo
	float centroxU = (160 + 170) / 2.0f;
	float centroyU = (220 + 230) / 2.0f;
	float radioU = 7.0f; // Ajusta el radio según tus necesidades
	int num_segmentsU = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxU, centroyU, radioU, num_segmentsU);
	//2 circulo
	float centroxV = (180 + 190) / 2.0f;
	float centroyV = (220 + 230) / 2.0f;
	float radioV = 7.0f; // Ajusta el radio según tus necesidades
	int num_segmentsV = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxV, centroyV, radioV, num_segmentsV);
	//3 circulo
	float centroxT = (200 + 210) / 2.0f;
	float centroyT = (220 + 230) / 2.0f;
	float radioT = 7.0f; // Ajusta el radio según tus necesidades
	int num_segmentsT = 50; // Número de segmentos para aproximar el círculo
	DibujarCirculo(centroxT, centroyT, radioT, num_segmentsT);
	//Rectangulo del pecho
	glBegin(GL_LINE_LOOP);
	glVertex2i(125, 310);
	glVertex2i(245, 310);
	glVertex2i(245, 375);
	glVertex2i(125, 375);
	glEnd();
	//Triangulos
	glBegin(GL_LINE_LOOP);
	glVertex2i(135, 340);
	glVertex2i(150, 340);
	glVertex2i(142.5, 365);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(160, 340);
	glVertex2i(175, 340);
	glVertex2i(167.5, 365);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(185, 340);
	glVertex2i(200, 340);
	glVertex2i(192.5, 365);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(210, 340);
	glVertex2i(225, 340);
	glVertex2i(217.5, 365);
	glEnd();	
}
void myInit() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	Piernas();
	Brazos();
	Cuerpo();
	Cabeza();	
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Robot");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
