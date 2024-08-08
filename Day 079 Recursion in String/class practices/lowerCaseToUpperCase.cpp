
/*  
Recursion:
---------------

Question: WAP to print the lower case string to upper case string with the help of recursion.

*/
#include<iostream>
using namespace std;
void lowerToUpper(string &str, int index){
  //Base case
  if(index == -1){
    return;
  }

  str[index] = ('A' + str[index] - 'a');      // 65+17=82(R)
  lowerToUpper(str, index-1);

  // to verify that works upperToLower() print here
  // cout << str<< endl; 
}
int main() {
  string str;
  cout << "enter a string str:";
  cin >> str;

  int n = str.size();
  int index = n-1;

  // recursion calls
  lowerToUpper(str, index);
  cout << str << endl;

  return 0;
}



/*  
Output:-
---------
enter a string str:rahul
RAHUL


enter a string str:rahul
RAHUL
rAHUL
raHUL
rahUL
rahuL
rahul
*/