#ifndef PLANEHPP
#define PLANEHPP
#include "include.hpp"

class plane {
  public:
    plane();
    ~plane();
    void bank(float degrees);
  private:
    float angleOfAttack;
    float bankAngle;
    float airspeed;
    float altitude;
  
    float aileronSize;
    float elevatorSize;
    float rudderSize;
    
  
    float aileronAngle;
    float elevatorAngle;
    float rudderAngle;
    
    point location;
};
#endif
