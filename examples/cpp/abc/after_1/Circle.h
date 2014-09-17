#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include "Shape.h"
class Circle:public Shape {
public:
Circle(const float radius);
const char* getName() const;
const float getArea() const;
private:
float radius;
};
#endif //__CIRCLE_H__
