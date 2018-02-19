#ifndef PLANEHPP
#define PLANEHPP
#include "include.hpp"

class plane {
  public:
    plane();
    ~plane();
  private:
    float angleOfAttack;
    float bankAngle;
    float airspeed;
    float altitude;
    point location;
};
#endif
