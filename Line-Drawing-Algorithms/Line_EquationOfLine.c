// Draw a line using equation of line Y=m*X+C.
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<math.h>

void init();
void display();
float x_1, y_1, x_2, y_2, start, end, y, m, c;

int main(int argc, char** argv)
{
  printf("Window size - 500x500 i.e. range of x and y is 0 -> 500\n");
  printf("Enter the two end-points of the line:-\n");

  printf("x1: ");
  scanf("%f", &x_1);

  printf("y1: ");
  scanf("%f", &y_1);

  printf("x2: ");
  scanf("%f", &x_2);

  printf("y2: ");
  scanf("%f", &y_2);

  glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Line using y = Mx + C");

  init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void init()
{
  glClearColor(0.8, 0, 0, 1);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 500, 0, 500);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0, 0, 1);
	glPointSize(5);
	glBegin(GL_POINTS);

  if((int)x_1 == (int)x_2) //Vertical line, the slope is undefined
  {
    start = y_1 < y_2 ? y_1 : y_2;
    end = y_1 < y_2 ? y_2 : y_1;

    while(start <= end)
    {
      glVertex2f((int)x_1, (int)start);
      start++;
    }
  }
  else // if slope < 1 || slope == 1 || slope > 1
  {
    m = (y_2 - y_1)/(x_2 - x_1);
    c = y_1 - m * x_1;

    start = x_1 < x_2 ? x_1 : x_2;
    end = x_1 < x_2 ? x_2 : x_1;

    while(start <= end)
    {
      y = m * start + c;
      y = round(y);
      glVertex2f((int)start, (int)y);
      start++;
    }
  }
	glEnd();
	glFlush();
}
