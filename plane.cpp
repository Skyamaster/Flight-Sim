#include "plane.hpp"

plane::plane(Wireframe i, Point l, float maxPower, float aSize, float eSize, float rSize, float cSection, float rcSection = 0) : looks(i), angleOfAttack(0), thrustPercent(0), maxThrust(maxPower), bankAngle(0), altitude(0), aileronSize(aSize), elevatorSize(eSize), rudderSize(rSize), aileronAngle(0), elevatorAngle(0), rudderAngle(0), crosSection(cSection), radarCrossSection(((rcSection == 0) ? (cSection) : (rcSection)), location(l) {};
void plane::recalculate() {
  
}
