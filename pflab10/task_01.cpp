#include <iostream>
using namespace std;

void repChar(char c, int N) {
    while (N > 0) {
        cout << c;
        N--;
    }
}

int main() {
    int H = 7;
    int i = 0;

    while (i <= H / 2) {
        repChar(' ', H / 2 - i);
        if (i == 0) {
            repChar('*', 1);
        } else {
            repChar('*', 1);
            repChar(' ', i * 2 - 1);
            repChar('*', 1);
        }
        cout << endl;
        i++;
    }

    i = H / 2 - 1;
    while (i >= 0) {
        repChar(' ', H / 2 - i);
        if (i == 0) {
            repChar('*', 1);
        } else {
            repChar('*', 1);
            repChar(' ', i * 2 - 1);
            repChar('*', 1);
        }
        cout << endl;
        i--;
    }

    return 0;
}
