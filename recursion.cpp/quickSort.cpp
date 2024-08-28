#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];  //taking starting index as pivot
    int count=0;  //no of element less than pivot element 
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }   
    }

    //place pivote at right position
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    //left and right part sambhal lete h
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(pivot>arr[i]){
            i++;
        }
        while(pivot<arr[j]){
            j--;
        }
        if(pivotIndex>i && pivotIndex<j){ //again checking for not getting out of array   
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition krenge around index p
    int p= partition(arr,s,e);

    //left part sort kro 
    quickSort(arr,s,p-1);

    //right part sort kro
    quickSort(arr,p+1,e);

    
}

int main(){
    int arr[5]={4,2,5,1,6};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}