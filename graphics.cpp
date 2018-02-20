#include "graphics.hpp"

color::color(int a, b, c) {
  r = a;
  g = b;
  b = c;
}

point::point(int a, int b) {
  x = a;
  y = b;
}
double point::distance(point p) {
  return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}

rectangle::rectangle(point a, point b) {
  tl = a;
  br = b;
}
