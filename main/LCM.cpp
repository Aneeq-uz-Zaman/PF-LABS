#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;


    int maxNum = (n1 > n2) ? n1 : n2;
    bool found = true;

    while (found) {
        if (maxNum % n1 == 0 && maxNum % n2 == 0) {
            found = false;
        } else {
            maxNum++;
        }
    }

    cout << "LCM is: " << maxNum << endl;

    return 0;
}
