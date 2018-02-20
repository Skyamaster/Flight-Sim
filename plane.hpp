#ifndef PLANEHPP
#define PLANEHPP
#include "include.hpp"
#include "graphics.hpp"

class wing {
  public:
    wing();
    ~wing();
  private:
    float area;
    float thickness;
    float lift;
    float (*CL)(float); //function pointer CL - accepts input (angle of attack) and returns coefficient of lift
};

class controlSurface {
  public:
  private:
};

class plane {
  public:
    plane(image, point, float, float, float, float, float);
    ~plane();
    void bank(float degrees);
    void yaw(float degrees);
    void rotate(float degrees);
    void recalculate();
  private:
  
    vector<wing> wings;
  
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
    float weight;
};

class helicopter {
}; // TODO - fill in class

#endif
