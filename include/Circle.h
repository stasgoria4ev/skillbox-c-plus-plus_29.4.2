#pragma once
#include "Shape.h"

class Circle: public Shape { 

    double radius;
    
    std::string type() override;
    
    double square() override;
    
    BoundingBoxDimensions dimensions() override;
public:
    Circle(double inRadius);
};