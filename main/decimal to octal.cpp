#include <iostream>

using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    while(num>0)
    {
        cout<<num%8;
        num=num/8;
    }

    return 0;
}

