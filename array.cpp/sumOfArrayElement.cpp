#include<iostream>
using namespace std;


int add(int arr[], int n)
{
    int ans=0;
    for(int i = 0; i < n; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}


int main(){

    // int arr[5],sum=0;
    // cout<<"enter the elements: ";
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<5;i++){
    //     sum=sum+arr[i];
    // }
    // cout<<"sum of all element: "<<sum<<endl;

    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> arr[i] ; 
    }
    int sum = add(arr,n);
    
    cout<<sum;


    return 0;


}