#include<iostream>
#include<array>  //for array STL
using namespace std;
int main(){
    int basic[]={1,2,3};
    array<int,4>a={8,2,5,0}; // representing array in STL
    int size=a.size();  // for finding size;int(arr type),a(arr on which size operation is on going)
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;  //for printing elmt of array(a),at ith index
    }
    cout<<"element at 2nd index "<<a.at(2)<<endl; //(.at)for access elmt at index(2)
    cout<<"empty or not-> "<<a.empty()<<endl; //return bool ans
    cout<<"first element of array: "<<a.front()<<endl;
    cout<<"last element of array: "<<a.back()<<endl;
}