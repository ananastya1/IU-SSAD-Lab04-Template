#pragma once // prevents multiple definitions

#include <iostream>
#include <string>  
#include <sstream>

std::ostringstream out2;
using namespace std;

/*Goal: practice multiple inheritance
** Use Multiple inheritance Concept to calculate the Perimeter and Area of Rectangle.
** Important: Perimeter and Area MUST be classes: have public methodsgetArea() and getPerimeter() .
**--------------------------------------------------------
** *****************Important*****************************
** WHEN YOU'RE READY, GO to ex2(int, int), REMOVE THE TEMP return STATEMENT
** & UNCOMMENT THE BLOCK OF STATEMENTS INSIDE THE FUNCTION.
*/

// Put your code here


class Perimeter{
    public double getPerimeter(double a, double b){
        return 2 * (a + b);
    }
};


class Area{
    public double getArea(double a, double b){
        return a * b;
    }
};


class Rectangle : Area, Perimeter{

};


string ex2(int l, int w) {
     out2.str("");
     out2.clear();
     Rectangle rect;
     out2 << "Area: " << rect.getArea(l, w) << endl;
     out2 << "Perimeter: " << rect.getPerimeter(l, w) << endl;
     return out2.str();
}
