#include<iostream>
using namespace std;
void print(int arr[],int size){
    cout<<"size of array is: "<<size <<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

bool linearSearch(int arr[],int size,int key){
    print(arr,size);  //for printing each step
    //base case
    if(size==0){
        return 0;
    }

    //processing
    if(arr[0]==key){
        return true;
    }
    else{
    bool remainingPart=linearSearch(arr+1,size-1,key);
    return remainingPart;
    }
}


int main(){
    int arr[6]={3,5,6,8,7,2};
    int size=6;
    int key=9;
    bool ans=linearSearch(arr,size,key);
    if(ans){
        cout<< "presnet"<<endl;
    }
    else
       cout<< "not present"<<endl;


    return 0;
}