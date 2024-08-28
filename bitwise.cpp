#include<iostream>
using namespace std;
int main(){
   /* int a=5,b=3; // operators
    cout<<"a&b "<< (a&b)<< endl;
    cout<<"a|b "<< (a|b)<< endl;
    cout<<"~a "<< (~a)<< endl;
    cout<<"a^b "<< (a^b)<< endl; */

    //left and right shift
   /* cout<<(17>>1)<<endl;   //RS divide no by 2
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;   //RS multiply no by 2
    cout<<(21<<2)<<endl;*/

    //post and pre inc or dec
   /* int i=7;
    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;*/



    /*int n;
    cout<<"enter the number: ";
    cin>>n;
    // cout<<"printing the numbers from 1 to n ";
    int i=1;
    for( ; ; ){
            if(i<=n) {
            cout<< i<< endl;}
            else break;
        i++ ;
    } */


//Fiebonacci Numbers

   /* int n;
    cout<<" enter the number: ";  
    cin>> n;
    int a=0,b=1;
    cout<<a <<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nextNumb=a+b;
        cout<<nextNumb<<" ";
        
        a=b;
        b=nextNumb;
    }*/

    //PRIME OR NOT
    /*int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool IsPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            IsPrime=0;
        }
    }
    if(IsPrime==0){
        cout<<"not a prime no"<<endl;
    }
    else{
    cout<<"is a prime no"<< endl;
    }*/

    //SUBTRACT PRODUCT AND SUM OF DIGITS OF A NUMBER

   /* int n;
    cout<< "enter the number; ";
    cin>>n;
    int sum=0;
    int pro= 1;
    while(n!=0){
        int digit=n%10;
        pro=pro*digit;
        sum =sum+digit;
        n=n/10;
    }
    int ans = pro-sum;
    cout<< ans; */



    





return 0;
}