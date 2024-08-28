#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;


    //creating 2 new array -after splitting main array in sub parts
    int *first= new int[len1];  //dynamic array
    int *second = new int[len2];

    //copy values of main array in arr first upto  the index len1
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    //copy values of main array in arr second upto  the index len2 staring from mid+1
     mainArrayIndex=mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
       }

     //merge 2 sorted array
     int index1=0;
     int index2=0;
     mainArrayIndex=s;

     while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
             arr[mainArrayIndex++]=first[index1++];
        }
        else{
             arr[mainArrayIndex++]=second[index2++];
        }
     }


    while(index1 < len1){  //case remaining elements in first It continues until all elements 
        arr[mainArrayIndex++]=first[index1++]; //from first have been copied to arr
    }
    while(index2 < len2){// similarlly for second
        arr[mainArrayIndex++]=second[index2++];
    }

    // Deallocate memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2; 

     //RC 
    //left part merge krna h
    mergeSort(arr,s,mid); //this going to neary O(logn) time comp

    //right part merge krna h
    mergeSort(arr,mid+1,e); //this will also going to neary O(logn) time comp


    //merge
    merge(arr,s,e); //this  going to neary O(n) for wrost case traverse total array size
    //overall complexity O(nlog(n))

}
int main(){
    int arr[5]={26,4,3,2,45};
    int n=5;

    mergeSort(arr, 0 ,n-1);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}