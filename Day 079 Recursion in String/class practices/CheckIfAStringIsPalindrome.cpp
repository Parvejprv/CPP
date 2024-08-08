/*  
Topic:
=============
Recursion in string

Question Check if a string is palindrome or not using recursion.

*/


#include<iostream>
using namespace std;
bool ifPalindrome(string str, int start, int end){
  // Base case
  if (start >= end){
    return 1;
  }
  
  // If characters at start and end are not same - Not Matched
  if(str[start] != str[end])
    return 0;
  
  // Matched
  return ifPalindrome(str, start+1, end-1);

}
int main() {

  // string str = "naman";
  string str;
  cout << "Enter the string str: ";
  cin >> str;

  int start = 0, end = str.size()-1;

  cout << ifPalindrome(str, start, end);

  // if(ifPalindrome(str, start, end)){
  //   cout << "Given String is a Palindromic string.";
  // } else {
  //   cout << "Given String is not a Palindromic string.";
  // }
}



/*  
Output:-
---------
Enter the string str: Rohit
0

Enter the string str: naman
1


*/
