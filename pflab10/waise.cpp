#include <iostream>
#include <string>
#include <array>
using namespace std;

struct Student {
    string name;
    int roll;
    float per;

};
void input(array<Student,3> &s)
{
    int i=0;
    while(i<3)
    {
        cin>>s[i].name;
        cin>>s[i].roll;
        cin>>s[i].per;
        i++;

    }
}
void output(array<Student,3> arr)
{
    int i=0;
    while(i<3)
    {
        cout<<arr[i].name<<"\t"<<arr[i].roll<<"\t"<<arr[i].per<<endl;
        i++;
    }
}



int main()
{
    array<Student,3> arr;
    input(arr);
    output(arr);
    return 0;
}
