#include <iostream>
#include <array>

using namespace std;

int main()
{


    array<int,100> a;
    int N;
    cout<<"Enter number N:";
    cin>>N;





    int i=0;
    while(i<N)
    {
        a[i]=rand();
        i++;
    }




    int temp;
    i=0;
    while(i<N)
    {
        int j=0;
        while(j<N)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            j++;
        }
        i++;
    }




    i=0;
    while(i<N)
    {
        cout<<i<<":"<<a[i]<<endl;
        i++;
    }



    return 0;
}

