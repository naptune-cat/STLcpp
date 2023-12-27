//vector is dynamic array
//when vector is filled and if we add more elements then it will make a double sized vector
//when we define a vector its size is 0
#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int> v;
    //vector<int> a(size,initialize)
    vector<int> a(5,1);
    vector<int> last(a); //make a duplicate vector containing val of a
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity  "<<v.capacity()<<endl;
    cout<<"size   "<<v.size()<<endl;
    cout<<"element at 2nd index   "<<v.at(2)<<endl;
    cout<<"Front  "<<v.front()<<endl;
    cout<<"Back   "<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    //when we clear vector the size becomes 0 but not capacity
}