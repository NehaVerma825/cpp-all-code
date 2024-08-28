#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(2);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"after erase->";
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;
    cout<<"size of list-> "<<l.size();
}