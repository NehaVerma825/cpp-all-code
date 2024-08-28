#include<iostream>
using namespace std;

int countSetBit(int n){
    int count=0;
    while(n!=0){
        count+=n&1;
        n=n>>1;

    }
    return count;
}
int main(){
    int a,b;
    cout<<"enter the two no. ";
    cin>>a>>b;
    int totalSetBits =countSetBit(a)+countSetBit(b);
    cout<<"total set bit in "<<a<< " and "<<b<<" is given as: "<<totalSetBits;
    // int a;
    // cout<<"enter the number: ";
    // cin>>a;
    // cout<<countSetBit(a);



    return 0;
    
}