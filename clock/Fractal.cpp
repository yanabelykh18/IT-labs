#include "Fractal.h"
#include "stdafx.h"
const float arrow = 10;
const float pi = 3.14159265359;
const float angleSec = 2 * pi / 60;
const float angleMin = 2 * pi / 60;
const float angleH = 2 * pi / 12;
int hour, minute, second = 0;
SYSTEMTIME st;

void drawClock(int hour, int min, int second) {
	glColor3f(1, 1, 1);
	glPointSize(1);
	glBegin(GL_POINTS);
	glVertex2f(0, 0);
	glEnd();

	
	//draw number 3
	glColor3f(0,0,0); //Sets the current color
	glLineWidth(5);
	for (float i = 0.01; i < 0.09; i += 0.03) {
		glBegin(GL_LINES);
		glVertex2f(arrow * (0.52 - i), 1.0);
		glVertex2f(arrow * (0.52 - i), -1.0);
		glEnd();
	}

	// number 9
	glColor3f(0,0,0); //Sets the current color
	glLineWidth(5);
	for (float i = 0.01; i < 0.01; i += 0.01) {
		glBegin(GL_LINES);
		glVertex2f(arrow * (-0.44 - i), 1.0);
		glVertex2f(arrow * (-0.48 - i), -1.0);
		glVertex2f(arrow * (-0.50 - i), 1.0);
		glVertex2f(arrow * (-0.50 - i), -1.0);
		glVertex2f(arrow * (-0.48 - i), 1.0);
		glVertex2f(arrow * (-0.44 - i), -1.0);
		glEnd();
	}
	/*//number 6
	glColor3f(0, 1, 0); //Sets the current color
	glLineWidth(4);
	for (float i = 0.01; i < 0.01; i += 0.01) {
		glBegin(GL_LINES);
		glVertex2f(arrow * (0.075 - i) - 0.25, -4);
		glVertex2f(arrow * (0.075 - i) - 0.25, -5);
		glVertex2f(arrow * (0.05 - i) - 0.25, -4);
		glVertex2f(arrow * (0.02 - i) - 0.25, -5);
		glVertex2f(arrow * (-0.01 - i) - 0.25, -4);
		glVertex2f(arrow * (0.02 - i) - 0.25, -5);
		glEnd();
	}
	//number 12
	glColor3f(0, 1, 0); //Sets the current color
	glLineWidth(4);
	for (float i = 0.01; i < 0.01; i += 0.01) {
		glBegin(GL_LINES);
		glVertex2f(arrow * (0.075 - i) - 0.25, 4);
		glVertex2f(arrow * (0.075 - i) - 0.25, 5);
		glVertex2f(arrow * (0.075 - i), 4);
		glVertex2f(arrow * (0.075 - i), 5);
		glVertex2f(arrow * (0.05 - i) - 0.25, 4);
		glVertex2f(arrow * (0.02 - i) - 0.25, 5);
		glVertex2f(arrow * (-0.01 - i) + 0.05, 4);
		glVertex2f(arrow * (0.02 - i) + 0.05, 5);
		glEnd();
	}*/


	//draw minsector
	glColor3f(0, 0, 0); //Sets the current color
	glLineWidth(4);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 6) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.56 * cos(phi), arrow * 0.56 * sin(phi));
		glVertex2f(arrow * 0.7 * cos(phi), arrow * 0.7 * sin(phi));
	}
	glEnd();

	//draw secsector 
	glColor3f(0, 0, 0); //Sets the current color
	glLineWidth(3);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 30) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.65 * cos(phi), arrow * 0.65 * sin(phi));
		glVertex2f(arrow * 0.7 * cos(phi), arrow * 0.7 * sin(phi));
	}
	glEnd();

	//draw frame
	glColor3f(1, 0, 0);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.68 * cos(phi), arrow * 0.68 * sin(phi));
		glVertex2f(arrow * 0.70 * cos(phi), arrow * 0.70 * sin(phi));
	}
	glEnd();

	glColor3f(1, 0.27, 0);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.70 * cos(phi), arrow * 0.70 * sin(phi));
		glVertex2f(arrow * 0.72 * cos(phi), arrow * 0.72 * sin(phi));
	}
	glEnd();

	glColor3f(1, 1, 0);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.72 * cos(phi), arrow * 0.72 * sin(phi));
		glVertex2f(arrow * 0.74 * cos(phi), arrow * 0.74 * sin(phi));
	}
	glEnd();

	glColor3f(0, 1, 0);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.74 * cos(phi), arrow * 0.74 * sin(phi));
		glVertex2f(arrow * 0.76 * cos(phi), arrow * 0.76 * sin(phi));
	}
	glEnd();

	glColor3f(0, 1, 1);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.76 * cos(phi), arrow * 0.76 * sin(phi));
		glVertex2f(arrow * 0.78 * cos(phi), arrow * 0.78 * sin(phi));
	}
	glEnd();

	glColor3f(0, 0, 1);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.78 * cos(phi), arrow * 0.78 * sin(phi));
		glVertex2f(arrow * 0.80 * cos(phi), arrow * 0.80 * sin(phi));
	}
	glEnd();

	glColor3f(0.5, 0, 0.5);
	glLineWidth(0.6);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 500000) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.80 * cos(phi), arrow * 0.80 * sin(phi));
		glVertex2f(arrow * 0.82 * cos(phi), arrow * 0.82 * sin(phi));
	}
	glEnd();

	

	//draw hoursector
	glColor3f(0, 0, 0); //Sets the current color
	glLineWidth(7);
	for (float phi = 0.0; phi <= 2 * pi; phi += pi / 2) {
		glBegin(GL_LINES);
		glVertex2f(arrow * 0.55 * cos(phi), arrow * 0.55 * sin(phi));
		glVertex2f(arrow * 0.75 * cos(phi), arrow * 0.75 * sin(phi));
	}
	glEnd();

	//draw secArrow
	glColor3f(0, 0, 0); //Sets the current color
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 0);
	glVertex2f(-1 * arrow * 0.45 * -cos((second - 15) * angleSec), -1 * arrow * 0.45 * sin((second - 15) * angleSec));
	glEnd();


	//draw minArrow
	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 0);
	glVertex2f(-1 * arrow * 0.47 * -cos((minute - 15) * angleMin), -1 * arrow * 0.47 * sin((minute - 15) * angleMin));
	glEnd();

	//draw hourArrow
	glColor3f(0, 0, 0);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 0);
	glVertex2f(-1 * arrow * 0.3 * -cos((hour - 15) * angleH), -1 * arrow * 0.3 * sin((hour - 15) * angleH));
	glEnd();
}

void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	drawClock(hour, minute, second);

	glutSwapBuffers();
}


void myInit() {
	glClearColor(1, 1, 1, 0); //sets the bg color
	//glColor3f(1, 0, 0); //Sets the current color
	glPointSize(5); //specifies the diameter of rasterized points
}

void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, timer, 0);
	GetLocalTime(&st);
	second = st.wSecond;
	minute = st.wMinute;
	hour = st.wHour;

}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
}
