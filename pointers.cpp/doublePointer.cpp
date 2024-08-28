#include<iostream>
using namespace std;
void update(int **p2){
    // p2=p2+1; //kuch change hoga-> No
    //*p2=*p2+1; //kuch change hoga-> YES
    //*p2 means value present at address pointed by p2 means address of i, will change 
    **p2=**p2+1; //kuch change hoga-> YES value of i will change 
    //** means goes 2 level inside location p2
}
int main(){
    int i= 5;
    int*p=&i;
    int**p2 =&p;

    /*
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout <<&i<<endl;
    cout<<p<<endl;
    cout<< *p2<<endl;

    cout <<&p<<endl;  //address of p
    cout<<p2;  // address of p2 which is indicating address of p
     */
     cout <<endl;
     cout<<"before "<<i<<endl;
     cout<<"before "<<p<<endl;
     cout<<"before "<<p2<<endl;
     update(p2);
     cout<< "after "<<i<<endl;
     cout<< "after "<<p<<endl;  //p update in main function 
     cout<< "after "<<p2<<endl;


    return 0;
}
