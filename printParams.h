#pragma once
#include <iostream>

void printParams(Shape *shape) { 
        std::cout <<"Type: " << shape->type() << std::endl;
        std::cout <<"Square: " << shape->square() << std::endl;
        std::cout <<"Width: " << shape->dimensions().width << std::endl;
        std::cout <<"Height: " << shape->dimensions().heigth << std::endl << '\n'; 
};