#ifndef INCLUDEHPP
#define INCLUDEHPP

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <thread>

using namespace std;

class simulatable { // if that's not a word, I just made it
  public:
    simulatable();
    ~simulatable();
    void recalculate();
  private:
};

#endif
