#include "plane.hpp"

void plane::plane(image i, point l, float aSize, float eSize, float rSize, float cSection, float rcSection = 0) {
  looks = i; // I could've used an initialization list for this...
  
  angleOfAttack = 0;
  bankAngle = 0;
  airspeed = 0;
  altitude = 0;
  aileronSize = aSize;
  elevatorSize = eSize;
  rudderSize = rSize;
  aileronAngle = 0;
  elevatorAngle = 0;
  rudderAngle = 0;
  crossSection = cSection;
  radarCrossSection = ((rcSection == 0) ? (cSection) : (rcSection));
  location = l;
}
