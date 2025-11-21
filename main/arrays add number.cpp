#include <iostream>
#include<array>
using namespace std;

int main() {
    array<int,2> a={1,2};
    array<int,2> b={1,2};
    array<int,2> c={1,2};
    array<int,2> sum;
    int N=2;
    int i=0;
    while(i<N)
    {
        sum[i]=a[i]+b[i]+c[i];
        cout<<sum[i]<<endl;
        i++;

    }

    return 0;
}
