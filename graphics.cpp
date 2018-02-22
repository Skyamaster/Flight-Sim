#include "include.hpp"
#include "graphics.hpp"

color::color(int a, int b, int c) {
  r = a;
  g = b;
  b = c;
}
color::color(const color& c) {
  r = c.r;
  g = c.g;
  b = c.b;
}

point::point(const point& p) {
  x = p.x;
  y = p.y;
}
point::point(int a, int b) {
  x = a;
  y = b;
}
double point::distance(const point& p) {
  return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}

rectangle::rectangle(const point& a, const point& b) {
  tl = a;
  br = b;
}
rectangle::rectangle(const rectangle& r) {
  tl = r.tl;
  br = r.bl;
}

polygon::polygon(const vector<point>& p) {
}
