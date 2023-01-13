#pragma once
#include <string>
#include "Shape.h"

class Rectangle: public Shape { 
    double width = 0;
    double height = 0;
    
    std::string type() override {
        std::string text = "Rectangle";
        return text;
    } 

    double square() override {
        return width * height;
    } 

    BoundingBoxDimensions dimensions() override {
        BoundingBoxDimensions sideSquare;
        sideSquare.width = width + 0.01;
        sideSquare.heigth = height + 0.01;
        return sideSquare;
    } 
public:
    Rectangle(double inWidth, double inHeight) : width(inWidth), height(inHeight) {};
};