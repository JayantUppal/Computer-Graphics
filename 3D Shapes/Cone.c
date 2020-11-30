#include <GL/glut.h>

GLfloat xRotated, yRotated, zRotated;

// Cone
GLdouble base=1;
GLdouble height=1.5;
GLint slices =50;
GLint stacks =50;

void displayCone(void)
{
    glMatrixMode(GL_MODELVIEW);
    // clear the drawing buffer.
    glClear(GL_COLOR_BUFFER_BIT);
    // clear the identity matrix.
    glLoadIdentity();
    // traslate the draw by z = -4.0
    glTranslatef(0.0,0.0,-4.5);
    // Red color is used to draw.
    glColor3f(0.8, 0.2, 0.1); 

    // changing in transformation matrix.
    // rotation about X axis
    glRotatef(xRotated,1.0,0.0,0.0);
    // rotation about Y axis
    glRotatef(yRotated,0.0,1.0,0.0);
    // rotation about Z axis
    glRotatef(zRotated,0.0,0.0,1.0);
    // scaling transfomation 
    glScalef(1.0,1.0,1.0);

    // built-in (glut library) function 
    glutSolidCone(base,height,slices,stacks);
    // Flush buffers to screen
    glFlush();        
}

void reshapeCone(int x, int y)
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
    //Use the whole window for rendering
    glViewport(0,0,x,y);  
}

void idleCone(void)
{
    yRotated += 0.01; 
    displayCone();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
    glutInitWindowSize(400,350);
    glutCreateWindow("Cone");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    xRotated = yRotated = zRotated = 30.0;
    xRotated=33;
    yRotated=40;
    glClearColor(0.0,0.0,0.0,0.0);

    glutDisplayFunc(displayCone);
    glutReshapeFunc(reshapeCone);
    glutIdleFunc(idleCone);
    glutMainLoop();
    return 0;
}