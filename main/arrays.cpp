#include <iostream>
#include <array>

using namespace std;

void input_sum_result(array<int,50> a,array<int,50> b, array<int,50> c,int N)
    {

        int i=0;
        while(i<N)
        {
            cout<<"Enter number in array 1:";
            cin>>a[i];
            cout<<"Enter number in array 2:";
            cin>>b[i];
            c[i]=b[i]+a[i];
            i=i+1;
        }
        int j=0;
        while(j<N)
        {
            cout<<c[j]<<endl;
            j=j+1;
        }
        return;
    }
int main()
{
    int N;
    cout<<"Enter total:";
    cin>>N;
    array<int,50> c;
    array<int,50> a;
    array<int,50> b;
    input_sum_result(a,b,c,N);

    return 0;
}


