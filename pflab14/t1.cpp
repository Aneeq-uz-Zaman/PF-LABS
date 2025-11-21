#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    array<string, 5> fn;
    cout << "Enter full names:" << endl;

    for (int i = 0; i < 5; i++) {
        getline(cin, fn[i], ' ');
    }

    array<string, 5> sn;
    sn[0] = fn[1];

    cout << "The 2nd part of the name is: " << endl << sn[0] << endl;

    return 0;
}
