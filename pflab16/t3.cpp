#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

string alphaDate(Date date) {
    string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if (date.month < 1 || date.month > 12) {
        throw "Month value can be within 1 to 12";
    }
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (date.day < 1 || date.day > daysInMonth[date.month]) {
        throw "Days are invalid for the month of " + months[date.month];
    }


    return months[date.month] + " " + to_string(date.day) + ", " + to_string(date.year);
}

int main() {
    try {
        Date date = {2,6,2005};
        cout << alphaDate(date) << endl;
    } catch (string e) {
        cout << e << endl;
    }
    return 0;
}
