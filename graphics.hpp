#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"

class point {
  public:
    point(int, int);
    ~point();
    double distance(point);
    double x();
    double y();
  private:
    double x;
    double y;
};

class rectangle {
  public:
    rectangle(point, point);
    ~rectangle();
  private:
};

class line {
  public:
    line(point, point);
    ~line();
  private:
};

class circle {
  public:
    circle(point, int);
    ~circle();
  private:
};

class polygon {
  public:
    polygon(vector<point>);
    ~polygon;
  private:
}

class image {
  public:
    image();
    ~image();
  private:
};

#endif
