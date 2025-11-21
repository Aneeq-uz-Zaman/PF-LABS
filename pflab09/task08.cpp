#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i=1;
    while(i<4)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<".."<<endl;
    i=3;
    while(i>0)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i--;
    }

}

