#include <iostream>
#include <array>

using namespace std;

string str(string a)
{
    string b;
    int j=0;
    int k=a.size();
    while(a[j]!='\0'){
        b[j]=a[--k];
        cout<<b[j];
        j++;


    }
    cout<<b;
    return b;
}

int main()
{
    string a;
    cin>>a;
    str(a);

	return 0;
}
