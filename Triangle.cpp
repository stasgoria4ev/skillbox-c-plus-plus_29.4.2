#include "Triangle.h"
#include <string>
#include "Shape.h"
#include <cmath>
 
    double a = 0;
    double b = 0;
    double c = 0;
    double p = (a + b + c) / 2;
     
    std::string Triangle::type() {
        std::string text = "Triangle";
        return text;
    }

    double Triangle::square() {
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    
    BoundingBoxDimensions Triangle::dimensions() {
        double radiusCircumscribedCircle = a * b * c / (4 * sqrt(p*(p - a)*(p - b)*(p - c)));
        BoundingBoxDimensions sideSquare;
        sideSquare.width = 2 * radiusCircumscribedCircle;
        sideSquare.heigth = sideSquare.width; 
        return sideSquare;
    }

    Triangle::Triangle(double inA, double inB, double inC) : a(inA), b(inB), c(inC) {};