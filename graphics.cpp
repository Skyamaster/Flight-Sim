#include "include.hpp"
#include "graphics.hpp"

double point::distance(const point& p) {
  return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}
