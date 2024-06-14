/*  
Question : Check for longest palindrome string with the lower and upper case letter too.

Input:-
Output:-

*/

#include<iostream>
#include<vector>
using namespace std;
int longestPalindromeString(string &s){
  // create two vector that would store the presence of the character either in upper case or lowr case
  vector<int> lower (26,0);
  vector<int> upper (26,0);


  // frequency updated
  for(int i=0; i<s.size(); i++){
    if(s[i] >= 'a'){
      lower[s[i]-'a']++;
    } else {
      upper[s[i]-'A']++;
    }
  }

  int count = 0;
  bool odd = 0;
  for(int i=0; i<26; i++){
    // lower
    if(lower[i]%2 == 0) {
      count += lower[i];
    } else {
      count += lower[i]-1;
      odd = 1;
    }

    //upper
    if(upper[i]%2 == 0){
      count += upper[i];
    } else {
      count += upper[i] - 1;
      odd = 1;
    }
  }

  return (count+odd);
} 

int main() {
  string s;
  cout << "Enter a String (with lower & upper case letter) : ";
  cin >> s;

  // Function call to check the longest palindrome string 
  int result = longestPalindromeString(s);
  cout << "Result = " << result << endl;

  return 0;
}




/*  
Output:-
----------
Enter a String (with lower & upper case letter) : abccccdd
Result = 7


Enter a String (with lower & upper case letter) : abccccdd120
Result = 7

*/