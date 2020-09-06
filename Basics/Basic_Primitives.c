//OpenGL Geometric Primitives

#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/freeglut.h>

void display();

int main(int argc, char** argv)
{
		glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(200,200);
    glutInitWindowSize(500,500);

    glutCreateWindow("Geometric Primitives");
		glClearColor(0.8, 0, 0, 1);

    glutDisplayFunc(display);
    glutMainLoop();

		return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.9, 0.7);
	glVertex2f(-0.7, 0.7);
	glVertex2f(-0.8, 0.9);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.95, 0.6);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Triangle");

	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex2f(0.2, 0.7);
	glVertex2f(-0.2, 0.7);
	glVertex2f(-0.2, 0.9);
	glVertex2f(0.2, 0.9);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.1, 0.6);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Quad");

	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0.8, 0.7);
	glVertex2f(0.7, 0.7);
	glVertex2f(0.6, 0.8);
	glVertex2f(0.7, 0.9);
	glVertex2f(0.8, 0.9);
	glVertex2f(0.9, 0.8);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(0.7, 0.6);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Poly");

	glColor3f(0, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(-0.9, 0.3);
	glVertex2f(-0.7, 0.3);
	glEnd();

	glColor3f(0, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(-0.9, 0.2);
	glVertex2f(-0.7, 0.2);
	glEnd();

	glColor3f(0, 0, 1);
	glBegin(GL_LINES);
	glVertex2f(-0.9, 0.1);
	glVertex2f(-0.7, 0.1);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.9, 0);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Lines");

	glColor3f(0, 0, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.1, 0.1);
	glVertex2f(0, 0.3);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.2, 0.3);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.1, 0);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Line Strip");

	glColor3f(0, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.7, 0.1);
	glVertex2f(0.9, 0.1);
	glVertex2f(0.8, 0.3);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(0.65, 0);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Line loop");

	glColor3f(0, 0, 1);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2f(0.6, -0.2);
	glVertex2f(0.7, -0.2);
	glVertex2f(0.8, -0.2);
	glVertex2f(0.5, -0.3);
	glVertex2f(0.6, -0.3);
	glVertex2f(0.7, -0.3);
	glEnd();

	glColor3f(1, 1, 1);
	glRasterPos2f(0.6, -0.4);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Points");

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.6, -0.4);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"OpenGL");

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.6, -0.5);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Geometric");

	glColor3f(1, 1, 1);
	glRasterPos2f(-0.6, -0.6);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18 ,"Primitives");

	glFlush();
}
