#include "createCanvas.h"

int main (int argc, char** argv){
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);  
	mosaicgraph_window_t * window1 = mosaicgraph_create_window(500,500);
	strcpy(window1->title, "Casinha");
    mosaicgraph_draw_window(window1);
    //triangulo do telhado
    mosaicgraph_polygon_t * triangle = mosaicgraph_create_triangle(-1.0,0.0,-0.75,1.0,-0.5,0.0);
    triangle = mosaicgraph_colored_polygon(triangle,0.5,0.7,0.3);
    mosaicgraph_draw_triangle(*triangle);
    //retangulo da fachada
    mosaicgraph_polygon_t * retangle = mosaicgraph_create_retangle(-1.0,-0.5,-1.0,0.0);
    retangle = mosaicgraph_colored_polygon(retangle,1.0,0.4,0.7);
    mosaicgraph_draw_retangle(*retangle);
    //retangulo da porta
    mosaicgraph_polygon_t * retangle2 = mosaicgraph_create_retangle(-0.85,-0.65,-1.0,-0.5);
    retangle2 = mosaicgraph_colored_polygon(retangle2,0.0,0.4,0.7);
    mosaicgraph_draw_retangle(*retangle2);
    //paralelograma do telhado
    mosaicgraph_polygon_t * paralelogram = mosaicgraph_create_paralelogram(-0.5,0.5,0.0,1.0,-0.25);
    paralelogram = mosaicgraph_colored_polygon(paralelogram,0.0,0.4,0.7);
    mosaicgraph_draw_paralelogram(*paralelogram);
    //retangulo da parede
    mosaicgraph_polygon_t * retangle3 = mosaicgraph_create_retangle(-0.5,0.75,0.0,-1.0);
    retangle3 = mosaicgraph_colored_polygon(retangle3,0.0,1.0,0.7);
    mosaicgraph_draw_retangle(*retangle3);
    glutSwapBuffers();
    glutMainLoop();           
	return 0;
}