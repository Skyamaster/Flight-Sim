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
    plane(image, point, float, float, float, float, float) : looks(i), angleOfAttack(0), bankAngle(0), altitude(0), aileronSize(0), elevatorSize(0), rudderSize(0), aileronAngle(0), elevatorAngle(0), rudderAngle(0), crosSection(cSection), radarCrossSection(((rcSection == 0) ? (cSection) : (rcSection)), location(l);
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
    float hdg; // heading
  
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
