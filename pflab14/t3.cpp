#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string longest(string a)
{
    string b;
    vector<string> r;

    istringstream s(a);
    while(s >> b){
            r.push_back(b);
    }
    string max= "";
    for(string word:r){
        if(word.length() >= max.length())
            max=word;
    }
    return max;

}

int main() {
    string a;
    getline(cin, a);
    string r=longest(a);
    cout<<r;
    return 0;
}
