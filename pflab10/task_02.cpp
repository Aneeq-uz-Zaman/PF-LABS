#include <iostream>
#include <array>
using namespace std;

void rearrange(array<float, 12>& a) {
    int j = 0, i = 0;

    while (i <= 11) {
        if (a[i] <= a[11]) {
            float temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            j++;
        }
        i++;
    }
}

int main() {
    array<float, 12> a = {23, 54, 12, 19, 67, 9, 45, 32, 90, 58, 19, 20};
    rearrange(a);
    int i = 0;
    while (i < 12) {
        cout << a[i] << "  ";
        i++;
    }
    return 0;
}
