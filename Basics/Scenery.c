//Scenery using keyboard and mouse events
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<math.h>

void init()
{
	//Background color - sky
	glClearColor(0.360, 0.847, 1, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,700,0,700);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	int x, y, temp_int;
	float temp;

	//Road
	glColor3f(0.211, 0.211, 0.211);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0); glVertex2i(700, 0); glVertex2i(700, 150); glVertex2i(0, 150);
	glEnd();

	//Diversion
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(20,65); glVertex2i(100,65); glVertex2i(100,80); glVertex2i(20,80);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(120,65); glVertex2i(200,65); glVertex2i(200,80); glVertex2i(120,80);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON); glVertex2i(220,65); glVertex2i(300,65); glVertex2i(300,80); glVertex2i(220,80);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(320,65); glVertex2i(400,65); glVertex2i(400,80);	glVertex2i(320,80);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(420,65);	glVertex2i(500,65);	glVertex2i(500,80);	glVertex2i(420,80);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(520,65);	glVertex2i(600,65);	glVertex2i(600,80);	glVertex2i(520,80);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(620,65);	glVertex2i(680,65); glVertex2i(680,80); glVertex2i(620,80);
	glEnd();

	//Sun
	x = 300;
	y = 550;
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2d(x,y);
	while(x < 400)
	{
		x = x + 1;
		temp = sqrt(pow(50,2)-pow(x-350,2));

		temp_int = temp+0.5;
		glVertex2d(x,y+temp_int); glVertex2d(x,y-temp_int);
	}
	glEnd();

	//Background - Hills
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(0,420); glVertex2i(700,420); glVertex2i(700,530); glVertex2i(0,530);
	glEnd();

	//Background - Grass
	glColor3f(0,1,0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 150); glVertex2i(700,150); glVertex2i(700,420); glVertex2i(0,420);
	glEnd();

	//Hills
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 530); glVertex2i(200, 530); glVertex2i(100, 660);
	glEnd();
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(200, 530); glVertex2i(350, 530); glVertex2i(275, 620);
	glEnd();
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(350, 530); glVertex2i(600, 530); glVertex2i(475, 680);
	glEnd();
	glColor3f(0.27,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(600, 530); glVertex2i(700, 530); glVertex2i(650, 575);
	glEnd();

	// House - front
	glColor3f(1, 0.396, 0.039);
	glBegin(GL_POLYGON);
	glVertex2i(200, 150); glVertex2i(360, 150);	glVertex2i(360, 370);	glVertex2i(200, 370);
	glEnd();

	// House - side
	glColor3f(0.796, 0.098, 0.082);
	glBegin(GL_POLYGON);
  glVertex2i(360, 150); glVertex2i(600, 150); glVertex2i(600, 370); glVertex2i(360, 370);
	glEnd();

	// House - triangle
	glColor3f(0.796, 0.098, 0.082);
	glBegin(GL_POLYGON);
	glVertex2i(200,370); glVertex2i(360,370); glVertex2i(280,500);
	glEnd();

	// House - circle
	x = 260;
	y = 420;
	glColor3f(1, 0.956, 0.619);
	glBegin(GL_POLYGON);
	glVertex2d(x,y);
	while(x < 300)
	{
		x += 1;
		temp = sqrt(pow(20,2)-pow(x-280,2));
		temp_int = temp+0.5;
		glVertex2d(x, y+temp_int); glVertex2d(x, y-temp_int);
	}
	glEnd();

	//House - roof
	glColor3f(0.121, 0.509, 0.070);
	glBegin(GL_POLYGON);
	glVertex2i(360, 370); glVertex2i(600, 370); glVertex2i(520, 500); glVertex2i(280, 500);
	glEnd();

	//Door
	glColor3f(0.121, 0.509, 0.070);
	glBegin(GL_POLYGON);
	glVertex2i(250,150);	glVertex2i(310,150);	glVertex2i(310,270);	glVertex2i(250,270);
	glEnd();

	//Window
	glColor3f(1, 0.956, 0.619);
	glBegin(GL_POLYGON);
	glVertex2i(430,200); glVertex2i(530,200); glVertex2i(530,300); glVertex2i(430,300);
	glEnd();

	//Window Lines
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(474,200); glVertex2i(478,200); glVertex2i(478,300); glVertex2i(474,300);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(484,200); glVertex2i(488,200); glVertex2i(488,300); glVertex2i(484,300);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(430,252); glVertex2i(530,252); glVertex2i(530,256); glVertex2i(430,256);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(430,244); glVertex2i(530,244); glVertex2i(530,248); glVertex2i(430,248);
	glEnd();

	//Chimney
	glColor3f(0.796, 0.098, 0.082);
	glBegin(GL_POLYGON);
	glVertex2i(480,500); glVertex2i(510,500); glVertex2i(510,530); glVertex2i(480,530);
	glEnd();

	glFlush();
}

void Mouse(int button, int state, int x, int y)
{
	int temp_int;
	float temp;
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//Stop sign pole
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);
		glVertex2i(66,150); glVertex2i(73,150); glVertex2i(73,300); glVertex2i(66,300);
		glEnd();

		//Hut board base circle - black
		x = 40;
		y = 280;
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);
		glVertex2d(x,y);
		while(x < 104)
		{
			x = x + 1;
			temp = sqrt(pow(32,2)-pow(x-72,2));

			temp_int = temp+0.5;
			glVertex2d(x,y+temp_int); glVertex2d(x,y-temp_int);
		}
		glEnd();

		//Hut board circle - white
		x = 43;
		y = 280;
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);
		glVertex2d(x,y);
		while(x < 99)
		{
			x = x + 1;
			temp = sqrt(pow(28,2)-pow(x-71,2));

			temp_int = temp+0.5;
			glVertex2d(x,y+temp_int); glVertex2d(x,y-temp_int);
		}
		glEnd();

		//Hut board - text
		glColor3f(1, 0, 0);
		glRasterPos2f(52, 283);
		glutBitmapString(GLUT_BITMAP_HELVETICA_18, "HUT\n#01");
	}
	glFlush();
}

void Keyboard(unsigned char key, int x, int y )
{
	if(key)
	{
		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 480,530 ); glVertex2d( 476,600 );
		glEnd();
		glFlush();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 485,530 ); glVertex2d( 480,600 );
		glEnd();
		glFlush();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 490,530 ); glVertex2d( 490,610 );
		glEnd();
		glFlush();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 495,530 ); glVertex2d( 495,610 );
		glEnd();
		glFlush();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 500,530 ); glVertex2d( 500,610 );
		glEnd();
		glFlush();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 505,530 ); glVertex2d( 509,600 );
		glEnd();
		glFlush();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 510,530 ); glVertex2d( 514,600 );
		glEnd();

		glColor3f(1.0, 1.0, 1.0);
		glBegin( GL_LINES );
		glVertex2d( 510,530 ); glVertex2d( 522,580 );
		glEnd();
		glFlush();
	}
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutCreateWindow("Scenery");

	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(Keyboard);
	glutMouseFunc(Mouse);

	glutMainLoop();
	return 0;
}
