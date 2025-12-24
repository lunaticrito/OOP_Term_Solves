#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

template <typename T>
class Matrix {
private:
    T mat[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> mat[i][j];
    }

    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }

    Matrix<T> operator+(const Matrix<T>& other) const {
        Matrix<T> result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }
};

#endif
