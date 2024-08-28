#include<iostream>
#include<vector>
using namespace std;
void print (int *p){
    cout<<*p<<endl; //*p for value and p for address    PASS BY VALUE
}

void update(int *p){
    /* p=p+1; //for updating address but add dont change
    cout<<"inside "<<p<<endl; */
    *p=*p+1;  // for updating value

}

int getSum(int arr[],int n){  // arr[]=*arr passing as a pointer
    cout<<"size is "<<sizeof(arr)<<endl;   //trying to print size of array (4*5=20)
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;  
}

int main(){
   /* int value =5;
    int *p=&value;
    //print(p);

    cout<<"before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;  // updating value in main function  */

    int arr[6]={1,2,3,4,5,8};
    cout<<"sum is "<<getSum(arr,5)<< endl;  //sum of whole array elemt  from index arr[0] to arr[6]
    //when we pass an array in a function ,it doesnt pass as array, it passes as pointer 
    // therfore in func getSum (int arr[])as same as (int *arr)

    cout<<"sum is "<<getSum( arr+3,3)<<endl;
    //for printing sum of arr from index 3 to size of n=3









}