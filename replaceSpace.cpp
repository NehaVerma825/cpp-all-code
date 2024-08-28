#include<iostream>
using namespace std;

string replaceSpace(string &str){
    string temp=" ";
    for(int i=0;i<=str.length();i++){
        if(str[i]==''){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

/*  //inplace solution for O(1) time complexity 

void replaceSpaceInPlace(string &str) {
    // First pass: count the number of spaces
    int spaceCount = 0;
    for (char c : str) {
        if (c == ' ') {
            spaceCount++;
        }
    }

    // Calculate new length
    int originalLength = str.length();
    int newLength = originalLength + 2 * spaceCount; // Each space adds two more characters (@ and 4)

    // Resize the string to accommodate the new characters
    str.resize(newLength);

    // Second pass: Replace spaces with @40 from the end
    int j = newLength - 1;
    for (int i = originalLength - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
    }
}  */


int main(){
    string str;
    string result = replaceSpace(str); // Pass the string to the function
    cout << result << endl; // Output the result
}