#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*int num =5;
    cout<< num<<endl;
    //address of operator shown by-"&"
    cout<<"address of num is: "<<&num<<endl;

    int *ptr = &num;
    cout<<"address is "<<ptr<<endl; // int ptr will give address of num
    cout<<"value is "<<*ptr<<endl; //  ('*' means value at address of ptr) 

    double d= 8.5;
    double *p2=&d;
    cout<<"address is "<<p2<<endl; // int ptr will give address of p2
    cout<<"value is "<<*p2<<endl; //  ('*' means value at address of p2) 

    cout<<"size of integer: "<<sizeof(num)<<endl;
    cout<<"size of pointer: "<<sizeof(ptr)<<endl;
    cout<<"size of pointer: "<<sizeof(p2)<<endl;  */

//pointer to int is created, and pointing to some garbage address
    // int *p=0;
    // cout<<*p<<endl;

   /* int i=5;
    int *p=&i;//always do it 
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q=0;
    q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;  */

//     int num=5;
//     int a=num;
//     a++;
//     cout<<a<<endl;
//     cout<<num<<endl;

//     int *p=&num;
//     cout<<"before "<<num<<endl;

//     (*p)++;
//     cout<<"after "<<num<<endl;

// //copying a pointer
//     int *q=p;
//     cout<<p<<"-"<<q<<endl;
//     cout<<*p<<"-"<<*q<<endl;

//     //important concept
//     int i=6;
//     int *t=&i;
//     //cout<<*t++; //but for convenience it should be (*t)++
//     *t=*t+1;
//     cout<<*t;
//     cout<<t<<endl;
//     t=t+1;
//     cout<<t<<endl;
int num =5;
int a=num;
cout<<"a before: "<<num<< endl;
a++;
cout<<"a after: "<<num<< endl;
int *p=&num;
cout<<" before: "<<num<< endl;
(*p)++;
cout<<" after: "<<num<< endl;
int *q=p;  //one pointer copied to another pointer
cout<<p<<"-"<<q<<endl;
(*q)++;
cout<<*p<<"-"<<*q<<endl;


int i=3;
int *t=&i;
cout<< (*t)++<<endl;
*t=*t+1;
cout<<*t<<endl;
cout<<"before; "<<t<<endl;
t=t+1;
cout<<"after; "<<t<<endl;
int *n=NULL;
cout<<n;




/*int *a=0;
int first=110;
//*a=first; // this will leads to segmentation foult, occurs when any program tries to 
//access a part of memory that it is not allowed to access.
a = &first;  // Now `a` points to the address of `first`
cout << *a << endl;  // Dereference `a` to print the value of `first`
*/

int arr[]={11,21,31.41};
int *ptr=arr++; //arr=arr+1 ->not possible, i.e; we are trying to update in sybmol table
cout<<*ptr<<endl; //bt ptr=ptr +1 is possible


char arr[]={"abcde"};
char *p=&arr[0];
cout<<p<<endl;  //in char array instead of address it prints whole array
//i.e;  abcde 







    
    





    


 


    return 0;
}