#include<iostream>
#include<vector>
using namespace std;
int main(){
    //size already known
    vector<int>a(5,1);  // a(size of vector,initialiser)
    vector<int>last(a);  //copying vector 'a'in vector 'last'
    cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    } cout<<endl;

    vector<int>v;  //intially null vector
    cout<<"capacity-> "<<v.capacity()<<endl;  //capacity= memory assigned

    v.push_back(1);  // capacity and size is 1
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2); // for capacity it increases its size by doubling the prev capacity
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3);  // capacity=2*2=4;but size =no of element present=3
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;

    cout<<"element at 2nd index-> "<<v.at(2)<<endl;
    cout<<"first element->"<<v.front()<<endl;
    cout<<"last element->"<<v.back()<<endl;

    cout<<"before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop: "<<endl;
    for(int i:v){  //loop that iterates over each element i in the vector v.
        cout<<i<<" ";
    } cout<<endl;

    cout<<"before clear size-> "<<v.size()<<endl;
    v.clear();   //element will clear bt capacity reamins
    cout<<"after clear size-> "<<v.size()<<endl;


}