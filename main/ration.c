#include <iostream>
using namespace std;

struct Ratio {
    int num;
    int den;
};

// Helper function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to simplify the Ratio object
Ratio simplify(Ratio r) {
    int gcdValue = gcd(abs(r.num), abs(r.den));
    r.num /= gcdValue;
    r.den /= gcdValue;
    if (r.den < 0) {
        r.num = -r.num;
        r.den = -r.den;
    }
    return r;
}

// Function to take the additive inverse of a Ratio object
Ratio additiveInverse(Ratio r) {
    r.num = -r.num;
    return r;
}

// Function to take the reciprocal of a Ratio object
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

// Function to multiply two Ratio objects
Ratio multiply(Ratio r1, Ratio r2) {
    Ratio result;
    result.num = r1.num * r2.num;
    result.den = r1.den * r2.den;
    return simplify(result);
}

// Function to add an integer to a Ratio object
Ratio addInteger(Ratio r, int integer) {
    r.num = r.num + integer * r.den;
    return simplify(r);
}

// Function to convert an integer into a Ratio object
Ratio fromInteger(int integer) {
    Ratio r;
    r.num = integer;
    r.den = 1;
    return r;
}

// Function to convert a Ratio object to a float
float toFloat(Ratio r) {
    return static_cast<float>(r.num) / r.den;
}

// Function to compare two Ratio objects for equality
bool isEqual(Ratio r1, Ratio r2) {
    r1 = simplify(r1);
    r2 = simplify(r2);
    return r1.num == r2.num && r1.den == r2.den;
}

// Function to compare two Ratio objects as first less than second
bool isLessThan(Ratio r1, Ratio r2) {
    return r1.num * r2.den < r2.num * r1.den;
}

// Function to input a Ratio object
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
    return simplify(r);
}

// Function to output a Ratio object
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

    cout << "Adding integer 3 to r1: ";
    outRatio(addInteger(r1, 3));

    int integer = 5;
    Ratio r3 = fromInteger(integer);
    cout << "Converted integer " << integer << " to Ratio: ";
    outRatio(r3);

    cout << "Ratio r1 as float: " << toFloat(r1) << endl;

    cout << "r1 and r2 are " << (isEqual(r1, r2) ? "equal" : "not equal") << endl;

    cout << "r1 is " << (isLessThan(r1, r2) ? "less than" : "not less than") << " r2" << endl;

    return 0;
}
