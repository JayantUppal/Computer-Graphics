// Draw a line using Bresenham’s Line Algorithm.
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<math.h>

void init();
void display();
int x_0, y_0, x_1, y_1, delta_x, delta_y, xk, yk, pk, ux, uy;

int main(int argc, char** argv)
{
  printf("Window size - 500x500 i.e. range of x and y is 0 -> 500\n");
  printf("Enter the two end-points of the line:-\n");

  printf("x0: ");
  scanf("%d", &x_0);

  printf("y0: ");
  scanf("%d", &y_0);

  printf("x1: ");
  scanf("%d", &x_1);

  printf("y1: ");
  scanf("%d", &y_1);

  glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Line using Bresenham's Algorithm");

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

  glColor3f(0.211, 0.211, 0.211);
	glPointSize(5);
	glBegin(GL_POINTS);

  delta_x = x_1  - x_0;
  delta_y = y_1 - y_0;

  //Checking end points
  if(delta_x < 0)
    delta_x = -delta_x;
  if(delta_y < 0)
    delta_y = -delta_y;

  if(x_1 < x_0)
    ux = -1;
  else
    ux = 1;
  if(y_1 < y_0)
    uy = -1;
  else
    uy = 1;

  //Initializing starting variables
  xk = x_0; yk = y_0;

  if(delta_x > delta_y) //for m<1
  {
    //Calculating decision parameter
    pk = 2*delta_y - delta_x;

    glVertex2f(xk, yk);
    for(int i = 0; i < delta_x; i++)
    {
      xk += ux;
      if(pk < 0)
        pk += 2*delta_y;
      else
      {
        pk += 2*delta_y - 2*delta_x;
        yk += uy;
      }
      glVertex2f(xk, yk);
    }
  }
  else //for m>=1
  {
    //Calculating decision parameter
    pk = 2*delta_x - delta_y;

    glVertex2f(xk, yk);
    for(int i = 0; i < delta_y; i++)
    {
      yk += uy;
      if(pk < 0)
        pk += 2*delta_x;
      else
      {
        pk += 2*delta_x - 2*delta_y;
        xk += ux;
      }
      glVertex2f(xk, yk);
    }
  }
	glEnd();
	glFlush();
}
