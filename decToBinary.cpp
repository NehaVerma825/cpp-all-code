    #include<iostream>
    #include<math.h>
    #include<climits>
    using namespace std;

    int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1; 
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}
int main(){
    

    
    //DECIMAL TO BINARY
   /* int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n != 0){
        int bit =n & 1;
        ans=(bit* pow(10, i))+ans;
        n=n>>1;
        i++;
    }
    cout<< "ans is  "<< ans<< endl; */

// Dec to Binary for negative dec value

   /* int n;
    cout<<"enter the value: ";
    cin >> n;

    if(n<0){
        // if number is negative
        n = n*(-1);
        int ans = decimalToBinary(n);
    // Find 2's compliment of the number
    // 1's comp
    int newAns = (~ans);
    // 2's comp
    newAns = newAns+1;
    cout << newAns << endl;

    } else {
        // if number is positive 
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }*/


   //BINARY TO DECIMAL
  /* int n;
   cout<<"enter the no.: ";
   cin>>n;
   int i=0, ans=0;
   while(n != 0){
    int digit=n%10;
    if(digit==1){
        ans= ans+pow(2,i);
    }
    n=n/10;
    i++;
   }
   cout<<ans<<endl;*/



   //REVERSING THE DIGIT and ON GOING OUT OF RANGE OUTPUT ZERO

   /*int n; 
   cout<<"enter the no.: ";
   cin>>n;
   int ans=0;
   while(n != 0){
    int digit=n%10;
    if((ans> INT_MAX) || (ans< INT_MIN)){
        cout<< "0";
    }
    ans=ans*10 + digit;
    n=n/10;
   }
   cout<< ans;  
   */
  


  ///Printing complement of no in binary representation

int m,n;      // doubt ques:yha hum dec to binary convert nhi kr rhe fir bhi ans           // 
  cin>>n;       //lane k liye binary me kiu operate kr rhe h
   m=n;         // Creates a copy of n in the variable m.
  int mask =0;
  if(n==0){
     cout<< "1";   //for edge case (~0)=1
  }
  while(m!=0){
    mask=(mask<<1)|1;   // last k digits ko save krne k liye jha tk last digit h utne 111 chahiye
    m=m>>1;             // for adding once in every loop for mask
  }
    int ans=(~n) & mask;
    cout<< ans;   



    // Is no can be represent in power of 2

    /*int n;
    cin>>n;
    bool isPower=false;
    for (int i=0;i<=30; i++){
        int ans =pow(2,i);
        if (ans==n){
        // cout<<"true";
        isPower=true;
        break;
        
        }     
    }
    // cout<<"false";
    if(isPower)
    cout<<"true"<<endl;
    else 
    cout<<"false"; */
     
    


  






    return 0;
    }

   
