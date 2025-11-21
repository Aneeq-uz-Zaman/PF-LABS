#include <iostream>
#include <array>
using namespace std;

int findMax(array<int, 100> arr, int size) {
    int maxVal = arr[0];
    int i = 0;
    int max_in=0;
    while (i < size) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            max_in=i;
        }
        i=i+1;
    }
    return max_in;
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

    cout << "Max value in array at index: " << findMax(a, ds) << endl;

    return 0;
}
