#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*int arr[10]={2,8,5,87,35};
    //array's name shows first location (i.e, 0th index location) of that array
    cout<<"Address of first memeory block is "<<arr<<endl;
    cout<<"Address of first memeory block is "<<&arr[0]<<endl; //& for address at any position
    cout<<arr[0]<<endl;//value at index 0
    cout<<"4th -"<<*arr<<endl; //value at zeroth location in array
    cout<<"5th -"<<*arr+1<<endl; // 1 will add in pointer(2+1) value not add postion
    cout<<"6th -"<<*(arr +1)<<endl; //value at first location in array
    cout <<"7th-"<<arr[2]<<endl;
    cout <<"8th-"<<*(arr+2)<<endl; //both directing  value at same location 

    int i=3;
    cout<<arr[i]<<endl;  //  {arr[i]=*(arr +i) }has same meaning as of  {i[arr]=*(i+arr)}
    cout<<i[arr]<<endl;     

    int temp[10];
    cout<<sizeof(temp)<<endl;  //for array it prints size of entire array
    cout<< "1st" <<sizeof(*temp)<<endl;
    cout<< "2nd" <<sizeof(&temp)<<endl;  // size of first memory block
    int *ptr=&temp[0];
    cout<< sizeof(ptr)<<endl; //for pointer it prints size of one memory block
    cout<<sizeof(*ptr)<<endl;  

    int a[20]={ 2,4,7,56,8};
    cout<<&a[0]<<endl;  //diffrent ways to print loction
    cout<<&a<<endl;
    cout<<a<<endl;  


    //2nd diffrence btw array and pointer is & operator
    int a[20]={ 2,4,7,56,8};
    cout<<"->"<<&a[0]<<endl;  //address of block at zeroth index
    int *p=&a[0];
    cout<<"->"<<&p<<endl; // address of p (p is storing aadress of array a) block  */

    int arr[20];
   // arr=arr+1;  //ERROR

   int *ptr = &arr[0];
   cout<<ptr<<endl;   //printing add of arr[0]
   ptr =ptr +1;  //incrementing from one block
   cout<<ptr<<endl;   //printing address of arr[1] after inc 

   
    





    











    return 0;
}