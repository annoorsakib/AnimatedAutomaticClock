#include<windows.h>
#include<GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void display ()

{
glClearColor(1.0f,1.0f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
int i;

glScalef(0.8f,0.8f,0.0f);
glTranslatef(0.0f,0.0f,0.0f);
glColor3ub(82, 87, 62);

	GLfloat x10=0.0f; GLfloat x20=0.0f; GLfloat radius10 =1.1f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	GLfloat twicePi0 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10,x20); // center of circle
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x10+ (radius10 * cos(i *  twicePi0 / triangleAmount10)),
			    x20+ (radius10* sin(i * twicePi0 / triangleAmount10))
			);
		}
	glEnd();

glColor3ub(204, 220, 232);
	GLfloat x1=0.0f; GLfloat x2=0.0f; GLfloat radius1 =1.0f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1,x2); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1+ (radius1 * cos(i *  twicePi / triangleAmount1)),
			    x2+ (radius1* sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();

	glColor3ub(235, 150, 141);
	GLfloat x11=0.0f; GLfloat x21=0.0f; GLfloat radius11 =0.8f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11,x21); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x11+ (radius11 * cos(i *  twicePi1 / triangleAmount11)),
			    x21+ (radius11* sin(i * twicePi1 / triangleAmount11))
			);
		}
	glEnd();

glScalef(0.8f,0.8f,0.0f);
glTranslatef(0.0f,0.0f,0.0f);
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
glRotatef(l,0.0,0.0,-0.1);

	glLineWidth(5);
	glColor3ub(92, 5, 70);
   glBegin(GL_LINES);
      glVertex2f( 0.0f, 0.05f);
      glVertex2f( 0.0f, 0.35f);
      glEnd();
    glPopMatrix();
	glLoadIdentity();
    l+=0.0003f;

glScalef(0.8f,0.8f,0.0f);
glTranslatef(0.0f,0.0f,0.0f);
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
glRotatef(k,0.0,0.0,-0.1);
      glLineWidth(5.5);
	glColor3ub(44, 64, 212);
   glBegin(GL_LINES);
      glVertex2f( 0.0f, -0.05f);
      glVertex2f( 0.0f, -0.47f);
      glEnd();
    glPopMatrix();
	glLoadIdentity();
    k+=0.003f;

glScalef(0.8f,0.8f,0.0f);
glTranslatef(0.0f,0.0f,0.0f);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(j,0.0,0.0,-0.1);
      glLineWidth(1.5);
	glColor3ub(207, 0, 17);
   glBegin(GL_LINES);
      glVertex2f( 0.05f, 0.00f);
      glVertex2f( 0.6f, 0.0f);
      glEnd();
    glPopMatrix();
	glLoadIdentity();
    j+=0.04f;


      glColor3ub(0,0,0);
	GLfloat radius12 =.05f;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1,x2); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1+ (radius12 * cos(i *  twicePi / triangleAmount1)),
			    x2+ (radius12* sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();

glScalef(0.8f,0.8f,0.0f);
glTranslatef(0.0f,0.0f,0.0f);
	glLineWidth(5.5);
	glColor3ub(82, 44, 40);
   glBegin(GL_LINES);
      glVertex2f( 0.65f, 0.00f);
      glVertex2f( 0.6f, 0.0f);

      glVertex2f( -0.65f, 0.00f);
      glVertex2f( -0.6f, 0.0f);

      glVertex2f( 0.0f, 0.65f);
      glVertex2f( 0.0f, 0.6f);

      glVertex2f( 0.0f, -0.65f);
      glVertex2f( 0.0f, -0.6f);

      glVertex2f( 0.45f, -0.45f);
      glVertex2f( 0.45f, -0.5f);

      glVertex2f( -0.45f, -0.45f);
      glVertex2f( -0.45f, -0.5f);

      glVertex2f( 0.45f, 0.45f);
      glVertex2f( 0.45f, 0.5f);

      glVertex2f( -0.45f, 0.45f);
      glVertex2f( -0.45f, 0.5f);


      glEnd();
glLoadIdentity();

glFlush();

}
int main (int argc, char**argv)
{
glutInit(&argc,argv);
glutCreateWindow("OpenGL Setup Test");
glutInitWindowSize (420,320);
glutDisplayFunc(display);

glutIdleFunc(Idle);
glutMainLoop ();
return 0;
}
