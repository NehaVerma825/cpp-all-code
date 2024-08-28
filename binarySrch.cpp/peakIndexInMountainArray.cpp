#include<iostream>
using namespace std;

int peakindexInMountainArray(int arr[],int n){
    int n = arr.size();  // Initialize n to the size of the array
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[7]={2,5,0,1,3,7,89};
    cout<<"the peak index in mountain array is "<<peakindexInMountainArray(arr,7);

}