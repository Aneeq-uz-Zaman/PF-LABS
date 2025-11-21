#include <iostream>
#include <array>
using namespace std;

int findMax(array<int, 100> arr, int size) {
    int maxVal = arr[0];
    int i = 1;
    while (i < size) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        i=i+1;
    }
    return maxVal;
}

int main() {
    array<int, 100> a;
    int ds;
    cout<<"Enter data size:";
    cin>>ds;
    int i=0;
    while(i<ds)
    {
        cin>>a[i];
        i++;
    }

    cout << "Max value in array: " << findMax(a, ds) << endl;

    return 0;
}
