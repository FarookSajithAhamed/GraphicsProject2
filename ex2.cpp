#include <windows.h>
#include <glut.h>

void init()
{
	glClearColor (0.0, 0.0, 0.0, 1.0);

	glColor3f(1.0, 1.0, 1.0); 

	glMatrixMode (GL_PROJECTION);    
	glLoadIdentity ();    
	glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);  
}


void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glBegin(GL_POLYGON);   
		glColor3f(1.0, 0.0, 1.0); 
		glVertex2f(0.0,1.0);
		glVertex2f(3.0,1.0);
		glVertex2f(3.0,0.0);
		glVertex2f(0.0,0.0);
	glEnd();

	glBegin(GL_POLYGON);   
		glColor3f(1.0, 0.0, 1.0); 
		glVertex2f(0.0,0.0);
		glVertex2f(1.0,0.0);
		glVertex2f(1.0,-2.0);
		glVertex2f(0.0,-2.0);
	glEnd();

	glBegin(GL_POLYGON);   
		glColor3f(1.0, 0.0, 1.0); 
		glVertex2f(1.0,-1.0);
		glVertex2f(3.0,-1.0);
		glVertex2f(3.0,-2.0);
		glVertex2f(1.0,-2.0);
	glEnd();

	glBegin(GL_POLYGON);   
		glColor3f(1.0, 0.0, 1.0); 
		glVertex2f(2.0,-2.0);
		glVertex2f(3.0,-2.0);
		glVertex2f(3.0,-4.0);
		glVertex2f(2.0,-4.0);
	glEnd();

	glBegin(GL_POLYGON);   
		glColor3f(1.0, 0.0, 1.0); 
		glVertex2f(0.0,-3.0);
		glVertex2f(2.0,-3.0);
		glVertex2f(2.0,-4.0);
		glVertex2f(0.0,-4.0);
		
	glEnd();
	glFlush(); 
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("simple");     
	glutDisplayFunc(mydisplay);  
	init();  
	glutMainLoop();
}