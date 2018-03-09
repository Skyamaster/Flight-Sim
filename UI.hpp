#ifndef UIHPP
#define UIHPP

#include "include.hpp"
#include "graphics.hpp"

//helper functions
namespace UIHandlerInternal {
  
  void renderLine(int xa, int ya, int width, int height);
  void renderCircle(int x, int y, int radius);
}

class UIHandler {
  public:
    UIHandler();
    UIHandler(bool mode);
    ~UIHandler();
    
    // UI creation functions
    void draw(const Line& l);
    void draw(const Rectangle& r);
    void draw(const Polygon& p);
  private:
    bool mode;
};
#endif
