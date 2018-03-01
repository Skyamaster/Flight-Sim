#ifndef PLANEHPP
#define PLANEHPP
#include "include.hpp"
#include "graphics.hpp"

class plane {
  public:
    plane(Wireframe i, Point l, float maxPower, float aSize, float eSize, float rSize, float cSection, float rcSection = 0) : looks(i), angleOfAttack(0), thrustPercent(0), maxThrust(maxPower), bankAngle(0), altitude(0), aileronSize(aSize), elevatorSize(eSize), rudderSize(rSize), aileronAngle(0), elevatorAngle(0), rudderAngle(0), crosSection(cSection), radarCrossSection(((rcSection == 0) ? (cSection) : (rcSection)), location(l);
    ~plane();
    void bank(float degrees);
    void yaw(float degrees);
    void rotate(float degrees); // rotate as in v1 rotate for takeoff
    void recalculate();
  private:
  
    float angleOfAttack;
    float bankAngle;
    float airspeed; // probably depreciated
    float altitude;
    float hdg; // heading - probably depreciated
  
    float aileronSize;
    float elevatorSize;
    float rudderSize;
    
    float maxBank;
    
    Vector thrust;
    Vector surfaces;
    Vector motion;
    
    float maxThrust;
    float thrustPercent;
    
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
