#pragma once // prevents multiple definitions

#include <iostream>
#include <string>  
#include <sstream>
using namespace std;


std::ostringstream out1; 
static class Flower {
    public String bloomtime = "NA";
    Flower() {
        out1 << "Hello, Flower!" << endl;
    }
    public void void print_bloomtime() {
        out1 << "Bloom time: " << bloomtime << endl;
    }
};

static class Rose: public Flower {
    public String fragrance = "NA";
    Rose() {
        out1 << "Hello, Rose!" << endl;
    }
    public void print_fragrance() {
        out1 << "Fragrance: " << fragrance << endl;
    }
};

std::string ex1(string bloomtime, string fragrance) {
    out1.str("");
    out1.clear();
    Rose rose;
    rose.bloomtime = bloomtime;
    rose.fragrance = fragrance;
    rose.print_bloomtime();
    rose.print_fragrance();
    return out1.str();

}
