#include <iostream>
#include <array>

using namespace std;

array<array<int,2>,2> trans(array<array<int,2>,2> data){
    array<array<int,2>,2> ar;

    for(int i=0;i<2;i++ )
    {
        for(int j=0;j<2;j++)
        {
            ar[i][j]=data[j][i];
        }
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

void ashow(array<array<int,2>,2> data)
{
    int j = 0;
    while(j < 2)
    {
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
    array<array<int,2>,2> x=trans(v);
    ashow(x);
	return 0;
}
