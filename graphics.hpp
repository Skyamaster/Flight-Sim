#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"

color black(0, 0, 0);

class point {
  public:
    point();
    point(int, int);
    point(const point& p);
    ~point();
    double distance(point);
    double x;
    double y;
};

class color {
  public:
    color();
    color(int, int, int);
    color(const color& c);
    ~color();
    int r;
    int g;
    int b;
};

class shape {
  // just a dummy class used to group the shapes
};

class rectangle : shape {
  public:
    rectangle();
    rectangle(const point&, const point&, const color& fc = black);
    rectangle(const rectangle& r);
    ~rectangle();
    point tl;
    point br;
    color fillColor;
};

class line : shape {
  public:
    line();
    line(const point&, const point&, const color& fc = black);
    line(const line& l);
    ~line();
    point start;
    point end;
    color fillColor;
};

class curve : shape {
  public:
    curve();
    curve(const point&, const point&, int, const color& fc = black);
    curve(const cure& c);
    ~curve();
    point start;
    point end;
    int curvature; // a line is a curve of curvature 0 - shows the maximum distance between the line and the curve
    color fillColor;
}

class circle : shape {
  public:
    circle();
    circle(const circle& c);
    circle(const point&, int, const color& fc = black);
    ~circle();
    point center;
    int radius;
    color fillColor;
};

class polygon : shape {
  public:
    polygon();
    polygon(const vector<point>&, const color& fc = black);
    polygon(const polygon& p);
    ~polygon();
    vector<point> points;
    color fillColor;
};

class image {
  public:
    image();
    image(const image& i);
    ~image();
};

#endif
