#include <iostream>
#include <array>

using namespace std;

int main()
{

    int sum=0;
    int **ptr;
    for(int i=-3;i<3;i++)
    {
        cout<<"Enter value:";
        cin>>ptr[i];
        sum=sum+ptr[i];
    }
    cout<<sum<<endl;
	return 0;
}
