/*  
KPM
=======
LPS (Longest prefix suffix)

*/

#include<iostream>
#include<vector>
using namespace std;
int longestPrefixSuffix(string &s) {
  int n = s.size();
  vector<int> lps(n, 0);

  int pre = 0, suf = 1;

  // runs a loop over the string
  while(suf < s.size()){
    // if charsArr of prefix is equals to the charsArr of suffix means Match
    if(s[pre] == s[suf]){
      lps[suf] = pre + 1;
      pre++, suf++;
    } 
    // Not Matched
    else {
      // if prefix points 0 ind
      if(pre == 0){
        lps[suf] = 0;
        suf++;
      } else {
        pre = lps[pre-1];
      }
    }
  }

  return lps[s.size()-1];
}

int main() {
  string s;
  cout << "enter the string: ";
  cin >> s;

  // function call
  int result = longestPrefixSuffix(s);
  cout << "Longest Prefix suffix " << result << endl;

  return 0;
}




/*  
Output:
----------
enter the string: abab
Longest Prefix suffix 2

*/