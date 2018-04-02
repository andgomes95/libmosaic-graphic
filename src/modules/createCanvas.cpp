#include <GL/glut.h>
#include <GL/gl.h>  
#include <GL/glu.h> 
#include <string.h>
#include "include/createCanvas.h"

mosaicgraph_window_t * mosaicgraph_create_window(float width, float height){
	mosaicgraph_window_t * window = (mosaicgraph_window_t *) malloc(sizeof(mosaicgraph_window_t));
	window->fullscreen = 0;
	window->x = 0;
	window->y = 0;
	window->title[0] = '\0';
	return window;
}
int mosaicgraph_draw_window(mosaicgraph_window_t * window){
    glutInitWindowPosition(window->x, window->y);
    glutInitWindowSize(window->width, window->height);
	glClearColor(window->red, window->green, window->blue, window->alpha);
	glClear(GL_COLOR_BUFFER_BIT);        
    window->id = glutCreateWindow(window->title); 
    if (window->fullscreen){
   		glutFullScreen();
    }
    glFlush();
	glutSwapBuffers(); 
    return window->id;
}

/*int main (int argc, char** argv){
	glutInit(&argc, argv);// Initialize GLUT

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);  
	mosaicgraph_window_t * window1 = mosaicgraph_create_window(200,400);
	strcpy(window1->title, "Hey Ho, let's go!");
    mosaicgraph_draw_window(window1);
    glutMainLoop();           
	return 0;
}*/