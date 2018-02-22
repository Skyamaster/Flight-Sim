#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"

class point {
  public:
    point(int, int);
    ~point();
    point(const point& p);
    double distance(point);
    double x;
    double y;
};

class color {
  public:
    color(int, int, int);
    color(const color& c);
    ~color();
    int r;
    int g;
    int b;
};

class shape {
  public:
    shape();
    ~shape();
    shape(const shape& s);
    color fillColor;
};

class rectangle : shape {
  public:
    rectangle(const point&, const point&);
    ~rectangle();
    rectangle(const rectangle& r);
    point tl;
    point br;
};

class line : shape {
  public:
    line(const point&, const point&);
    ~line();
    line(const line& l);
    point start;
    point end;
};

class circle : shape {
  public:
    circle(const circle& c);
    circle(const point&, int);
    ~circle();
};

class polygon : shape {
  public:
    polygon();
    polygon(const vector<point>&);
    polygon(const polygon& p);
    ~polygon();
};

class image {
  public:
    image();
    image(const image& i);
    ~image();
};

#endif
