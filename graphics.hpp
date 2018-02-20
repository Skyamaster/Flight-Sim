#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"

class point {
  public:
    point(int, int);
    ~point();
    double distance(point);
    double x;
    double y;
};

class color {
  public:
    color(int, int, int);
    ~color();
    int r;
    int g;
    int b;
};

class shape {
  public:
    shape();
    ~shape();
    color fillColor;
};

class rectangle : shape {
  public:
    rectangle(point, point);
    ~rectangle();
    point tl;
    point br;
};

class line : shape {
  public:
    line(point, point);
    ~line();
    point start;
    point end;
};

class circle : shape {
  public:
    circle(point&, int);
    ~circle();
};

class polygon : shape {
  public:
    polygon();
    polygon(vector<point>);
    ~polygon();
};

class image {
  public:
    image();
    ~image();
};

#endif
