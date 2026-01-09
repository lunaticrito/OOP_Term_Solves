#include "Complex.h"
Complex::Complex(){
    real=0;
    img=0;
}
istream& operator>>(istream &in,Complex &C){
    in>>C.real>>C.img;
    return in;
}
ostream& operator <<(ostream &out, Complex &C){
    out<<C.real<<"+i"<<C.img;
    return out;
}
Complex Complex::operator+(Complex &C){
    Complex temp;
    temp.real=real+C.real;
    temp.img=img+C.img;
    return temp;
}
