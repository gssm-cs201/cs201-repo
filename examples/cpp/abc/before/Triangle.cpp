#include "Triangle.h"

Triangle::Triangle(const float b, const float h) : Shape(), base(b), height(h) {}

const char* Triangle::getName() const {
  return "Triangle";
}

const float Triangle::getArea() const {
  return 0.5 * base * height;
}
