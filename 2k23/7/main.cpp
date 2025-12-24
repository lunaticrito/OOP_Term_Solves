#include <iostream>
#include "Complex.h"
#include "Matrix.h"

using namespace std;

int main() {
    Matrix<Complex> A, B, C;

    cout << "Enter elements of first 2x2 complex matrix:\n";
    A.input();

    cout << "\nEnter elements of second 2x2 complex matrix:\n";
    B.input();

    C = A + B;

    cout << "\nResultant Matrix after Addition:\n";
    C.display();

    return 0;
}
