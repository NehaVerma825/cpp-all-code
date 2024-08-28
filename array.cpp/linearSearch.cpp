#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for( int i=0; i<size;i++){
        if(arr[i]== key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10]={10,-3,34,1,89,4,3,45,67,10};
    cout<<"enter the element to seach for"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present"<< endl;
    }
    else
        cout<<"key is not present";






return 0;
}