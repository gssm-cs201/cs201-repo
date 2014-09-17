#include "Circle.h"

Circle::Circle(const float r) : radius(r) {}

const char* Circle::getName() const {
  return "Circle";
}

const float Circle::getArea() const { return 3.141592 * radius * radius; }
