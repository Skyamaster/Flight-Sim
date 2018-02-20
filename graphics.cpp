#include "graphics.hpp"

double point::distance(point p) {
  return sqrt((x()-p.x())*(x()-p.x())+(y()-p.y())*(y()-p.y()));
}

double point::x() {
  return this->x;
}

double point::y() {
  return this->y;
}
