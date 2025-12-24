#include "Complex.h"

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0)
        out << " + " << c.imag << "i";
    else
        out << " - " << -c.imag << "i";
    return out;
}
