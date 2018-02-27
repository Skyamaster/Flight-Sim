#include "plane.hpp"

plane::plane(image i, point l, float aSize, float eSize, float rSize, float cSection, float rcSection = 0) : looks(i), angleOfAttack(0), bankAngle(0), altitude(0), aileronSize(0), elevatorSize(0), rudderSize(0), aileronAngle(0), elevatorAngle(0), rudderAngle(0), crosSection(cSection), radarCrossSection(((rcSection == 0) ? (cSection) : (rcSection)), location(l) {}

void plane::recalculate() {
}
