#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape {
public:
virtual const char* getName() const { return "Shape";}
virtual const float getArea() const { return 0.0;}

};

#endif // __SHAPE_H__
