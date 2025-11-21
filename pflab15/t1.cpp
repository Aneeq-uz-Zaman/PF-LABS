#include <iostream>
#include <string>
#include <array>

using namespace std;

struct teacher
{
    int rank;
    string name;
    string course;
    string dep;
};

int main() {
    teacher* t[2];
    for(int i=0;i<2;i++)
    {
        t[i]= new teacher;
        cin>>t[i]->rank;
        cin>>t[i]->name;
        cin>>t[i]->course;
        cin>>t[i]->dep;
    }
    cout<<"Sr\tNAME\tDEPARTMENT\tCOURSE\tRANK"<<endl;
    for(int i=0;i<2;i++){
        cout<<i<<"\t"<<t[i]->name<<"\t"<<t[i]->dep<<"\t\t"<<t[i]->course<<"\t"<<t[i]->rank<<endl;
    }
    return 0;
}
