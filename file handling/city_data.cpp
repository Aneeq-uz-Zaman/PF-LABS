#include <iostream>
#include <fstream>
#include <array>
#include <sstream>
using namespace std;


int main() {
    stream f;
    f.open("citydata.txt");
    int ds;
    f>>ds;
    f.ignore();
    cout<<ds<<endl;
    int* ar= new int[ds];
    int* pop= new int[ds];
    string* city= new string[ds];
    float* lon= new float[ds];
    float* lat= new float[ds];
    string s;
    getline(f,s);
    getline(f,s);
    getline(f,s);
    cout<<"hello"<<endl;


    for(int j=0; j<ds; j++)
	{
	    getline(f,s);
	    stringstream ss(s);
	    getline(ss,city[j],'\t');
	    ss>>ar[j]>>pop[j]>>lon[j]>>lat[j];
	    ss.ignore();
	    cout << "City: " << city[j]
             << ", Area: " << ar[j]
             << ", Population: " << pop[j]
             << ", Longitude: " << lon[j]
             << ", Latitude: " << lat[j] << endl;


	    cout<<endl;

	}
	int max=pop[0];
	for(int i=0;i<ds;i++)
    {
        if(pop[i]>max)
            max=pop[i];
    }
    cout<<max;
	// Clean up dynamic memory
    delete[] ar;
    delete[] pop;
    delete[] city;
    delete[] lon;
    delete[] lat;
    f.close();


    return 0;
}
