#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){  // right me jane ke liye
            s=mid +1;
        }
        else if(key<arr[mid]){ // left me jane ke liye
            e=mid -1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){  // right me jane ke liye
            s=mid +1;
        }
        else if(key<arr[mid]){ // left me jane ke liye
            e=mid -1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int findTotalNumOfOccurance(int arr[],int n,int key){
    int ans=(lastOcc(arr,n,key)-firstOcc(arr,n,key))+1;   // this is correct
    return ans;
}

pair<int,int>fisrtAndLastPosition(int arr[],int n ,int key){
    pair<int,int>p;
    p.first=firstOcc(arr, n,key);
    p.second=lastOcc(arr,n,key);
    return p;
}

int main(){
    int even[8]={3,7,9,9,9,9,9,24};
    cout<<"first occurance of 9 is at index "<<firstOcc(even,8,9)<<endl;
    cout<<"last occurance of 9 is at index "<<lastOcc(even,8,9)<<endl;
    cout<<"the total no of occurance of 9 is "<< findTotalNumOfOccurance(even,8,9)<<endl;

    // cout<<"pair of first and last occurance is at indexes "<<fisrtAndLastPosition(even,8,9)<<endl;
    //pair<int, int> result = fisrtAndLastPosition(even, 8, 9);
    //cout << "pair of first and last occurrence is at indexes " << p.first << " and " << p.second << endl;

    
   
    

    return 0;
}