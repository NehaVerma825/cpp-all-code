#include<iostream>
using namespace std;

int getMax(int &a, int&b){
   // return (a>b)?a:b;//this used in place of if else condotion
    inline return (a>b)?a:b;//inline function we use when thire is 1 line code in function
    //work:before getting compile wherever the function calls the whole line replace with
    //function call place
    //function call replace with function body
}

int main(){
    int a=1,b=2;
    int ans=0;
    ans=(a>b)?a:b;  //functiion call getting replace with function body
    cout<<ans<<endl;

    a=a+3;
    b=b+2;
    
    ans= getMax(a,b);
    cout<<ans<<endl;

}