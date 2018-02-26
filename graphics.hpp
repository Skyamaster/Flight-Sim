#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"


class point {
  public:
    point();
    point(const point& p) : x(p.x), y(p.y), z(p.z) {};
    point(double a, double b, double c) : x(a), y(b), z(c) {};
    ~point();
    double distance(const point&);
    double x;
    double y;
    double z;
};

class color {
  public:
    color();
    color(int a, int b, int c) : r(a), g(b), b(c) {};
    color(const color& c) : r(c.r), g(c.g), b(c.b) {};
    ~color();
    int r;
    int g;
    int b;
};

class Vector {
  public:
    vector();
    vector(double a, double b, double c) : i(a), j(b), k(c);
    ~vector();
  
    Vector operator+(const vector& v);
    Vector& operator+=(const vector& v);
    Vector operator-(const vector& v);
    Vector& operator-=(const vector& v);
    Vector operator-();
    double dot(const Vector& v);
  
    double i;
    double j;
    double k;
};

color black(0, 0, 0);


class shape {
  // just a dummy class used to group the shapes
};

class rectangle : shape {
  public:
    rectangle();
    rectangle(const point& a, const point& b, const color& fillColor = black, const color& fc = black) : tl(a), br(b), fillColor(fc) {};
    rectangle(const rectangle& r) : tl(r.tl), br(r.br) {};
    ~rectangle();
    point tl;
    point br;
    color fillColor;
};

class line : shape {
  public:
    line();
    line(const point& s, const point& e, const color& fc = black) : start(s), end(e), fillColor(fc) {};
    line(const line& l) : start(l.start), end(l.end) {};
    ~line();
    point start;
    point end;
    color fillColor;
};

class curve : shape {
  public:
    curve();
    curve(const point&, const point&, int, const color& fc = black);
    curve(const curve& c);
    ~curve();
    point start;
    point end;
    int curvature; // a line is a curve of curvature 0 - shows the maximum distance between the line and the curve
    color fillColor;
};

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
