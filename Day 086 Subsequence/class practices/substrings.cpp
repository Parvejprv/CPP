
/*  
Queston: WAP to print the substrings of a string with the help of recursion.
*/

#include<iostream>
#include<vector>
using namespace std;
void printSubstrings(string &s, int index, int n, vector<string>& ans, string &temp){
  if(index == n){
    ans.push_back(temp);
    return;
  }

  // Not included
  printSubstrings(s, index+1, n, ans, temp);
  // Included
  temp.push_back(s[index]);
  printSubstrings(s, index+1, n, ans, temp);
  temp.pop_back();  // after performing task do pop as well
}

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  // vector
  vector<string> ans;   // final ans
  string temp;
  printSubstrings(str, 0, str.size(), ans, temp);

  for(int i=0; i<ans.size(); i++)
  cout << ans[i] << endl;

}


/*  
Output:-
--------------
Enter a string str: abc

c
b
bc
a
ac
ab
abc




Enter a string: abcd

d
c
cd
b
bd
bc
bcd
a
ad
ac
acd
ab
abd
abc
abcd




Enter a string: abcd

d
c
cd
b
bd
bc
bcd
a
ad
ac
acd
ab
abd
abc
abcd

*/