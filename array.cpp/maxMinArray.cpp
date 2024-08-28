#include<iostream>
using namespace std;

int getMax(int num[],int n){
    int max= INT32_MIN;
    // int maxi =INT32_MIN;
    for(int i=0; i<n;i++){
        // maxi=max(maxi,num[i]);
        if(num[i]>max){
            max=num[i];
        }
    }
    //returning max value
    return max;
}

int getMin(int num[],int n){
    int min= INT32_MAX;
    for(int i=0; i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    //returning max value
    return min;
}

int main(){
    int size;
    cout<<"enter the size: ";
    cin >>size;
    int num[100];
     
     //taking input an array
     for(int i=0;i<=size;i++){
        cin>> num[i];
     }

     cout<<"maximum value is"<<getMax(num,size)<< endl;
     cout<<"minimum value is"<<getMin(num,size)<< endl;






return 0;
}