#ifndef UIHPP
#define UIHPP

#include "include.hpp"
#include "graphics.hpp"

class UIHandler {
  public:
    UIHandler();
    UIHandler(bool mode);
    ~UIHandler();
    
    // UI creation functions
    void draw(const line& l);
    void draw(const rectangle& r);
    void draw(const polygon& p);
  private:
    bool mode;
};
#endif
