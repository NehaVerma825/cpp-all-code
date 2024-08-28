#include<iostream>
using namespace std;
    int findArrayIntersection(int arr1,int arr2,int n,int m){
        int i=0,j=0;
        int ans=0;
        while(i<n && j<m){
            if(arr1[i]== arr2[j]){
                cout<<arr1[i];
                i++,j++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else
            j++;
        }
    }

    int main(){
    int arr1[7]={2,3,3,4,5,5,6};
    int arr2[6]={1,2,3,4,4,5};
    cout<<findArrayIntersection( int arr1,int arr2,int 7,int 6);


    return 0;

    }
