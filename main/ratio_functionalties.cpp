#include <iostream>
using namespace std;

struct Ratio {
    int num;
    int den;
};




Ratio additiveInverse(Ratio r) {
    r.num = -r.num;
    return r;
}

Ratio reciprocal(Ratio r) {
    if (r.num == 0) {
        cout << "Reciprocal not possible. Numerator is zero." << endl;
        return r;
    }
    int temp = r.num;
    r.num = r.den;
    r.den = temp;
    return r;
}


Ratio multiply(Ratio r1, Ratio r2) {
    Ratio result;
    result.num = r1.num * r2.num;
    result.den = r1.den * r2.den;
    return result;
}

Ratio addInteger(Ratio r, int integer) {
    r.num=integer*r.den+r.num;
    return r;
}


float toFloat(Ratio r) {
    return float(r.num) / float(r.den);
}
Ratio simplify(Ratio r) {
    int a=r.num;
    int b=r.den;
    int i=1;
    int gcd;
    while (a>=i) {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
        i=i+1;;

    }

    int divisor = gcd;
    r.num =r.num/divisor;
    r.den =r.den/divisor;
    return r;
}


bool isEqual(Ratio r1, Ratio r2) {
    bool r=false;

    r1=simplify(r1);
    r2=simplify(r2);
    if(r1.num == r2.num && r1.den == r2.den)
    {
        r=true;
    }
    return r;
}

bool isLessThan(Ratio r1, Ratio r2) {
    bool r=false;
    r1=simplify(r1);
    r2=simplify(r2);
    if(r1.num/r1.den  < r2.num/r2.den )
    {
        r=true;
    }
    return r;

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


int main() {
    Ratio r1 = inRatio();
    Ratio r2 = inRatio();

    cout << "Additive inverse of r1: ";
    outRatio(additiveInverse(r1));

    cout << "Reciprocal of r1: ";
    outRatio(reciprocal(r1));

    cout << "Multiplication of r1 and r2: ";
    outRatio(multiply(r1, r2));

    int interger;
    cout << "enter integer to add into r1: ";
    cin>>interger;
    cout << "Ans of addition: ";
    outRatio(addInteger(r1, interger));

    cout << "Ratio r1 as float: " << toFloat(r1) << endl;

    cout << "Simplest form of r1:";
    outRatio(simplify(r1));

    cout << "r1 and r2 are " << (isEqual(r1, r2) ? "equal" : "not equal") << endl;

    cout << "r1 is " << (isLessThan(r1, r2) ? "less than" : "not less than") << " r2" << endl;

    return 0;
}
