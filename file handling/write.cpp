#include <iostream>
#include <fstream>
#include <array>
#include <string>
using namespace std;


int main() {
    ofstream f;
    f.open("write_example.txt");
    string a[10];

    for(int j=0; j<2; j++)
	{
	    getline(cin,a[j]);

		f << a[j]<<"\n";
		cout << a[j]<<endl;
	}

	f.close();

    return 0;
}
