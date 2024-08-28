#include<iostream>
using namespace std;

int factorial(int n){             //this line is fuction signature
    int fact=1;
    for(int i=1;i<=n;i++){       //function body
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    return ans;
    
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<< "answer is "<<nCr(n,r)<< endl;    //function call

    return 0;
}
  














  