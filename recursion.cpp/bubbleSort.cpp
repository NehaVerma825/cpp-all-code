#include<iostream>
using namespace std;
void sortArray(int *arr,int n){
    //base case-already sorted
    if(n==0 ||n==1){
        return ;
    }
    for (int i=1;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            
        }
    }
    //RC
    sortArray(arr,n-1);


}
int main(){
    int arr[5]={2,5,3,4,8};
    sortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

