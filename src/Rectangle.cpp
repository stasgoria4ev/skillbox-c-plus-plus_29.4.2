#include "Rectangle.h"
#include <string>

double width = 0;
double height = 0;
    
std::string Rectangle::type() {    
    std::string text = "Rectangle";
    return text;
} 

double Rectangle::square() {
    return width * height;
} 

BoundingBoxDimensions Rectangle::dimensions() {    
    BoundingBoxDimensions sideSquare;
    sideSquare.width = width + 0.01;
    sideSquare.heigth = height + 0.01;
    return sideSquare;
} 

Rectangle::Rectangle(double inWidth, double inHeight) : width(inWidth), height(inHeight) {};