#include <iostream>
#include <array>
using namespace std;

int main() {

    array<array<int,6>,100> student;
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    cout<<"Subjects:\tPF\tICT\tISL\tPAk\tQURAN\tENG\t|\tAVG";
    cout<<endl;
    cout<<endl;
    int i=0;
    float avg;
    while(i<n)
    {
        cout<<"Student "<<i+1<<":\t";
        int j=0;
        int sum=0;
        while(j<6)
        {
            student[i][j]=rand()%100;
            sum=student[i][j]+sum;
            cout<<student[i][j]<<"\t";
            j++;
        }
        avg=float(sum)/6;
        cout<<"|\t"<<avg;
        i++;
        cout<<endl;
    }


    return 0;
}
