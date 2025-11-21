#include <iostream>
#include <array>

using namespace std;

int main()
{
    int ds;
    cout<<"Enter size:";
    cin>>ds;
    int sum=0;
    int *ptr= new int[ds];
    for(int i=0;i<ds;i++)
    {
        cout<<"Enter value:";
        cin>>*(ptr+i);
        sum=sum+ptr[i];
    }
    cout<<sum<<endl;
	return 0;
}
