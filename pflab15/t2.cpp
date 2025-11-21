#include <iostream>
#include <string>

using namespace std;

struct Course {
    string course_name;
    string course_code;
    int credits;
};

struct Student {
    string name;
    int roll_number;
    Course* enrolled_course;
};

int main() {
    Course course1 = {"Data Structures", "CS101", 3};
    Course course2 = {"Algorithms", "CS102", 4};

    Student student1 = {"ai", 101, &course1};
    Student *s1=&student1;
    Student student2 = {"ayan", 102, &course2};

    cout << student1.name << " is enrolled in " << s1->enrolled_course->course_name << endl;
    cout << student2.name << " is enrolled in " << student2.enrolled_course->course_name << endl;

    return 0;
}
