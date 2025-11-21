#include <iostream>
#include <array>

using namespace std;

int str(string a)
{
    int j=0;
    for(int i:a){
        j++;
    }
    return j;
}

int main()
{
    string a;
    cin>>a;
    int x=str(a);
    cout<<x;

	return 0;
}
