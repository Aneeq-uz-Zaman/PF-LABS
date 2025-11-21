#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<char,20> sc;
    int i=0;
    int n=0,c=0,alpha=0;
    while(i<5)
    {
        cout<<"Enter character:";
        cin>>sc[i];
        if((sc[i]>=65&&sc[i]<=91)|| (sc[i]>=97&&sc[i]<=123)){
                alpha++;
           }
        else if(sc[i]>=48&&sc[i]<=57)
        {
            n++;
        }
        else
        {
            c++;
        }
        i++;
    }
    cout<<"Alphabets:"<<alpha<<"\nIntegers:"<<n<<"\nSpeacail chSaracter:"<<c;

    return 0;

}

