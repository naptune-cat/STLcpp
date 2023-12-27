#include<iostream>
#include<deque>
//it is a double ended queue
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back(); //same working of d.pop_front();
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<"Print 1st index  "<<d.at(1)<<endl;
    cout<<"front    "<<d.front()<<endl;
    cout<<"back     "<<d.back()<<endl;
    cout<<"Empty or not  "<<d.empty()<<endl;
    cout<<"Before erase  "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); //deletes 1st element
    cout<<"after erase  "<<d.size()<<endl;
}