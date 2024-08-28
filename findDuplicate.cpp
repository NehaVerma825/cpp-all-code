#include<iostream>
using namespace std;
int findDuplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size; i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;

}
   return ans;
}

int main(){
   int arr[8]={2,5,6,5,4,3,7,8};
   cout<<findDuplicate(arr,8);
   return 0;
} 