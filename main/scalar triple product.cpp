#include <iostream>
using namespace std;

int main() {
    int A[3], B[3], C[3];


    cout << "Enter vector A (3 integers): ";
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }

    cout << "Enter vector B (3 integers): ";
    for (int i = 0; i < 3; i++) {
        cin >> B[i];
    }

    // Input vector C
    cout << "Enter vector C (3 integers): ";
    for (int i = 0; i < 3; i++) {
        cin >> C[i];
    }


    int scalarTripleProduct = A[0] * (B[1] * C[2] - B[2] * C[1]) +
                              A[1] * (B[2] * C[0] - B[0] * C[2]) +
                              A[2] * (B[0] * C[1] - B[1] * C[0]);


    cout << "Scalar Triple Product: " << scalarTripleProduct << endl;

    return 0;
}
