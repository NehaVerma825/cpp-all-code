#include<iostream>
using namespace std;


 void update(int arr[],int n){
    cout<<"inside the function"<<endl;
     // updating array's first element
     arr[0]=120;
    //printing array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
    cout<<"going back tom main function";   

}
int main(){
    /*
    int arr[3]={1,2,3};
    update(arr,3);
    //printing the array
    cout<<"printing in main function"<< endl;
    for (int i=0;i<3;i++){
        cout<<arr[i]<<" "<<endl;
    }
    */

   int num[15];
   cout<<num[14]<<endl;
   cout<<"value at 8th index "<<num[8]<<endl;

   int sec[10]={1,4};
   int n= 10;
   cout<<"array is "<<endl;
   for(int i=0;i<n;i++){
    cout<<sec[i];
   }













    return 0;
}
