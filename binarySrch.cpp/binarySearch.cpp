#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key ){
    int start=0;
    int end=size-1;
    int mid =start+ (end-start)/2;   // for valuse within the integer limit

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        // for going to right part
        if(key>arr[mid]){
            start =mid+1;
        }
        //for going to left part
        else{
            end=mid-1;
        }
        mid=start+ (end-start)/2;

    }
    return -1;
}

int main(){
    int even[6]={3,5,9,13,23,45};
    int odd[5]={2,6,7,14,38};
    int evenIndex=binarySearch( even,6,45);
    cout<<"index of 45 is "<<evenIndex<<endl;

    int oddIndex=binarySearch( odd,5,6);
    cout<<"index of 6 is "<<oddIndex<<endl;


    return 0;
}