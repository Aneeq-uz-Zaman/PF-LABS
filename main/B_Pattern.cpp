#include <iostream>


using namespace std;

int main()
{
    int i=1;

    while(i<=7)
    {
        int j=1;
        while(j<=6)
        {
            if(i==1 || i==4 || i==7)
            {
                cout<<"*";
            }
            else
            {
                if(j==1 || j==6)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<" ";
                }
            }
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}


