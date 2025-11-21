#include <iostream>

#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int i=0;
    int sum=0;
    int r;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*pow(8,i));
        num=num/10;
        i=i+1;
    }
    cout<<"Answer:"<<sum;
    return 0;
}

