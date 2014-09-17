#include <iostream>
#include "Triangle.h"
#include "Circle.h"

int main() {
  Shape **shapes = new Shape*[2];
  shapes[0] = new Triangle(1.0, 1.0);
  shapes[1] = new Circle(1.0);

  for (int i = 0; i < 2; ++i) {
    std::cout << "Shape " << shapes[i]->getName() << " has area " << shapes[i]->getArea() << std::endl;
  }
  return 0;
}
