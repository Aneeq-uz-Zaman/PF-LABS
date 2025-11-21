#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,5> a;
    int i=0;
    while(i<5)
    {
        cout<<"enter number:";
        cin>>a[i];
        i++;
    }
    i=0;
    while(i<5)
    {
        if (a[i] <= a[i + 1]) {
            cout << a[i] << " and " << a[i + 1] <<endl;
        }
        i=i+1;
    }

    return 0;
}


