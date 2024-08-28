#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){

for(int i=1;i<n;i++){ // for no of rounds=n-1
    int temp=arr[i];//storing value at index 1 in temp(jis new card ko phle vale se comp krna h) 
    int j=i-1;
    for( ;j>=0;j--){
        if(arr[j]>temp){ //shift to RHS
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=temp; //  going to next index
  }
}
int main(){
    int arr[9]={9,45,3,32,1,42,23,4,14};
    insertionSort(arr,9);
    cout<<"sorted array: ";
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}