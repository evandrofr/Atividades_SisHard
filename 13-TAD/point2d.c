#include "point2d.h"
#include <stdlib.h>

struct _p {
    double x, y;
};

typedef struct _p Point2D;


Point2D *point2D_new(double x, double y) {
    Point2D *p = malloc(sizeof(Point2D));

    p->x = x;
    p->y = y;

    return p;
}

void point2D_destroy(Point2D *p) {
    free(p);
    p = NULL;
}

double point2D_get_x(Point2D *p) {
    return p->x;
}

double point2D_get_y(Point2D *p) {
    return p->y;
}

Point2D *point2D_add(Point2D *p1, Point2D *p2) {
    double a = p1->x+p2->x;
    double b = p1->y+p2->y;

    Point2D *p = point2D_new(a, b);
    
    return p;
}

double point2D_theta(Point2D *p1, Point2D *p2) {
    double a = p1->x-p2->x;
    double b = p1->y-p2->y;

    return b/a;
}

Point2D *point2D_scale(Point2D *p, double s) {
    double a=p->x*s;
    double b=p->y*s;

    Point2D *p2 = point2D_new(a, b);
    
    return p2;
}