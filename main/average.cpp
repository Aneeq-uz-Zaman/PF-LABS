#include <iostream>
#include <array>

using namespace std;

int main()
{
    int N;
    cout<<"Enetr total:";
    cin>>N;
    int sum=0,i=0;
    array<int,50> a;
    while(i<N)
    {
        cin>>a[i];
        sum=sum+a[i];
        i=i+1;
    }
    float avg=sum/N;
    int j=0;
    cout<<"The numbers which are above avg :"<<endl;
    while(j<N)
    {
        if(a[j]>avg)
        {
            cout<<a[j]<<endl;
        }
        j=j+1;
    }
    cout<<"Average: "<<avg;
    return 0;
}

