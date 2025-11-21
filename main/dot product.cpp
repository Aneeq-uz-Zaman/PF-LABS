#include <iostream>
using namespace std;

int main() {
    int Ax, Ay, Az, Bx, By, Bz, dotProduct;

    // Input for vector A
    cout << "Enter vector A (3 integers): ";
    cin >> Ax >> Ay >> Az;

    // Input for vector B
    cout << "Enter vector B (3 integers): ";
    cin >> Bx >> By >> Bz;

    // Compute the dot product
    dotProduct = Ax * Bx + Ay * By + Az * Bz;

    // Output the result
    cout << "Dot Product: " << dotProduct << endl;

    return 0;
}
