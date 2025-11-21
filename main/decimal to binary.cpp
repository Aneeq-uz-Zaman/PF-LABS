#include <iostream>

using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0)
    {
        cout<<num%2;
        num=num/2;
    }

    return 0;
}

