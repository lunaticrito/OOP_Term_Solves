#include <bits/stdc++.h>
#include "Complex.h"
using namespace std;

template<class T>
class Matrix{
    T data[2][2];
    public:
    friend istream& operator>>(istream &in,Matrix<T> &M){
        for(int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                in>>M.data[i][j];
            }
        }
        return in;
    }
    friend ostream& operator<<(ostream &out,Matrix<T> &M){
        for(int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                out<<M.data[i][j];
            }
            out<<endl;
        }
        return out;
    }
    Matrix<T> operator+(Matrix<T> &M) {
        Matrix<T> temp;
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                temp.data[i][j] = data[i][j] + M.data[i][j];
            }
        }
        return temp;
    }
};
int main() {
    Matrix<Complex> m1,m2;
    cin>>m1;
    cout<<m1<<endl;
    cin>>m2;
    cout<<m2<<endl;
    cout<<m1+m2<<endl;
    return 0;
}
