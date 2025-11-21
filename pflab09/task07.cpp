#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i=1;
    while(i<12)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j;
            if(i==j)
            {
                int k=i-1;
                while(k>0)
                {
                    cout<<k;
                    k--;
                }
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<".."<<endl;

}

