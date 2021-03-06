#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <string.h>
#include <stdio.h>
typedef struct {
        float x;
        float y;
        float width;
        float height;
        float red;
        float green;
        float blue;
        float alpha;
        float fullscreen;
        char title[128];
        int id;
        void (*process)(void *self);
}mosaicgraph_window_t;

typedef struct {
        int len;
        float *coordinates;
        float red;
        float green;
        float blue;
        void (*process)(void *self);
}mosaicgraph_polygon_t;


mosaicgraph_window_t * mosaicgraph_create_window(float width, float height);
int mosaicgraph_draw_window(mosaicgraph_window_t * window);
mosaicgraph_polygon_t * mosaicgraph_colored_polygon(mosaicgraph_polygon_t * triangle, float red, float green, float blue);
/*
mosaicgraph_polygon_t * mosaicgraph_create_triangle(float x1, float y1,float x2, float y2,float x3, float y3);
void mosaicgraph_draw_triangle(mosaicgraph_polygon_t triangle);
mosaicgraph_polygon_t * mosaicgraph_create_retangle(float xMin, float xMax,float yMin, float yMax);
void mosaicgraph_draw_retangle(mosaicgraph_polygon_t retangle);
mosaicgraph_polygon_t * mosaicgraph_create_paralelogram(float xMin, float xMax,float yMin, float yMax,float dist);
void mosaicgraph_draw_paralelogram(mosaicgraph_polygon_t paralelogram);*/
mosaicgraph_polygon_t * mosaicgraph_create_polygon(int countVertex, float * vertex);
void mosaicgraph_draw_polygon(mosaicgraph_polygon_t polygon);
