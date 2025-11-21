#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i=1;
    while(i<31)
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

}

