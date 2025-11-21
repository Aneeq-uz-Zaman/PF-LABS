#include <iostream>
#include <array>
using namespace std;

int frequ(int i, int j) {
    int sum = 0;
    while (i > 0) {
        int digit = i % 10;
        if (digit == j) {
            sum++;
        }
        i = i / 10;
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    array<array<int, 10>, 100> f ;





    cout << "       ";
    int header = 0;
    while (header < 10)
        {
        cout << header << "   ";
        header++;
    }



    cout << endl;





    int i = 0;
    while (i <= N) {
        cout << i << ":     ";

        int j = 0;

        while (j < 10)
            {
            if (i == 0)
            {
                f[i][j] = 0;
            }
            else
            {
                f[i][j] = f[i - 1][j] + frequ(i, j);
            }
            cout << f[i][j] << "   ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
