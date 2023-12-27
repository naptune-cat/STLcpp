#include<iostream>
#include<list>
using namespace std;
//doubly link list
int main() {
    list<int> l;
    l.push_back(1); //pop_back() and pop_front()
    l.push_front(2);
    l.push_front(3);
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    l.remove(2); 
     for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
}