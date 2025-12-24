#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0);

    // Operator overloading
    Complex operator+(const Complex& other) const;

    // Friend function for output
    friend ostream& operator<<(ostream& out, const Complex& c);
};

#endif
