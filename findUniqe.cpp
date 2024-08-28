#include<iostream>
using namespace std;

int findUniqe(int arr[],int size){
    int ans=0;
    for(int i=0; i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
void printArray( int arr[],int size){    // this function is for printing the array
    for(int i=0;i<size;i++){              // this step is additional ,can be ignore
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
}

int main(){
    int arr[7]={4,6,8,9,4,8,9};
    printArray(arr,7);
    cout<<findUniqe(arr,7);    // direct method to print 
   /* int value=findUniqe(arr,7);     // printing ans by storing it in another variable
    cout<< "unique value: "<<value<< endl;*/
    


    return 0;

}