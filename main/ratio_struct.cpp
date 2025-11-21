#include <iostream>
using namespace std;

struct Ratio {
    int num;
    int den;

};

Ratio inRatio() {
    Ratio r;
    cout << "Enter numerator: ";
    cin >> r.num;
    cout << "Enter denominator (non-zero): ";
    cin >> r.den;
    while (r.den == 0) {
        cout << "Denominator cannot be zero. Please enter again: ";
        cin >> r.den;
    }
    return r;
}

void outRatio(Ratio r) {
    cout << r.num << "/" << r.den << endl;
}

int main()
 {
     Ratio r=inRatio();
     outRatio(r);


    return 0;
}
