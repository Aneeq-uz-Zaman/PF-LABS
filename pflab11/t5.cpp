#include <iostream>
#include <array>

using namespace std;

array<int,2> addr(array<array<int,2>,2> data){
    array<int,2> ar;
    for(int i=0;i<2;i++)
    {
        int sum=0;
        for(int j=0;j<2;j++)
        {
            sum=sum+data[i][j];

        }
        ar[i]=sum;

    }
    return ar;


}
array<int,2> addc(array<array<int,2>,2> data){
    array<int,2> ar;
    for(int i=0;i<2;i++)
    {
        int sum=0;
        for(int j=0;j<2;j++)
        {
            sum=sum+data[j][i];

        }
        ar[i]=sum;

    }
    return ar;


}
array<array<int,2>,2> aget()
{
    array<array<int,2>,2> ar;
    int j = 0;
    while(j < 2)
    {
        int k = 0;
        while(k < 2)
        {
            cin >> ar[j][k];
            k = k + 1;
        }
        j = j + 1;
    }
    return ar;
}

void ashow(array<array<int,2>,2> data,array<int,2> x,array<int,2> y)
{
    int j = 0;
    while(j < 2)
    {
        cout<<y[j]<<"   ";
        cout<<x[j]<<":    ";
        int k = 0;
        while(k < 2)
        {
            cout << data[j][k] << "  ";
            k = k + 1;
        }
        cout << endl;
        j = j + 1;
    }
}



int main()
{
	array<array<int,2>,2> v;
    v = aget();

    cout << "You entered values: " << endl;
    array<int,2> x=addr(v);
    array<int,2> y=addc(v);
    ashow(v,x,y);
	return 0;
}
