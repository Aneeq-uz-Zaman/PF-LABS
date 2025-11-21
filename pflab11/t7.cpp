#include <iostream>
#include <array>

using namespace std;

array<array<int,2>,2> add(array<array<int,2>,2> data,array<array<int,2>,2> data2){
    array<array<int,2>,2> ar;

    for(int i=0;i<2;i++ )
    {
        for(int j=0;j<2;j++)
        {
            ar[i][j]=data[i][j]+data2[i][j];
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

    cout<<"Enter matrix:"<<endl;
	array<array<int,2>,2> v1;
	array<array<int,2>,2> v2;
    v1 = aget();
    ashow(v1);
    cout<<"Enter matrix2:"<<endl;

    v2 = aget();
    ashow(v2);


    cout << "Sum of matrices: " << endl;
    array<array<int,2>,2> x=add(v1,v2);
    ashow(x);
	return 0;
}
