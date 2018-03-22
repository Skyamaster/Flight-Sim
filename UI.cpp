#include "UI.hpp"
#include "graphics.hpp"

using namespace UIHandlerInternal;

UIHandler::UIHandler() {}
UIHandler::UIHandler(bool m) : mode(m) {}
void UIHandler::draw(const Line& l) {
  renderLine(l.start.x, l.start.y, l.end.x, l.end.y);
}
void UIHandler::draw(const Rectangle& r) {
  Point topLeft = r.tl;
  Point bottomRight = r.br;
  int width = bottomRight.x - topLeft.x;
  int height = topLeft.y - bottomRight.y;
}
void UIHandler::draw(const Polygon& p) {
  if (p.Points.size() < 2) {
    return; //error - polygon must have at least 2 points
  }
  for (int j = 0; j < p.Points.size()-1; j++) {
    renderLine(p.Points[j].x, p.Points[j].y, p.Points[j+1].x, p.Points[j+1].y);
  }
}
