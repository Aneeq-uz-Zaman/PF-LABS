#include <iostream>
#include <fstream>
#include <array>
using namespace std;


int main() {
    ifstream f;
    f.open("nums.txt");
    string a[10];

    for(int j=0; j<10; j++)
	{
		getline(f,a[j]);
		cout << a[j] << "\n";
	}
	cout<<endl;


    return 0;
}
