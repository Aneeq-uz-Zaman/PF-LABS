#include <iostream>
#include <array>
using namespace std;

int Index(array<int, 100> arr, int size) {
    int i = 0;
    int r=-1;
    while (i < size-1 ) {
        if (arr[i] > arr[i + 1]) {
            r=i;
        }
        i = i + 1;
    }
    return r;
}

int main() {
    array<int, 100> a;
    int ds;

    cout << "Enter data size: ";
    cin >> ds;

    int i = 0;
    while (i < ds) {
        cout << "Enter element : ";
        cin >> a[i];
        i++;
    }

    int unsorted = Index(a, ds);
    if(unsorted==-1)
    {
        cout<<"whole array is sorted";
    }
    else{
        cout<<"The array is not sorted from index:"<<unsorted;
    }

    return 0;
}
