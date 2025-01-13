#include <iostream>
using namespace std;
int main(){
    // FIND THE VALUSE
    char value;
    cout<<"enter the value: ";
    cin>>value;
    if(value>64 && value<91){
        cout<<"this is upper case";
    }
    else if(value>96 && value<123){
        cout<<"this is lower case";

    }
    else if(value > 47 && value <58){
        cout<<"this is numeric ";
    }
    else
        cout<<"not valid input provided";
    

   //SUM UPTO N NUMBERS
   /*int n,i =2;
   int sum=0;
    cout<< "enter the number: ";
    cin>>n;
    while(i <= n){
        sum= sum+i;

        i=i +2;
    }
    cout<<sum;
    */

   // PATTERNS
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;

        }
        cout<<"\n";;
        i=i+1;
    */


    // PATTERN 2

    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;   // for decreasing sequance of sqares
            j=j+1;

        }
        cout<<"\n";
        i=i+1;
    }*/


    // PATTERN 3

   /* int n;
    cin>>n;
    int i=1;
    int count =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count <<" " ;   // for normal counting printing
            count =count+1;
            j=j+1;

        }
        cout<<"\n";
        i=i+1;
    }*/

    // PATTERN 4
   /* int n;
    cin>>n;
    int row=1;
  
    while(row<=n){
        int col=1;
        while(col<=row){
             cout<<"*"<<" ";   // for  triangular sequance
       col=col+1;

        }
        cout<<"\n";
        row =row+1;
    }*/
//PATTERN 5
     /*   int n;
    cin>>n;
    int row=1;
  
    while(row<=n){
        int col=1;
        while(col<=row){
             cout<<row<<" ";   // for  triangular sequance
       col=col+1;

        }
        cout<<"\n";
        row =row+1;
    } */

    //PATTERN 6
    /* int n;
    cin>>n;
    int row=1;
    int count =1;
  
    while(row<=n){
        int col=1;
        while(col<=row){
             cout<<count<<" ";   // for  triangular sequance
             count=count+1;
       col=col+1;

        }
        cout<<"\n";
        row =row+1;
    }*/
    //PATTERN 7
   /* int n;
    cin>> n;
    int row=1;
    int value=1;

    while( row<=n){
        int col=1;
        value= row;
        while(col<=row){
            cout<<value;
            value =value+1;
            col=col+1;

        }
        cout<<"\n";
        row=row+1;


    }*/
// OTHER METHOD FOR PATTERN 7 WITHOUT USING (int value=1;)
    /*int n;
    cin>> n;
    int row=1;
    

    while( row<=n){
        int col=1;
       
        while(col<=row){
            cout<<row+ col-1;
          
            col=col+1;

        }
        cout<<"\n";
        row=row+1;
    } */
// FOR REVERSE ORDER OF ABOVE PATTERN

  /*  int n;
    cin>> n;
    int row=1;
    

    while( row<=n){
        int col=1;
       
        while(col<=row){
            cout<<row- col+1;
          
            col=col+1;

        }
        cout<<"\n";
        row=row+1;
    }*/


// FOR ALPHABETICAL SEQUANCE 1
/*int n;
    cin>> n;
    int row=1;
    

    while( row<=n){
        int col=1;
       
        while(col<=n){
            char fml='A' +row-1;
            cout<<fml;
          
            col=col+1;

        }
        cout<<"\n";
        row=row+1;
    } */


    // FOR ALPHABETICAL SEQUANCE 2

  /*  int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
             char fml2='A'+col -1;
             cout<<fml2;
             col=col+1;

        }
        cout<< endl;
        row =row +1;
       
    }*/


    // FOR ALPHABETICAL SEQUANCE 3

    /*int n;
    cin>>n;
    int row=1;
    char fml3='A';
    while(row<=n){
        int col=1;
        while(col<=n){
             
             cout<<fml3;
             fml3=fml3+1;
             col=col+1;

        }
        cout<< endl;
        row =row +1;
    }*/   


    // FOR ALPHABETICAL SEQUANCE 4
   /* int n;
    cin>>n;
    int row=1;
    
    while(row<=n){
      int col=1;
      while(col<=n){
      char ch= 'A'+row +col -2;
      cout<<ch;
      col=col+1;

    }
    cout<< endl;
    row = row +1;
}*/

//FOR OPPOSITE ALPPHABET RIGHT TRIANGLE
/*int n;
cin>>n;
int row=1;

while(row<=n){
    int col=1;
    while(col<=row){
        char count ='A'+row-col;
        cout<<count;
        col=col+1;

    }
    cout<<endl;
    row=row+1;
}*/

//FOR LEFT TRIANGLE with SPACE

/*int n;
cin>>n;
int row=1;
while(row<=n){
    // for printting space
    int space = n-row;
    while(space){
        cout<< " ";
        space=space -1;
    
    }
    // for printting *
    int col=1;
    while(col<=row){
        cout<<"*";
        col=col+1;

    }
    cout<< endl;
    row =row+1;

}*/


/*int n;
cin>>n;
int row=1;
while(row<=n){
     int col=1;
       int cross=n-row+1;
     while(cross){
       
       
        cout<<"*" ;
        cross=cross-1;

        col=col+1;
     } 
     cout<<endl;
     row=row +1;
}



//for PYARAMIDAL SEQUENCE
   int i=1;
   while(i<=n){
   
     int space=n-i;
     while(space){
     cout<<" ";
     space=space-1;
     }

    int j=1;
     while(j<=i){
      cout<<j;
      j=j+1;

   }

   int start=i-1;
   while(start){
    cout<<start;
    start=start-1;
   }
   cout<<endl;
   i=i+1;
   }  */


   



     
  
        
    return 0;
}