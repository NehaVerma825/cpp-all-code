#include<iostream>
using namespace std;
int getPivot(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            s=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}

int binarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
        return -1;
}

int findPosition(int arr[],int n,int key){
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}

    

    


