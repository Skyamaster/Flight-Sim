#include "UI.hpp"

UIHandler::UIHandler() {}
UIHandler::UIHandler(bool m) : mode(m) {}
UIHandler::draw(const line& l) {
}
UIHandler::draw(const rectangle& r) {
}
void UIHandler::draw(const polygon& p) {
  vector<line> lines;
  if (p.points.size() < 2) {
    return; //error - polygon must have at least 2 points
  }
  for (int j = 0; j < p.points.size()-1; j++) {
    line l(p.points[j], p.points[j+1]);
    lines.push_back(l);
  }
}
