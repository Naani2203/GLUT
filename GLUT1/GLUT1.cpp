#include"stdafx.h"
#include<GL/glut.h>


void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glClearColor(0.01f, 0.5f, 0.8f,0);
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.3f, 0.2f, 0.9f);
	glVertex3f(-0.5, -0.5, 0.0);
	glColor3f(0.1f, 0.5f, 0.8f);
	glVertex3f(0.5, 0.0, 0.0);
	glColor3f(0.49f, 0.1f, 0.7f);
	glVertex3f(0.0, 0.5, 0.0);
	glEnd();

	glutSwapBuffers();
}

int main(int argc, char **argv) {

	// init GLUT and create Window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(320, 320);
	glutCreateWindow("Lighthouse3D - GLUT Tutorial");

	// register callbacks
	glutDisplayFunc(renderScene);

	// enter GLUT event processing cycle
	glutMainLoop();

	return 1;
}
