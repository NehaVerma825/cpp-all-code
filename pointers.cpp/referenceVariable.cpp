#include<iostream>
using namespace std;
void update(int n){ //call by value
    n++;
}
void update2(int& n){ //for call byb reference 
    n++;
}

int& func(int n){  // return by reference , data type return type of function
    int num=n;
    int& ans=num;
    return ans;
}

int * fun(int n){
    int *ptr=&n;
    return ptr;
}

int main(){
    // int x=5;
    // int &y=x;
    // cout<<x<<endl;
    // x++;
    
    // cout<<x<<endl;
    // cout<<y+4;
    // int x=5;
    // cout<<"before "<<x<<endl;
    // update2(x);
    // cout<<"after "<<x;
    int n=5;
    fun(n);


   return 0;                
}