/*
ID: zhehaiz1
LANG: C++
TASK: gift1

*/


#include <iostream>;
#include <string>;
#include <vector>;
#include <fstream>;
#include <map>
using namespace std;

int main(){
    ifstream fin ("gift1.in");
    ofstream fout ("gift1.out");

    int a = 0;
    fin >> a;
    //vector<string> names {"416","647","437"};
    //map is for sorting
    map<string,int> names;
    map<string,int>::iterator it;//iterator
    /*
    names["ansih"]=2;
    names["Zhehai"]=100;
    for (it = names.begin();it!=names.end();it++){
        cout << it->first << " " << it-> second << endl;
    }
    */

    for (int i = 0;i<a;i++){
        string b;
        fin >> b;
        names[b] = 0;
    }


    //Commence Giving
    for (int b = 0;b<a;b++){
        string currentp;
        fin >> currentp;
        int currentmoney;
        int people;
        fin >> currentmoney >> people;
        if (currentmoney!=0){
            int eachmoney = currentmoney/people;
            int moneyleft = currentmoney%people;
            for (int i = 0;i<people;i++){
                string name;
                fin >> name;
                names[name] += eachmoney;
            }
            names[currentp]+=moneyleft;
            names[currentp]-=currentmoney;
        }

    }
    for (it = names.begin();it!=names.end();it++){
        fout << it->first << " " << it-> second << endl;

    }
    return 0;
}
