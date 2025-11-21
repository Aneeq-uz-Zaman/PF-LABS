#include <iostream>
#include<array>
using namespace std;


array<float,12> rearrange(array<float,12> &a)
{
    array<float,12> r;

    int temp;
    int i=0;
    while(i<12)
    {
        int j=0;
        while(j<11)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            j++;
        }
        i++;
    }

    return a;
}
int main() {
    array<float,12> a={23, 54, 12, 19, 67, 9, 45, 32, 90, 58, 19, 20};
    rearrange(a);
    int i=0;
    while(i<12)
    {
        cout<<a[i]<<"  ";
        i++;
    }


    return 0;
}
