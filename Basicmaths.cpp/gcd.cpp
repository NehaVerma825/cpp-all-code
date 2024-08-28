#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while (a!=b){
        if(a>b){    //until  any onr number becomes 0
            a -=b;
        }
        else{
            b-=a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b: "<<endl;
    cin>>a>>b;
    int ans= gcd(a,b);
    cout<<ans;
}