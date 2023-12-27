//set me sirf unique elements store hote hain,,modification is not possible,,sorted order
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(10);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
}