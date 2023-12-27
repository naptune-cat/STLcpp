#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("zoya");
    q.push("khanam");
    q.push("mau");
    cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    cout<< q.size();
}