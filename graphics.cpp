#include "include.hpp"
#include "graphics.hpp"

double noise(int x, int y) {
  static double prevHeight = 0;
  std::mt19937 gen(x);
  std::uniform_int_distribution<int> dis(-9, 9);
  int a = dis(gen);
  std::mt19937 gen2(y);
  std::uniform_int_distribution<int> dis2(-9, 9);
  int b = dis2(gen2);
  int height = prevHeight + a + b;
  prevHeight = height;
  return height;
}

double point::distance(const point& p) {
  return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}

Vector Vector::operator+(const vector& v) {
  return Vector(i + v.i, j + v.j, k + v.k);
}
Vector& Vector::operator+=(const Vector& v) {
  i += v.i;
  j += v.j;
  k += v.k;
  return *this;
}
Vector Vector::operator-(const vector& v) {
  return Vector(i - v.i, j - v.j, k - v.k);
}
Vector& Vector::operator-=(const Vector& v) {
  i -= v.i;
  j -= v.j;
  k -= v.k;
  return *this;
}
Vector Vector::operator-() {
  return Vector(-i, -j, -k);
}
double Vector::dot(const Vector& v) {
  return i * v.i + j * v.j + k * v.k;
}
Vector Vector::cross(const Vector& v) {
  return Vector(j * v.k - k * v.j, k * v.i - i * v.k, i * v.j - j * v.i);
}
double Vector::magnitude() {
  return sqrt(i*i + j*j + k*k);
}

Plane::Plane(Point a, Point b, Point c) {
  Vector n = (b - a).cross(c - a);
  a = n.i;
  b = n.j;
  c = n.k;
  d = -(Vector(p1).dot(n));
}
