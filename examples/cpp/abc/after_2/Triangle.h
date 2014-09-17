#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Shape.h"

class Triangle: public Shape {
public:
Triangle(const float base, const float height);
const char* getName() const;
const float getArea() const;
private:
float base;
float height;
};
#endif // _TRIANGLE_H__
