/*
ID: zhehaiz1
LANG: C++
TASK: ride

*/

#include <iostream>;
#include <string>;
#include <vector>;
#include <fstream>;

using namespace std;


//inline for functions

int main(){

    ifstream fin ("ride.in");
    ofstream fout ("ride.out");
    string a;
    string b;
    int c= 1;
    int d = 1;
    fin >> a >> b;
    for (int i = 0; i<a.length();i++){
        c*=((int)a[i]-64);

    }

    for (int anish = 0; anish < b.length();anish++){
        d*=((int)b[anish]-64);
    }
    c = c%47;

    d = d%47;

    if (c==d){
        fout << "GO" << endl;
    }
    else{
        fout << "STAY" << endl;
    }

    return 0;

}
