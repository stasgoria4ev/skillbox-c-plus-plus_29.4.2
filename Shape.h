#pragma once
#include "BoundingBoxDimensions.h"
#include <string>

class Shape {
public: 
    virtual BoundingBoxDimensions dimensions() = 0; 
    virtual double square() = 0; 
    virtual std::string type() = 0; 
};