#include "UI.hpp"
#include "graphics.hpp"

using namespace UIHandlerInternal;

UIHandler::UIHandler() {}
UIHandler::UIHandler(bool m) : mode(m) {}
void UIHandler::draw(const line& l) {
  renderLine(l.start.x, l.start.y, l.end.x, l.end.y);
}
void UIHandler::draw(const rectangle& r) {
  point topLeft = r.tl;
  point bottomRight = r.br;
  int width = bottomRight.x - topLeft.x;
  int height = topLeft.y - bottomRight.y;
}
void UIHandler::draw(const polygon& p) {
  if (p.points.size() < 2) {
    return; //error - polygon must have at least 2 points
  }
  for (int j = 0; j < p.points.size()-1; j++) {
    renderLine(p.points[j].x, p.points[j].y, p.points[j+1].x, p.points[j+1].y);
  }
}
