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
        float x1;
        float y1;
        float x2;
        float y2;
        float x3;
        float y3;
        float x4;
        float y4;
        float red;
        float green;
        float blue;
        void (*process)(void *self);
}mosaicgraph_polygon_t;

mosaicgraph_window_t * mosaicgraph_create_window(float width, float height);
int mosaicgraph_draw_window(mosaicgraph_window_t * window);
mosaicgraph_polygon_t * mosaicgraph_create_triangle(float x1, float y1,float x2, float y2,float x3, float y3);
void mosaicgraph_draw_triangle(mosaicgraph_polygon_t triangle);
mosaicgraph_polygon_t * mosaicgraph_colored_triangle(mosaicgraph_polygon_t * triangle, float red, float green, float blue);
mosaicgraph_polygon_t * mosaicgraph_create_retangle(float x1, float y1,float x2, float y2,float x3, float y3,float x4, float y4);
void mosaicgraph_draw_retangle(mosaicgraph_polygon_t retangle);
mosaicgraph_polygon_t * mosaicgraph_colored_retangle(mosaicgraph_polygon_t * retangle, float red, float green, float blue);