/*
ID: zhehaiz1
LANG: C++
TASK: friday

*/


#include <iostream>;
#include <string>;
#include <vector>;
#include <fstream>;
#include <map>
using namespace std;


int main(){

    ifstream fin ("friday.in");
    ofstream fout ("friday.out");
    vector<int> thinglist;
    thinglist = {0,0,0,0,0,0,0};
    vector<int> month = {31,28,31,30,31,30,31,31,30,31,30,31};
    int special = 29;
    int year = 0;
    int current = 2;
    fin >> year;
    int days = 1;
    //366 for leap year
    for (int i = 0; i<year; i++){//every year
        for (int a = 1; a<13; a++){ // every month
            if ((i+1900)%400==0 and a == 2){
                for (int b = 1;b<(special+1);b++){
                    if (days == 13){
                        thinglist[current]+=1;
                    }
                    current+=1;
                    if (current>6){
                        current = 0;
                    }
                    days++;
                }
                days = 1;
            }
            else if ((i+1900)%4==0 and (i+1900)%100 !=0 and a==2){
                for (int b = 1;b<special+1;b++){
                    if (days == 13){
                        thinglist[current]+=1;
                    }
                    current+=1;
                    if (current>6){
                        current = 0;
                    }
                    days++;
                }
                days = 1;
            }
            else{
                for (int b = 1;b<(month[a-1]+1);b++){
                    if (days == 13){
                        thinglist[current]+=1;
                    }
                    current+=1;
                    if (current>6){
                        current = 0;
                    }
                    days++;
                }
                days = 1;
            }
        }
    }
    for (int i = 0;i<7;i++){
        //cout << thinglist[i] << " ";
        if (i == 6){
            fout << thinglist[i] << endl;
        }
        else{
            fout << thinglist[i] << " ";
        }


    }
    return 0;


}
