#pragma once
#include "BoundingBoxDimensions.h"
#include <string>

class Shape {
public: 
    virtual BoundingBoxDimensions dimensions(); 
    virtual double square(); 
    virtual std::string type(); 
};