#include<iostream>
using namespace std;

void reachHome(int source,int destination){
    cout<<"source "<<source << "    dest"<<destination<<endl;
    //base case
    if(source == destination){  
        cout<<"pahuch gya"<<endl;
        return;
    }

    //processing-> one step forward
    source++;

    //recursive call;
    reachHome(source,destination);
}
int main(){
    int destination =10;
    int source=1;
    reachHome(source,destination);


    return 0;
}