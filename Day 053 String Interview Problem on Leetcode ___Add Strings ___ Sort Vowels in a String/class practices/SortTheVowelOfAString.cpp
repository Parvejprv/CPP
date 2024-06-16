/*  
Questtion:  Sort the vowel of a string, here string would consist of small and lower case letter.

Note:  we have to implement the logic based on the ascii value.
*/



#include<iostream>
#include<vector>
using namespace std;

string sortTheVowel(string &s){
  vector<int> lower (26,0);
  vector<int> upper (26,0);

  // iterate over the string
  for(int i=0; i<s.size(); i++){
    // lower vowel - a, e, i, o, u
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
      lower[s[i] - 'a']++;
      s[i] = '#';
    } 
    //upper vowel - A, E, I, O, U
    else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
      upper[s[i] - 'A']++;
      s[i] =  '#';
    }
  }


  string vowel;
  // upper
  for(int i=0; i<26; i++){
    char ch = 'A' + i;    // it would get the character in upper case letter
    while(upper[i]){
      vowel += ch;
      upper[i]--;
    }
  }

  // lower
  for(int i=0; i<26; i++){
    char ch = 'a' + i;  // it would get the character in lower case letter
    while(lower[i]){
      vowel += ch;
      lower[i]--;
    }
  }



  // Now we have the vowel in a string and we have to store the vowel at the position of '#' symbol that we assign earlier 

  // take two pointer
  int first = 0, second = 0;    // second point kar rha vowel ki index ko

  while(second < vowel.size()){
    
    if(s[first] == '#'){
      s[first] = vowel[second];
      second++;
    }
    first++;
  }
  return s;
}

int main() {
  string str;
  cout << "Enter the string: ";
  cin >> str;

  string result = sortTheVowel(str);
  cout << "Result: " << result << endl;

  return 0;
}








/*

Time Complexity: O(N) of 4 times that means => O(N)
SC: O(N)


Output:-
----------
Enter the string: leEtcOde
Result: lEOtcede

*/
