/*  
Question : Check Pangram String of a given sentence

*/

#include<iostream>
#include<vector>
#include <cctype>
using namespace std;
int checkPalindromeString(string &sentence){
  // create a vector that is fiiled with 0 initially
  vector<bool> alpha(26,0);

  // Iterate over the string
  for(int i=0; i<sentence.size(); i++){
    char ch = sentence[i];
    
    // made the character index 1, if that character present into the string
    if(isalpha(ch))
    alpha[tolower(ch)-'a'] = 1;

    // Or
    // alpha[sentence[i]-'a'] = 1;
  }

  // Now, Iterate over the vector to check if any of the character is not present | all character are present
  for(int i=0; i<26; i++){
    if(alpha[i] == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  // string
  string sentence;
  cout << "Enter a string : ";
  getline(cin, sentence);

  // function call to check the palindromic string
  int result = checkPalindromeString(sentence);
  cout << "Resutl = "<< result << endl;


  return 0;
}


/*  

TC:  O(N)
SC: O(1)


Output:-
----------
Enter a string : a quick brown fox jumps over the lazy dog
Resutl = 1

*/