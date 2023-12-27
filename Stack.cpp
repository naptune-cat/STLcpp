#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("zoya");
    s.push("Khanam");
    cout<<"Top of stack  ::::"<<s.top()<<endl;
    s.pop();
    cout<<"Top of stack  ::::"<<s.top()<<endl;
}