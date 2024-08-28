#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m; // is a key-value container that stores elements sorted by the keys
    m[1]="neha";  //no inside [] are keys and that corresponding string values
    m[12]="verma";
    m[5]="nadanwar";
    m.insert({8,"seema"});
    cout<<"befor erase";
    for(auto i:m){
    //here .first is 1st member = key & .second is 2nd member =value correp to key
        cout<<i.first<<" "<<i.second<<endl;
    }
    //count function is used to check if there is an element with key 13 in the map
    cout<<"finding 13-> "<<m.count(13)<<endl;

    
    m.erase(5);
    cout<<"after erase"<<endl;
    //loop used again to iterate over updated elements of the map and print them.
    for(auto i:m){ 
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13-> "<<m.count(13)<<endl;  // finding key 13 after erase

    auto it=m.find(1 );
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
//*i, which gives us the key-value pair , (*i).first is used to access the key of that pair
    }



}