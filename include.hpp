#ifndef INCLUDEHPP
#define INCLUDEHPP

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

class point {
  public:
    point();
    ~point();
    int distance(point);
  private:
    double x;
    double y;
};

#endif
