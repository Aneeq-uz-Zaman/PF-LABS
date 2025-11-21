#include <iostream>
#include <array>
using namespace std;

int findMax(array<int, 100> arr, int size,int value) {
    int index = 0;
    int i = 0;
    while (i < size) {
        if (arr[i] == value) {
            index = i;
        }
        i=i+1;
    }
    return index;
}

int main() {
    array<int, 100> a;
    int ds;
    cout<<"Enter data size:";
    cin>>ds;
    int n;
    cout<<"Enter number:";
    cin>>n;
    int i=0;
    while(i<ds)
    {
        cin>>a[i];
        i++;
    }

    cout << "Value is at index :" << findMax(a, ds ,n) << endl;

    return 0;
}
