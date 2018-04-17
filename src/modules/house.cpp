#include "createCanvas.h"

int main (int argc, char** argv){
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);
	mosaicgraph_window_t * window1 = mosaicgraph_create_window(500,500);
	strcpy(window1->title, "Casinha");
    mosaicgraph_draw_window(window1);
		//triangulo do telhado
		float tri[6] = {-1.0,0.0,-0.75,1.0,-0.5,0.0};
		mosaicgraph_polygon_t * triangle = mosaicgraph_create_polygon(3,tri);
		triangle = mosaicgraph_colored_polygon(triangle,0.5,0.7,0.3);
		mosaicgraph_draw_polygon(*triangle);
		//retangulo da fachada
		float ret[8] = {-1.0,-1.0,-0.5,-1.0,-0.5,0.0,-1.0,0.0};
		mosaicgraph_polygon_t * retangle = mosaicgraph_create_polygon(4,ret);
		retangle = mosaicgraph_colored_polygon(retangle,1.0,0.4,0.7);
		mosaicgraph_draw_polygon(*retangle);
		//retangulo da porta
		float ret2[8] = {-0.85,-1.0,-0.85,-0.5,-0.65,-0.5,-0.65,-1.0};
		mosaicgraph_polygon_t * retangle2 = mosaicgraph_create_polygon(4,ret2);
		retangle2 = mosaicgraph_colored_polygon(retangle2,0.0,0.4,0.7);
		mosaicgraph_draw_polygon(*retangle2);
		/*

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
		*/
    glutSwapBuffers();
    glutMainLoop();
	return 0;
}
