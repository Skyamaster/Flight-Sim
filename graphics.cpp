#include "include.hpp"
#include "graphics.hpp"

color::color() {}
color::color(int a, int b, int c) : r(a), g(b), b(c) {}
color::color(const color& c) : r(c.r), g(c.g), b(c.b) {}

point::point() {}
point::point(const point& p) : x(p.x), y(p.y) {}
point::point(int a, int b) : x(a), y(b) {}
double point::distance(const point& p) {
  return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}

rectangle::rectangle() {}
rectangle::rectangle(const point& a, const point& b, const color& fillColor = black, const color& fc = black) : tl(a), br(b), fillColor(fc) {}
rectangle::rectangle(const rectangle& r) : tl(r.tl), br(r.br) {}

line::line() {}
line::line(const point& s, const point& e, const color& fc = black) : start(s), end(e), fillColor(fc) {}
line::line(const line& l) : start(l.start), end(l.end) {}

polygon::polygon(const vector<point>& p) {}
