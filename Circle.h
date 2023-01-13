#pragma once
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>
#include "Shape.h"

class Circle: public Shape { 

    double radius = 0;
    
    std::string type() override {
        std::string text = "Circle";
        return text;
    }
    
    double square() override {
        return M_PI * (radius * radius);
    } 
    
    BoundingBoxDimensions dimensions() override {
        BoundingBoxDimensions sideSquare;
        sideSquare.width = 2 * radius;
        sideSquare.heigth = sideSquare.width;
        return sideSquare;
    }
public:
    Circle(double inRadius) : radius(inRadius) {};
};