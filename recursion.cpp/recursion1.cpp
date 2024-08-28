#include<iostream>
#include<math.h>
using namespace std;

int powerOf2(int n){
  //base case
  if(n==0){
    return 1;
  }
  return 2*powerOf2(n-1);

}

int factorial (int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * factorial(n-1);
}

void printCounting(int n){
  if(n==0){ //base case
    return;
  }
   // cout<<n<<endl; //tail recursion ->prints in decreasing order


    //recursive relation
    printCounting(n-1); 

    cout<<n<<endl; //head recursion ->prints in increasing order


}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    //int ans;
    //function call for factorial
    //ans=factorial(n);
    //cout<<ans;

    //function call for powerOf2
    //ans=powerOf2(n);
    //cout<<ans;

    //function call for printcounting
     printCounting(n);

    



    return 0;
}