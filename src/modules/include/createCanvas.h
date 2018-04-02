
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

mosaicgraph_window_t * mosaicgraph_create_window(float width, float height);
int mosaicgraph_draw_window(mosaicgraph_window_t * window);