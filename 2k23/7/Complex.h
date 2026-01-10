#ifndef COMPLEX_H
#define COMPLEX_H

#include <bits/stdc++.h>
using namespace std;

class Complex {
public:
    int real;
    int img;
    
    Complex();
    friend istream& operator>>(istream &in,Complex &C);
    friend ostream& operator <<(ostream &out, Complex &c);
    Complex operator+(Complex &C);
};

#endif
