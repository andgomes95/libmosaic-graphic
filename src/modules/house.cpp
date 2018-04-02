#include "createCanvas.h"

int main (int argc, char** argv){
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);  
	mosaicgraph_window_t * window1 = mosaicgraph_create_window(500,500);
	strcpy(window1->title, "Casinha");
    mosaicgraph_draw_window(window1);
    mosaicgraph_retangle_t * triangle = mosaicgraph_create_triangle(-1.0,0.0,0.0,1.0,1.0,0.0);
    triangle = mosaicgraph_colored_triangle(triangle,0.5,0.7,0.3);
    mosaicgraph_draw_triangle(*triangle);
    mosaicgraph_retangle_t * retangle = mosaicgraph_create_retangle(-1.0,-1.0,-1.0,0.0,1.0,0.0,1.0,-1.0);
    retangle = mosaicgraph_colored_retangle(retangle,1.0,0.4,0.7);
    mosaicgraph_draw_retangle(*retangle);
    mosaicgraph_retangle_t * retangle2 = mosaicgraph_create_retangle(-0.2,-1.0,-0.2,-0.5,0.2,-0.5,0.2,-1.0);
    retangle = mosaicgraph_colored_retangle(retangle2,0.0,0.4,0.7);
    mosaicgraph_draw_retangle(*retangle2);
    glutSwapBuffers();
    glutMainLoop();           
	return 0;
}