//priority queue means that first element will be the greatest of all the elements..it is like
//heap ,,when we make max heap and when we pop it will give the greatest element always
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int ,vector<int> , greater<int>> mini;
    maxi.push(0);
    maxi.push(1);
    maxi.push(9);
    maxi.push(2);
    int n= maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    mini.push(0);
    mini.push(1);
    mini.push(9);
    mini.push(2);
    int m= mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }

} 