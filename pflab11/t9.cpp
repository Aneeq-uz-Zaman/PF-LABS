#include <iostream>
#include <array>

using namespace std;

bool trans(array<array<int,2>,2> data){

    bool iden=true;

    for(int i=0;i<1;++i )
    {
        for(int j=0;j<i+1;++j)
        {
            for(int k=0;k<2;k++)
                 if(data[i][k]=!data[j][k])
                 {
                     iden=false;
                     break;
                 }
        }
    }
    return iden;
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

    bool x=trans(v);

    if(x){
            cout<<"det is zero";

    }
    else{
        cout << "not zero" << endl;
    }

	return 0;
}
