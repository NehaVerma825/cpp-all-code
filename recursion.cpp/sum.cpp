#include<iostream>
using namespace std;
int getSum(int *arr,int size){

    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    //recursion call
    int remainingPart=getSum(arr+1,size-1);

      //processing
    int sum=arr[0]+remainingPart;
    return sum;

    }


int main(){
    int arr[5]={3,8,4,30,2};
    int size=5;
    int sum=getSum(arr,size);
    cout<<"sum is "<<sum;
}


