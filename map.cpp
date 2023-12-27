//map stores key value pair,,,key is always unique,,but many key can have same value
//amd same key cannot have different values,,,map is sorted by default
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="zoya";
    m[20]="Meaw";
    m[2]="khanam";
    m.insert({5,"cat"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        //first-> key ,,,,second -> values
    }
    cout<<"Finding 50->"<<m.count(50)<<endl;
    cout<<"Finding 20->"<<m.count(20)<<endl; //count returns 1 if element is present else 0
    //erase used to delete any element
    m.erase(20);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        //first-> key ,,,,second -> values
    }
}