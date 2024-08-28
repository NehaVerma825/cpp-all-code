#include <iostream>
#include<vector>
using namespace std;


void explainVector(){

    // containers
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<< " "<<v.at(0); //both has same meaning value at index 0
    cout<<v.back()<<" "<<endl;  //element at the end

    vector<pair<int,int>>p;
    p.push_back({1,2});  //we need to use "{}" for insert perticular pair
    p.emplace_back(1,2); //automatically assumes as pair and accept it as pair
    vector<int>v(5,100);// container with size 5 and define with 5 instences of 100
    vector<int>v(5); //container with 5 instences with garbage value  n size expandable

    vector<int>v1(5,10);//copying v1 in some other vector v2 like below
    vector<int>v2(v1);  //another v2 similar container but copy of v1 with 5 instences



    //Iterators
    vector<int>::iterator var =v.begin();// v.begin indicates address of 1st memory location
    var++;      //var is iterator name
    cout<<*(var)<<" "; //"*" for accesing element at that memory location
    var=var+2;
    vector<int>::iterator var= v.end();  //memory location right after last element
    vector<int>::iterator var= v.rend(); //
    vector<int>::iterator var= v.rbegin();  //reverse iterator starts from end


    for(auto var:v){   //"auto"  automatically assign the datatype of given variable
        cout<<var <<" ";
    }

    v.erase(v.begin()+1);  //index =0+1=1
    v.erase(v.begin()+2, v.begin()+4); //starting and end address after the element to erase


    //insert function
    vector<int>v(2,100);   //{100,100}
    v.insert(v.begin(),300);  //{300,100,100}
    v.insert(v.begin()+1,2,10);  //{300,10,10,100,100} here 2 no of occurances of 10


    vector<int>copy(20,50);  //{50,50}
    v.insert(v.begin(),copy.begin(), copy.end()); //{20,50,300,10,10,100,100}
    //new arr me kha se start kre insertion, arr copy me se kha se kha tk ka insert kre
    

    





}


int main() {
    // Call explainVector from main
    explainVector();
    return 0;
}