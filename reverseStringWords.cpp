#include<iostream>
#include<string>
using namespace std; //INCOMLETE
  // Function to reverse the order of words in the character array s
void reverseWords(char s[]) {
    int length = strlen(s);
    string result;
    int wordStart = 0; // Initialize to the start of the character array

    // Traverse the character array from start to end
    for (int i = 0; i <= length; i++) {
        // Check if we have reached the end of a word or the end of the array
        if (s[i] == ' ' || s[i] == '\0') {
            // Append the word (from wordStart to i-1) to the result string
            for (int j = wordStart; j < i; j++) {
                result.push_back(s[j]);
            }
            // If we haven't reached the end of the array, add a space after the word
            if (s[i] != '\0') {
                result.push_back(' ');
            }

            // Update wordStart to the start of the next word
            wordStart = i + 1;
        }
    }

    // Copy the reversed words from the result string back to the original character array
    // strcpy(s, result.c_str());
}

int main() {
    char sentence[100];
    cout << "Enter a sentence: ";
    cin.getline(sentence, sizeof(sentence));

    reverseWords(sentence);

    cout << "Reversed words: " << sentence << endl;
    return 0;
}
