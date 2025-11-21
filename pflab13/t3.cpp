#include <iostream>
#include <array>

using namespace std;

int main()
{
    int a[5]={15,7,31,1,-2};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    char* var=char*(a);
    for(int i=0;i<20;i++)
    {
        cout<<var[i]<<endl;
    }

	return 0;
}
