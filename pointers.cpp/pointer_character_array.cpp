#include<iostream>
#include<vector>
using namespace std;

int main(){
    //cout function is diffrently implemented for int array and char array
    int arr[6]={1,2,3,4,5}; 
    char ch[6]="abcds";  
    cout<<arr<<endl;   //arr prints  first index address
    cout<<ch<<endl;   // ch prints intire content 
    char *c=&ch[0];
    cout<<c<<endl;    //prints entire string

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;






    return 0;
}