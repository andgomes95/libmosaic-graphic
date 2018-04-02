#include "../../src/modules/createCanvas.h"

int main (int argc, char** argv){
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);  
	mosaicgraph_window_t * window1 = mosaicgraph_create_window(200,400);
	strcpy(window1->title, "Hey Ho, let's go!");
    mosaicgraph_draw_window(window1);
    glutMainLoop();           
	return 0;
}