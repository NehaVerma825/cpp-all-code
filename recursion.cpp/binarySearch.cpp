#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[],int s,int e,int key){
    print(arr,s,e);
    //base case
    if(s>e){ //element not found
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"value of mid is:- "<<mid<<endl;

    if(arr[mid]==key){
       return true;
     }

     //recursive call
     if(arr[mid]<key){
        return binarySearch(arr,mid+1 ,e,key);
     }
     else{
        return binarySearch(arr,s,mid-1,key);
     }

}

int main(){
    int arr[8]={2,3,5,6,7,23,34,43};
    int size=8;
    int key=43;
    cout<<"present or not:- "<< binarySearch(arr,0,8,43)<<endl;

}