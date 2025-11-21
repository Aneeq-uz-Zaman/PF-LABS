#include <iostream>
#include <array>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    array<array<int,10>,100> freq={0}; // Array to store digit frequencies

    // Calculate cumulative frequencies for each number up to N
    int i = 1;
    while (i <= N) {
        // Copy frequencies from the previous row
        int j = 0;
        while (j < 10) {
            freq[i][j] = freq[i - 1][j];
            j++;
        }

        // Update frequencies for the current number
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            freq[i][digit]++;
            num /= 10;
        }

        i++;
    }

    // Print header
    cout << "       ";
    int header = 0;
    while (header < 10) {
        cout << header << "   ";
        header++;
    }
    cout << endl;

    // Print cumulative frequency table
    i = 0;
    while (i <= N) {
        cout << i << ":     ";

        int j = 0;
        while (j < 10) {
            cout << freq[i][j] << "   ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
