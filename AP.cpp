#include<iostream>
using namespace std;

int sumOfNum(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum=1;
    sum= n*(n+1)/2;
    return sum;
}
int NthTermOfAp(){
    int a,n,d;
    cout<<" enter the first term, nth term and common diffrence: ";
    cin>>a>>n>>d;
    int An= a+((n-1)*d);
    return An;

}
int main(){
    // int n;
    //  cin>>n;
    // cout<< " sum of n natural numbers is "<<sumOfNum()<<endl;
    cout<<" Nth term of an Ap is given as: "<<NthTermOfAp()<<endl;
}