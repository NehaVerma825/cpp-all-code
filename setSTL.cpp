#include<iostream>
#include<set>   
using namespace std;
int main(){
    set<int>s;
    s.insert(8);  //always output in sorted order
    s.insert(0);  //ignor repeations
    s.insert(6);
    s.insert(4);
    s.insert(2);
    s.insert(8);
    s.insert(2);
    s.insert(8);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it=s.begin(); //erasing 2nd no 
    it++;  
    
    s.erase(it);
    for(auto i:s){  //when the type of the elements (i here) is unknown or may change.
        cout<<i<<endl;
    }cout<<endl;

    cout<< "4 is present or not-> "<<s.count(4)<<endl;//check weather an elmt present or not

    set<int>::iterator itr =s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}