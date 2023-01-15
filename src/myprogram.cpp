#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "printParams.h"

int main() { 
    Triangle t(3,4,5);
    printParams(&t);
    
    Circle c(5);
    printParams(&c);

    Rectangle r(6, 7);
    printParams(&r);
}