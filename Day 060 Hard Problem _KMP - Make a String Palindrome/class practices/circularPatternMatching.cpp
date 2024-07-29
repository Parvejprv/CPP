/*  
Question: Circular Pattern Matching
-------------------------------------
Write a Program to match the string in the circular form, if it is present return true, otherwise not present return false.

*/



#include<iostream>
#include<vector>
using namespace std;

vector<int> findLps(string &s){
  int n = s.size();   // size of str
  // Longest prefix suffix
  vector<int> lps(n, 0);
  int pre = 0, suf = 1;

  while(suf < n){
    // Matched
    if(s[pre] == s[suf]){
      lps[suf] = pre + 1;
      pre++, suf++;
    }
    // Not Matched
    else {
      // pre at 0 index
      if(pre == 0){
        // lps[suf] = 0;
        suf++;
      }
      // pre at not 0
      else {
        pre = lps[pre - 1];
      }
    }
  }

  // return the lps vector itself
  return lps;
}

bool circularPatternMatching(string &str, string &str2){
  // two time of string str
  string updString = str + str;
  int n = updString.length();

  int m = str2.length();

  int first = 0, second = 0;
  vector<int> lps = findLps(str2);    // findLps

  while(first < n && second < m){
    // if found equals
    if(str2[second] == updString[first]){
      second++;
      first++;
    }
    // Not found equals
    else {
      // second string points at 0 index
      if (second == 0 && second < m)
      {
        first++;
      } else {
        second = lps[second-1];
      }
    }
  }

  // if traverse second successfully,
  if(second == m){
    return true;
  }

  return false;
}

int main(){
  string str, substr;
  cout << "enter a string str : ";
  cin >> str;
  cout << "enter the substr: ";
  cin >> substr;


  // function  call 
  bool result = circularPatternMatching(str, substr);
  cout << "Circular Pattern Matching (true/false): " << result << endl;
  return 0;
}





/*  
Output:-
-----------
enter a string str : cdeabroab
enter the substr: abcdeg
Circular Pattern Matching (true/false): 0

enter a string str : cdeabroab
enter the substr: abcde
Circular Pattern Matching (true/false): 1


enter a string str : cdeabroab
enter the substr: abcde
Circular Pattern Matching (true/false): 1
*/