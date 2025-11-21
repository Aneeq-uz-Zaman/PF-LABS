#include <iostream>
#include <string>
#include <array>

using namespace std;

int sum(int a[],int ds)
{
    int sum=0;
    for(int i=0;i<ds;i++)
    {
        sum=sum+ a[i];
    }
    return sum;
}

int main() {
    int ds;
    cin>>ds;
    int* arr =new int[ds];
    for(int i=0;i<ds;i++){
        cin>>arr[i];
    }
    int s=sum(arr,ds);
    cout<<s;
    return 0;
}
