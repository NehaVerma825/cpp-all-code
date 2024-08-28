#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0; i<n-1;i++){    //loop for number of rounds
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            } 
        }
         swap(arr[minIndex],arr[i]); //swap the minimum element with arr[i]
         cout<<arr[minIndex]<<" ";   //other method trying 
        //  cout<<arr[minIndex];
        
    }
}
int main(){
    int arr[9]={9,45,3,32,1,42,23,4,14};
    selectionSort(arr,9);
    cout<<"sorted array: "<<endl;
    for(int i=0;i<9-1;i++){
        cout<<arr[i]<<" ";
    }
    //cout<<selectionSort(arr,9);   //METHOD 1 FAILED
    // cout<<arr[minIndex];  METHOD 2 FAILED
    return 0;
}