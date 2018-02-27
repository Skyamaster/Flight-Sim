#ifndef GRAPHICSHPP
#define GRAPHICSHPP

#include "include.hpp"


class Point {
  public:
    Point();
    Point(const Point& p) : x(p.x), y(p.y), z(p.z) {};
    Point(double a, double b, double c) : x(a), y(b), z(c) {};
    ~Point();
    double distance(const Point&);
    double distanceTo(const Plane&);
    double distanceTo(const Line&);
    double x;
    double y;
    double z;
};

class Color {
  public:
    Color();
    Color(int a, int b, int c) : r(a), g(b), b(c) {};
    Color(const Color& c) : r(c.r), g(c.g), b(c.b) {};
    ~Color();
    int r;
    int g;
    int b;
};

class Vector {
  public:
    vector();
    vector(double a, double b, double c) : i(a), j(b), k(c);
    ~vector();
  
    Vector operator+(const vector& v);
    Vector& operator+=(const vector& v);
    Vector operator-(const vector& v);
    Vector& operator-=(const vector& v);
    Vector operator-();
    Vector cross(const vector& v);
    double dot(const Vector& v);
    double magnitude();
  
    double i;
    double j;
    double k;
};

class Plane {
  public:
    double a, b, c, d;
    Plane(double a = 0, double b = 0, double c = 1, double d = 0);
    Plane(Point p1, Point p2, Point p3);
    Vector normal() {return Vector(a, b, c);}
};

class Ray {
  public:
    Point origin;
    Vector direction;
    Ray(Point origin, Vector direction): origin(origin), direction(direction) {}
    Point operator()(double u) {return origin + u * direction;}
};

class Ray {
  public:
    Point origin;
    Vector direction;
    Ray(Point origin, Vector direction): origin(origin), direction(direction) {}
    Point operator() (double u) {return origin + u * direction;}
};

Color black(0, 0, 0);


class Shape {
  // just a dummy class used to group the Shapes
};

class Rectangle : Shape {
  public:
    Rectangle();
    Rectangle(const Point& a, const Point& b, const Color& fillColor = black, const Color& fc = black) : tl(a), br(b), fillColor(fc) {};
    Rectangle(const Rectangle& r) : tl(r.tl), br(r.br) {};
    ~Rectangle();
    Point tl;
    Point br;
    Color fillColor;
};

class Line : Shape {
  public:
    Line();
    Line(const Point& s, const Point& e, const Color& fc = black) : start(s), end(e), fillColor(fc) {};
    Line(const Line& l) : start(l.start), end(l.end) {};
    ~Line();
    Point start;
    Point end;
    Color fillColor;
};

class Curve : Shape {
  public:
    Curve();
    Curve(const Point&, const Point&, int, const Color& fc = black);
    Curve(const Curve& c);
    ~Curve();
    Point start;
    Point end;
    int curvature; // a Line is a Curve of curvature 0 - shows the maximum distance between the Line and the Curve
    Color fillColor;
};

class Circle : Shape {
  public:
    Circle();
    Circle(const Circle& c);
    Circle(const Point&, int, const Color& fc = black);
    ~Circle();
    Point center;
    int radius;
    Color fillColor;
};

class Polygon : Shape {
  public:
    Polygon();
    Polygon(const vector<Point>&, const Color& fc = black);
    Polygon(const Polygon& p);
    ~Polygon();
    vector<Point> Points;
    Color fillColor;
};

class Image {
  public:
    Image();
    Image(const Image& i);
    ~Image();
};

#endif
