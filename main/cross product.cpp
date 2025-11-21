#include <iostream>
using namespace std;

int main() {
    int Ax, Ay, Az, Bx, By, Bz, Cx, Cy, Cz;

    // Input for vector A
    cout << "Enter vector A (3 integers): ";
    cin >> Ax >> Ay >> Az;

    // Input for vector B
    cout << "Enter vector B (3 integers): ";
    cin >> Bx >> By >> Bz;

    // Compute the cross product
    Cx = Ay * Bz - Az * By;
    Cy = Az * Bx - Ax * Bz;
    Cz = Ax * By - Ay * Bx;

    // Output the result
    cout << "Cross Product: ("
         << Cx << ", "
         << Cy << ", "
         << Cz << ")" << endl;

    return 0;
}
