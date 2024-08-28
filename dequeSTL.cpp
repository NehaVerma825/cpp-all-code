#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;  //double Ended queue: push n pop from both sides
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<"print first index element->"<<d.at(1)<<endl;
    cout<<"front->"<<d.front()<<endl;
    cout<<"back->"<<d.back()<<endl;

    cout<<"empty or not->"<<d.empty()<<endl;
    cout<<"before erase->"<<d.size()<<endl; 
    d.erase(d.begin(),d.begin()+1);  // we can erase some elements from vector
    //  (from where to start erase, upto how no of element erase from start)
    cout<<"after erase->"<<d.size()<<endl;
}