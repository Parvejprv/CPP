/*  
Question : Make a string Palindrome.
---------------------------------------
Write a CPP program to make a string as Palidrome.
Hint: We can use the KMP algorithm


Note:-
---------
- We can also think the logic using the two pointer approach, but it is not a very good to go solution for us.

  - here having to pointer S and E check if the S==E, then only increment these pointer otherwise, add the character at the starting of the given string.
  
  1). ROORSP
  PS - ROORSP      hence ans = 2
  

  lets take another example,
  2). aaaotcaakr
  rkcto - aaaotcaakr     (that is not correct)


  Now, Let think logically and effectively and  check if the substring (leaving a character from last) is a pallindrome
  3). Given string = aaaotcaakr

  - aaaotcaakr    ? is it a palindrome (No), then add r to the starting string
    => r - aaaotcaakr

  - now, check for aaaotcaak  ? is it a palindrome (No), then add k to the starting string
    => rk - aaaotcaakr

  - now, check for aaaotcaa ? is it a palindrome (No), then add  a to the starting string
    => rka - aaaotcaakr

  - now, check for aaaotca ? is it a palindrome (No), then add  a to the starting string
    => rkaa - aaaotcaakr

  - now, check for aaaotc ? is it a palindrome (No), then add c to the starting string
    => rkaac - aaaotcaakr

  - now, check for aaaot ? is it a palindrome (No), then add t to the starting string
    => rkaact - aaaotcaakr

  - now, check for aaao ? is it a palindrome (No), then add o to the starting string
    => rkaacto - aaaotcaakr

  - now, check for aaa ? is it a palindrome (Yes), then no need to further check any.
    => rkaacto - aaaotcaakr


  And, as per this got the final palindrome string, that means here we need to find Longest prefix Palindrome (LPP).
  Here, Time Complexity: O(N^2)
        Space Complexity: O(1)




  4). a - aacecaaa        ans = 1


  5). a - aaaa$aaaa        ans = 0


  Steps
  1. Take a string and reverse it.
  2. Compare the original string with the reversed string.
  3. str + '$'
  4. str += rev(str)
  5. LPS(str)
  6. Original size of str - LPS[str.size()-1]



Time Complexity: O(N^2)
Space complexity: O(1)

*/



/* 
Solution 1. return only those character length to be added at the starting of the string. 

Time Complexity: O(n)
Space complexity: O(1)

*/

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int makeStringPalindrome(string &str){
  int size = str.size();   

  // reverse the given string
  string rev = str;
  reverse(rev.begin(), rev.end());
  // cout << "Reverse String : " << rev << endl;
  str += '$';   // Seperator
  str += rev;   // Reverse
  cout << str << endl;

  // Longest prefix suffix
  int n = str.size();
  vector<int>lps (n, 0);
  // print the lps vector
  for (int i = 0; i < n; i++)
  {
    cout << lps[i] << " ";
  }
  

  int pre = 0, suf  = 1;
  while(suf < n){
    // Matched
    if(str[pre] == str[suf]){
      lps[suf] = pre + 1;
      pre++, suf++;
    }
    // Not Matched
    else {
      // if pre at 0 index
      if(pre == 0){
        // lps[suf] = 0;
        suf++;
      }
      // else pre at not at 0 index
      else {
        pre = lps[pre-1];
      }
    }
  }

  cout << endl;
  // Display the lps
  for (int i = 0; i < n; i++)
  {
    cout << lps[i] << " ";
  }

  // Answer dena hai
  return (size - lps[n-1]);
}

int main() {
  string str;
  cout << "Enter the string str: " ;
  cin >> str;

  // function call
  int resultMakeStrPal = makeStringPalindrome(str);
  cout << "\nResult : " << resultMakeStrPal << endl;

  return 0;
}
*/


/*  
Output:-
---------
Enter the string str: abc
abc$cba
0 0 0 0 0 0 0 0 0 0 0 0 0 1
Result : 2

*/
















/* Soution:- 2 Add minimum character to the starting of the string, and also give their count and charater to obtain the palindrome string. */


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int, string> makeStringPalindrome(string & str){
  int size = str.size();    // initial string size

  // Reverse string, and copy the initial string value
  string rev = str;
  reverse(rev.begin(), rev.end());

  // Add seperator and string that reversed
  str = str + '$' + rev;

  // Longest prefix suffix
  int n = str.size();
  vector<int> lps(n, 0);

  // print the lps before calculating the longest prefix suffix
  cout << "Initial lps just before calculating LPS: " << endl;
  for(int x : lps){
    cout << x <<  " ";
  }

  int pre = 0, suf = 1;

  while (suf < n)
  {
    // Matched
    if(str[pre] == str[suf]){
      lps[suf] = pre + 1;
      pre++, suf++;
    }
    // Not Matched
    else {
      // if pre at 0 index
      if (pre == 0)
      {
        lps[suf] = 0;
        suf++;
      }
      // if pre not at 0 index
      else {
        pre = lps[pre - 1];
      }
    }
  }
  
  cout << endl;
  cout << "Longest prefix suffix after LPS get calculated: " << endl;
  for(int y :  lps) {
    cout << y << " ";
  }



  // Number of characters to be added
  int numCharsToAdd = size - lps[n-1];

  // Characters to be added to the start of the string to make it palindrome
  string charsToAdd = rev.substr(0, numCharsToAdd);

  return {numCharsToAdd, charsToAdd};
}

int main() {
  string str;
  cout << "Enter string str for that you wanna find the Palindrome: " << endl;
  cin >> str;

  // function call
  pair<int, string> result = makeStringPalindrome(str);
  cout << "\nNumbers of characters to be added : " << result.first << endl;
  cout << "Characters to be added : " << result.second << endl;


  return 0;
}


/*  
Time complexity: O(n2)
Auxiliary Space: O(1)
*/
/*  
Output:-
----------
Enter string str: 
BABABAA
Numbers of characters to be added : 2
Characters to be added : AA


Enter string str: 
abc
Numbers of characters to be added : 2
Characters to be added : cb


Enter string str for that you wanna find the Palindrome: 
aaaotcaakrc
Initial lps just before calculating LPS:
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Longest prefix suffix after LPS get calculated:
0 1 2 0 0 0 1 2 0 0 0 0 0 1 2 0 0 0 1 2 3 
Numbers of characters to be added : 7
Characters to be added : rkaacto



Enter string str for that you wanna find the Palindrome: 
aaaa
Initial lps just before calculating LPS:
0 0 0 0 0 0 0 0 0
Longest prefix suffix after LPS get calculated:
0 1 2 3 0 1 2 3 4
Numbers of characters to be added : 0
Characters to be added : 
*/
