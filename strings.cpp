#include<iostream>
#include<string>
using namespace std;

char convertUpperToLowerCase(char ch){  //for not case sensitive
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

int getLength(char name[]){   // for calculating string lenth
    int count =0;
    for(int i=0;name[i]!='\0';i++){   //('\0') is for null character
        count ++;
    }
    return count;

}

bool checkPalindrome(char a[],int n){
    int s=0,e=n-1;
    while(s<=e){
        if(convertUpperToLowerCase(a[s])!=convertUpperToLowerCase(a[e])){
            return 0;
        }
        else{
            s++,e--;
        }
    }
    return 1;
}

void reverseString(char name[],int n){  // for reversing the strings
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);  // short method 
        // swap(name[s],name[e]);
        // s++;
        // e--;
    }
}

char getMaxOccCharacter(string s){
    int arr[26]={0};

    //create an array of count of an array
    for(int i=0; i<s.length();i++){  //time complexity O(n)
        char ch=s[i];
     //for lower case
     int number=0;
     if(ch>='a'&& ch <='z'){
        number=ch-'a';
     }
     else {//for upper case
       number=ch-'A';
    }
    arr[number]++;
    }
    int maxi=-1;  //find max occu character
    int ans=0;
    for(int i=0;i<26; i++){  //time complexity O(1) constant
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
            
}
// replace space in string with some other char
string replaceSpaces(string &str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('y');
            temp.push_back('n');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;

}

// Remove all occurance of a substring
string removeOccurance(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    // char name[20];
    // cout<<"enter your name: ";
    // cin>>name;
    // cout<<"your name is "<<name<<endl;
    // int len=getLength(name);
    // cout<<"lenth of string : "<<len<<endl;

    // reverseString(name,len);
    // cout<<"Reverse of your name is ";
    // cout<<name<<endl;


    // cout<<"palindrome or not: "<<checkPalindrome(name,len)<<endl;

    // cout<<"CHARACTER IS: "<<convertUpperToLowerCase('b')<<endl;
    // cout<<"CHARACTER IS: "<<convertUpperToLowerCase('N')<<endl;
    
    //   string s;
    //   cin>>s;
    //   cout<<getMaxOccCharacter(s)<<endl;


    // string str;
    // cout << "Enter a string with spaces: ";
    // getline(cin, str); // Use getline to read the entire line with spaces
    // cout << replaceSpaces(str);



    string s,part;
    cout<<"enter the string: ";
    cin>>s;
    cout<<"enter the removing part: ";
    cin>>part;
    cout<<removeOccurance(s,part);


    return 0;
}