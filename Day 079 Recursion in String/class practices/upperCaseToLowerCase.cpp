
/*  
Recursion:
---------------

Question: WAP to print the upper case string to lower case string with the help of recursion.

*/
#include<iostream>
using namespace std;
void upperToLower(string &str, int index){
  //Base case
  if(index == -1){
    return;
  }

  str[index] = ('a' + str[index] - 'A');      // 97+17=114(r)
  upperToLower(str, index-1);

  // to verify that works lowerToUpper() print here
  // cout << str<< endl; 
}
int main() {
  string str;
  cout << "enter a string str:";
  cin >> str;

  int n = str.size();
  int index = n-1;

  // recursion calls
  upperToLower(str, index);
  cout << str << endl;

  return 0;
}

/*  
Output:-
----------
enter a string str:RAHUL
rahul

*/