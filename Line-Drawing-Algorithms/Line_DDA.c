// Draw a line using DDA algorithm for slope m<1 , m>1 and m=1.
#include<stdio.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<math.h>

void init();
void display();
float x_1, y_1, x_0, y_0, x, y, m, start, end;

int main(int argc, char** argv)
{
  printf("Window size - 500x500 i.e. range of x and y is 0 -> 500\n");
  printf("Enter the two end-points of the line:-\n");

  printf("x0: ");
  scanf("%f", &x_0);

  printf("y0: ");
  scanf("%f", &y_0);

  printf("x1: ");
  scanf("%f", &x_1);

  printf("y1: ");
  scanf("%f", &y_1);

  glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Line using DDA algorithm");

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

  glColor3f(1,1,0);
	glPointSize(5);
	glBegin(GL_POINTS);

  m = (y_1 - y_0)/(x_1 - x_0);

  if ((int)x_0 == (int)x_1) //Vertical line, the slope is undefined
  {
    start = y_0 < y_1 ? y_0 : y_1;
    end = y_0 < y_1 ? y_1 : y_0;

    x = x_0;

    for(y=start; y<=end; y++)
      glVertex2f((int)x, (int)y);
  }
  else if (m < 1) //Slope < 1
  {
    start = x_0 < x_1 ? x_0 : x_1;
    end = x_0 < x_1 ? x_1 : x_0;

    y = x_0 < x_1 ? y_0 : y_1;

    for(x=start; x<=end; x++)
    {
      glVertex2f((int)x, (int)y);
      y += m;
    }
  }
  else if (m > 1) //Slope > 1
  {
    start = y_0 < y_1 ? y_0 : y_1;
    end = y_0 < y_1 ? y_1 : y_0;
    x = y_0 < y_1 ? x_0 : x_1;

    for(y=start; y<=end; y++)
    {
      glVertex2f((int)x, (int)y);
      x += 1/m;
    }
  }
  else //Slope == 1
  {
    start = x_0 < x_1 ? x_0 : x_1;
    end = x_0 < x_1 ? x_1 : x_0;

    y = x_0 < x_1 ? y_0 : y_1;

    for(x=start; x<=end; x++)
    {
      glVertex2f((int)x, (int)y);
      y++;
    }
  }
	glEnd();
	glFlush();
}
