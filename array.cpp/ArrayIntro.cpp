#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    //printing the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int first[10]={1,5,5};
    cout<<" printing the array: ";
    for(int i=0;i<10;i++){
        cout<< first[i]<< " ";
    }

// size of whole array
    int firstSize= sizeof(first)/sizeof(int);
    cout<<"size of first is "<< firstSize<<endl;
// printing char array
    char ch[10]={'a', 'e', 'r','d'};
    int n=10;
    cout<<ch[2]<<endl;
    cout<<"printing the array: ";
    for(int i=0; i<n;i++){
        cout<<ch[i]<<" ";
    }

    

}
