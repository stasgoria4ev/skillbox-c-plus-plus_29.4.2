#pragma once

class Triangle: public Shape { 
    
    double a;
    double b;
    double c;
    double p;
     
    std::string type() override;

    double square() override;
    
    BoundingBoxDimensions dimensions() override;
public:
    Triangle(double inA, double inB, double inC);
};