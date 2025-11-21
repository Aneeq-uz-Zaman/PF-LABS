#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    double matricMarks;
    double interMarks;
};

int main() {
    Student s;
    Student *ptr = &s;

    cout << "Enter roll number: ";
    cin >> ptr->rollNo;

    cout << "Enter name: ";
    cin>>ptr->name;

    cout << "Enter matric marks: ";
    cin >> ptr->matricMarks;

    cout << "Enter intermediate marks: ";
    cin >> ptr->interMarks;

    cout << "\nStudent Details:\n";
    cout << "Roll Number: " << ptr->rollNo << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Matric Marks: " << ptr->matricMarks << endl;
    cout << "Intermediate Marks: " << ptr->interMarks << endl;

    return 0;
}
