#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<< "printing the array "<< endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    cout<<"printing done "<< endl;
}

int main(){
    //declare
    int number[15];
    //accessing the array
    cout<<"value at index 14 is "<<number[14];
    //cout<<"value at index 20 is "<<number[20];

    int third[15]={2,5};
    printArray(third,15);
    int sizeThird = sizeof(third)/sizeof(int);
    cout<<"size of thirs is "<<sizeThird <<endl;


}