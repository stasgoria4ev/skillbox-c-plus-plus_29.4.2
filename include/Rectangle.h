#pragma once
#include "Shape.h"

class Rectangle: public Shape { 
    double width;
    double height;
    
    std::string type() override;
    
    double square() override;
    
    BoundingBoxDimensions dimensions() override; 
public:
    Rectangle(double inWidth, double inHeight);
};