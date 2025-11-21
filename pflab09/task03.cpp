#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,3> d={5,8,3};
    array<int,3> t={2,2,2};
    int i=0;
    while(i<3)
    {
        cout<<"Distance:"<<d[i]<<"\tTime:"<<t[i]<<"\tSpeed:"<<float(d[i])/float(t[i])<<endl;
        i++;
    }


    return 0;

}

