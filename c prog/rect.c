// C program to demonstrate
// drawing a circle using
// OpenGL
#include<stdio.h>
#include<GL/glut.h>


int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE );

	// giving window size in X- and Y- direction
	glutInitWindowSize(200,200);
	// glutInitWindowPosition(0, 0);

	// Giving name to window
	glutCreateWindow("Circle Drawing");
	glBegin(GL_LINES);
	    glVertex2f(0, 0);
	    glVertex2f(200, 200);
	glEnd();

	glutMainLoop();
}
