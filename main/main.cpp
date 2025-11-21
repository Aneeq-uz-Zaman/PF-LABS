#include <iostream>

using namespace std;
float average(int a, int b, int c);
int main()
{
    cout << "Hello world!\n";
    cout<< average(2,3,5);
    return 0;
}

float average(int a, int b, int c)
{
    float avg;
    int sum = a+b+c;
    avg = sum/3;
    return avg;
}
