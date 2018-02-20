#ifndef PLANEHPP
#define PLANEHPP
#include "include.hpp"

class plane {
  public:
    plane(image);
    ~plane();
    void bank(float degrees);
    void yaw(float degrees);
    void rotate(float degrees); 
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
  
    double crossSection;
    double radarCrossSection; // fun stuff to come later
    
    point location;
    image looks;
};
#endif
