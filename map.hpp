#ifndef MAPHPP
#define MAPHPP

#include "include.hpp"

vector<vector<double>> heights; // Global variables are sins, I know...
double noise(int x, int y);
double generateMap(int longSize, int latSize); // longSize is the maximum longitude, for negative longitudes, that number is simply mirrored over. Same for latitude

#endif
