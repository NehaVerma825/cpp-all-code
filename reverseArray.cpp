#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
/*void printArray( int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
} */

//Swape alyernate element in an array

     // for printing the array
 void printArray(int arr[],int n){  
        for( int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
   /*int arr[6]={3,67,-7,8.2,0};
     int brr[5]={0,1,2,3,4};

     reverse(arr,6);
     reverse(brr,5);

     printArray(arr,6);
     printArray(brr,5);  */ 

 


     //Swape alternate element in an array

     int even[]={5,6,9,20,4,3,0,8};
     int odd[]={34,56,90,21,15};

     swapAlternate(even,8);
     printArray(even,8);
     cout<<endl;

     swapAlternate(odd,5);
     printArray(odd,5);
     cout<<endl;


cout<<"hello";





     return 0;
}