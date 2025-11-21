#include <iostream>
using namespace std;

int main() {
    double a, b, *p1, *p2, *greater;
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    greater = (*p1 > *p2) ? p1 : p2;
    cout << "Greater number: " << *greater << endl;
    return 0;
}
