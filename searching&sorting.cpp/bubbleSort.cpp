#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){   //for round 1 to (n-1)
    for(int i=1;i<n;i++){
        bool swapped =false;
        for(int j=0;j<n-i ;j++){   // (j<n) means j upto (n-1) times, hence (j<n-i)=J-1-i
            if(arr[j]>arr[j+1]){  //traveling inside array elements, process ele till (n-i)th index 
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false){  //for optimised soln, all element sort come outof loop
            break; // already sorted
        }
    }
}

int main(){
    int arr[9]={9,45,3,32,1,42,23,4,14};
    bubbleSort(arr,9);
    cout<<"sorted array: ";
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}