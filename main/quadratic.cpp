#include <iostream>

#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a ,b ,c:";
    cin>>a>>b>>c;
    float ans=b*b-4*a*c;
    float x1,x2;
    if(ans>=0)
    {
        x1=(-b+sqrt(ans))/(2*a);
        x2=(-b-sqrt(ans))/(2*a);
        cout<<"roots are"<<"("<<x1<<","<<x2<<")";

    }
    else{
        x1=-b/(2*a);
        x2=sqrt(-ans)/(2*a);
        cout<<"("<<x1<<","<<x2<<"i)";

    }


    return 0;
}

