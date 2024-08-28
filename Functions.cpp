#include<iostream>
using namespace std;

//function signature 
void printCounting(int n){
    //function body
    for(int i=1;int<=n;i++){
        cout<<i<<" ";

    }
    cout<<endl;
}

int power(){
    int a, b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}


    bool isEven(){
        int a;
        cin>>a;
        if(a&1){
            return 0;    //odd
        }
        else{
             return 1;  //even
        }
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int numerator=factorial(n);
    int denominator =factorial(n)*factorial(n-r);
    return numerator/denominator;
}

int main(){
    // int a,b;
    // cin>>a>>b;
    // int answer=power(a,b);
    // cout<<"answer is "<<answer;

            //OR

    // cout<<"answer is "<<power();
    // cout<<"answer is "<<power(); // for various functions at a time
    // cout<<"answer is "<<power();

    //cout<<"given no is "<< isEven();


 //factorial function call
    // int n,r;
    // cin>>n>>r;
    // cout<<"answer is "<<nCr(n,r)<<endl;

    int n;
    cin>>n;
    //function call
    printCounting(n);






 return 0;
}


