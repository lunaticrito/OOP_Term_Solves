#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex(int r=0,int i=0):real(r),img(i){}
    Complex operator*(Complex &A){
        Complex temp;
        temp.real=real*A.real-img*A.img;
        temp.img=real*A.img+img*A.real;
        return temp;
    }
    void display(){
        cout<<real<<"+i"<<img;
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3;
    c3=c1*c2;
    c3.display();
}
