#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"

class point {
  public:
    point();
    ~point();
    int distance(point);
  private:
    double x;
    double y;
};

class image {
  public:
    image();
    ~image();
  private:
}

#endif
