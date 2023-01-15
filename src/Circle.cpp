#include "Circle.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>

double radius = 0;
    
std::string Circle::type() {    
    std::string text = "Circle";
    return text;
}
    
double Circle::square() {
    return M_PI * (radius * radius);
} 
    
BoundingBoxDimensions Circle::dimensions() {    
    BoundingBoxDimensions sideSquare;
    sideSquare.width = 2 * radius;
    sideSquare.heigth = sideSquare.width;
    return sideSquare;
}

Circle::Circle(double inRadius) : radius(inRadius) {};