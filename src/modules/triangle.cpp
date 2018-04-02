#include <GL/glut.h>
#include <GL/gl.h>  
#include <GL/glu.h> 
#include <string.h>

typedef struct {
        float x1;
        float y1;
        float x2;
        float y2;
        float x3;
        float y3;
        float red;
        float green;
        float blue;
        float alpha;
        void (*process)(void *self);
}mosaicgraph_triangle_t;