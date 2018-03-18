#include "plane.hpp"

void plane::recalculate() { 
  motion = (thrust * thrust.magnitude() + surfaces * surfaces.magnitude() + motion * motion.magnitude()) / (thrust.magnitude() + surfaces.magnitude() + motion.magnitude());
  
}
