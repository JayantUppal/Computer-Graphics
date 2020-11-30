#include <GL/glut.h>

GLfloat xRotated, yRotated, zRotated;
GLdouble radius=1;

void redisplayFunc(void)
{
    glMatrixMode(GL_MODELVIEW);
    // clear the drawing buffer.
    glClear(GL_COLOR_BUFFER_BIT);
    // clear the identity matrix.
    glLoadIdentity();
    // traslating the draw by z = -4.0
    glTranslatef(0.0,0.0,-4.5);
    // Green color is used to draw.
    glColor3f(0.1, 0.8, 0.1); 

    // changing in transformation matrix.
    // rotation about X axis
    glRotatef(xRotated,1.0,0.0,0.0);
    // rotation about Y axis
    glRotatef(yRotated,0.0,1.0,0.0);
    // rotation about Z axis
    glRotatef(zRotated,0.0,0.0,1.0);
    // scaling transfomation 
    glScalef(1.0,1.0,1.0);

    // built-in (glut library) function , draw you a sphere.
    glutSolidSphere(radius,20,20);
    // Flush buffers to screen
    glFlush();        
}

void reshapeFunc(int x, int y)
{
    //Nothing is visible then, so return
    if (y == 0 || x == 0) 
        return;  
        
    //Set a new projection matrix
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();

    //Angle of view:40 degrees
    //Near clipping plane distance: 0.5
    //Far clipping plane distance: 20.0    
    gluPerspective(40.0, (GLdouble)x/(GLdouble)y, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
    //Use the whole window for rendering
    glViewport(0,0,x,y);  
}

void idleFunc(void)
{
    yRotated += 0.01; 
    redisplayFunc();
}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
    // window size
    glutInitWindowSize(400,350);
    // create the window 
    glutCreateWindow("Sphere");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    xRotated = yRotated = zRotated = 30.0;
    xRotated=33;
    yRotated=40;
    glClearColor(0.0,0.0,0.0,0.0);
    
    glutDisplayFunc(redisplayFunc);
    glutReshapeFunc(reshapeFunc);
    glutIdleFunc(idleFunc);
    
    glutMainLoop();
    return 0;
}