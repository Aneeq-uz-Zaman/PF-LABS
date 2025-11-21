#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i=6;
    while(i>0)
    {
        int j=1;
        while(j<=i)
        {
            if(i==j)
            {
                cout<<j;
            }
            else{
                cout<<" ";
            }

            j++;
        }
        cout<<endl;
        i--;
    }

}

