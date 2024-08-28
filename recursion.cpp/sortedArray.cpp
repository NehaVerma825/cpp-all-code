#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size == 0 || size == 1){
       return true;
    }
    //processing
    if(arr[0]>arr[1]){
        return false;
    }
    else{
       bool remainigPart = isSorted(arr+1,size-1);
       return remainigPart;
    }
}

int main(){
    int arr[5]={3,5,5,6,7};
    int size=5;
    int ans=isSorted(arr,5);
    if(ans){
      cout<<"array is sorted";
    }
    else
    cout<<"array is not sorted";

    return 0;
}
