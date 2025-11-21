#include <iostream>
#include <array>
using namespace std;

struct Ratio {
    int num;
    int den;

};
Ratio multiply(Ratio r1, Ratio r2) {
    Ratio result;
    result.num = r1.num * r2.num;
    result.den = r1.den * r2.den;
    return result;
}
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
     array<Ratio,3> a;
     int i=0;
     cout<<"Enter 3 ratio:"<<endl;

     Ratio product;
     product.den=1;
     product.num=1;

     while(i<3)
     {
        a[i]=inRatio();
        product.den=a[i].den*product.den;
        product.num=a[i].num*product.num;


        i=i+1;;

     }
     outRatio(product);




    return 0;
}
