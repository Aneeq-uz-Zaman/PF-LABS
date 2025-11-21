#include <iostream>
#include <array>
using namespace std;

void out(array<string,12> month)
{
    int j=0;
    cout<<"Output:"<<endl;
    while(j<12)
    {
        cout<<month[j]<<endl;
        j++;
    }
    return;

}
int main()
{
    array<string,12> month;
    int i=0;
    while(i<12)
    {
        cout<<"Enter month name:";
        cin>>month[i];
        i++;
    }
    out(month);

    return 0;

}

