#pragma once // prevents multiple definitions

#include <iostream>
#include <string>  
#include <sstream>

std::ostringstream out2;
using namespace std;

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
