#include "createCanvas.h"

mosaicgraph_window_t * mosaicgraph_create_window(float width, float height){
	mosaicgraph_window_t * window = (mosaicgraph_window_t *) malloc(sizeof(mosaicgraph_window_t));
	window->fullscreen = 0;
	window->x = 0;
	window->y = 0;
	window->width = width;
	window->height = height;
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
mosaicgraph_polygon_t * mosaicgraph_colored_polygon(mosaicgraph_polygon_t * triangle, float red, float green, float blue){
    triangle->red = red;
    triangle->green = green;
    triangle->blue = blue;
  	return triangle;
}
/*
mosaicgraph_polygon_t * mosaicgraph_create_triangle(float x1, float y1,float x2, float y2,float x3, float y3){
	mosaicgraph_polygon_t * triangle = (mosaicgraph_polygon_t *) malloc(sizeof(mosaicgraph_polygon_t));
	triangle->x1 = x1;
	triangle->y1 = y1;
	triangle->x2 = x2;
	triangle->y2 = y2;
	triangle->x3 = x3;
	triangle->y3 = y3;
	triangle->red = 1.0f;
	triangle->green = 1.0f;
	triangle->blue = 1.0f;
	return triangle;
}
void mosaicgraph_draw_triangle(mosaicgraph_polygon_t triangle){
	glColor3f(triangle.red,triangle.green,triangle.blue);
	glBegin(GL_POLYGON);
		glVertex3f(triangle.x1,triangle.y1,0.0f);
	    glVertex3f(triangle.x2,triangle.y2,0.0f);
    	glVertex3f(triangle.x3,triangle.y3,0.0f);
  	glEnd();
}
mosaicgraph_polygon_t * mosaicgraph_create_retangle(float xMin, float xMax,float yMin, float yMax){
	mosaicgraph_polygon_t * retangle = (mosaicgraph_polygon_t *) malloc(sizeof(mosaicgraph_polygon_t));
	retangle->x1 = xMin;
	retangle->y1 = yMin;
	retangle->x2 = xMax;
	retangle->y2 = yMax;
	retangle->red = 1.0f;
	retangle->green = 1.0f;
	retangle->blue = 1.0f;
	return retangle;
}
void mosaicgraph_draw_retangle(mosaicgraph_polygon_t retangle){
	glColor3f(retangle.red,retangle.green,retangle.blue);
	glBegin(GL_POLYGON);
		glVertex3f(retangle.x1,retangle.y1,0.0f);
	    glVertex3f(retangle.x1,retangle.y2,0.0f);
    	glVertex3f(retangle.x2,retangle.y2,0.0f);
    	glVertex3f(retangle.x2,retangle.y1,0.0f);
  	glEnd();
}
mosaicgraph_polygon_t * mosaicgraph_create_paralelogram(float xMin, float xMax,float yMin, float yMax,float dist){
	mosaicgraph_polygon_t * paralelogram = (mosaicgraph_polygon_t *) malloc(sizeof(mosaicgraph_polygon_t));
	paralelogram->x1 = xMin;
	paralelogram->y1 = yMin;
	paralelogram->x2 = xMax;
	paralelogram->y2 = yMax;
	paralelogram->x3 = dist;
	paralelogram->red = 1.0f;
	paralelogram->green = 1.0f;
	paralelogram->blue = 1.0f;
	return paralelogram;
}
void mosaicgraph_draw_paralelogram(mosaicgraph_polygon_t paralelogram){
	glColor3f(paralelogram.red,paralelogram.green,paralelogram.blue);
	glBegin(GL_POLYGON);
		glVertex3f(paralelogram.x1,paralelogram.y1,0.0f);
	    glVertex3f(paralelogram.x1+paralelogram.x3,paralelogram.y2,0.0f);
    	glVertex3f(paralelogram.x2,paralelogram.y2,0.0f);
    	glVertex3f(paralelogram.x2-paralelogram.x3,paralelogram.y1,0.0f);
  	glEnd();
}
*/
mosaicgraph_polygon_t * mosaicgraph_create_polygon(int countVertex, float * vertex){
		mosaicgraph_polygon_t * polygon = (mosaicgraph_polygon_t *) malloc(sizeof(mosaicgraph_polygon_t));
		float * vector = (float *)malloc(countVertex*2*sizeof(float));
		polygon->len = countVertex;
		for (int i=0;i<countVertex*2;i++){
			vector[i] = vertex[i];
		}
		polygon->coordinates = vector;
		return polygon;
}
void mosaicgraph_draw_polygon(mosaicgraph_polygon_t polygon){
	glColor3f(polygon.red,polygon.green,polygon.blue);
	glBegin(GL_POLYGON);
		for(int i =0;i < polygon.len*2;i=i+2){
			glVertex3f(polygon.coordinates[i],polygon.coordinates[i+1],0.0);
		}


	glEnd();
}
