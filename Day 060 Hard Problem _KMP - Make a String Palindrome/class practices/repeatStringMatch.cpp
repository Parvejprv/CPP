/*  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxxxxxxx
Question: Repeat String matching

Input:-
-----------

str: "abcd"
substr: "cdabcdab"

How many times first string would be needed to repeat so that second string will be substring of "cdabcdab" of repeated string str.

explaination:
--------------------
1. first string after repeated 3 times.
abcdabcdabcd  
2. now second string is the substring of repeated string str, we can say that second string now present in str. 

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/



#include<iostream>
#include<vector>
#include<string>
using namespace std;

void findLps(vector<int> &lps, string s){

  int pre = 0, suf = 1;

  while(suf < s.size()){
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

}

int KMP_MATCH(string haystack, string needle){

  vector<int> lps (needle.size(), 0);
  findLps(lps, needle);     

  int first = 0, second = 0;

  while(first < haystack.size() && second < needle.size()){
    // Matches
    if(haystack[first] == needle[second]){
      first++, second++;
    }
    // Not Matches
    else {
      // there are two condition here
      // second string points at 0 index
      if (second == 0)
      {
        first++;
      } 
      // Not at 0 index
      else {
        second = lps[second-1];
      }
    }
  }

  // If Answer exist then return 1 otherwise 0 
  if(second == needle.size()){
    return 1;
  }

  return 0;
}

int repeatStringMatching(string a, string b){
  
  if(a == b) return 1;

  int repeat = 1;
  string temp = a;

  while(temp.size() < b.size()){
    temp += a;
    repeat++;
  }

  // KMP Pattern Search
  if(KMP_MATCH(temp, b) == 1)
  return repeat;
  // Temp+a,  KMP Search
  if(KMP_MATCH(temp+a, b) == 1)
  return repeat+1;

  return -1;

}

int main(){
  string str, substr;
  cout << "enter a string str : ";
  cin >> str;
  cout << "enter the substr: ";
  cin >> substr;


  // function  call 
  int result = repeatStringMatching(str, substr);
  cout << "Repeat String Matching (count): " << result << endl;
  return 0;
}





/*  
Output:-
-----------
enter a string str : abcd
enter the substr: cdabcdab
Repeat String Matching (count): 3


enter a string str : abc
enter the substr: cdab
Repeat String Matching (count): -1

*/