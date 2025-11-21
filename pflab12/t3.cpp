#include <iostream>
#include <array>

using namespace std;

bool str(string a)
{
    bool r=true;
    string b;
    int j=0;
    int k=a.size();
    while(a[j]!='\0'){
        b[j]=a[--k];
        cout<<b[j];
        if(a[j]!=b[j])
        {
            r=false;
        }
        j++;
    }

    return r;
}

int main()
{
    string a;
    cin>>a;
    bool x=str(a);
    cout<<endl<<x;

	return 0;
}
