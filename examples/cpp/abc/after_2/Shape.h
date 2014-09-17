#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape {
public:
virtual const char* getName() const = 0;
virtual const float getArea() const = 0;

};

#endif // __SHAPE_H__
