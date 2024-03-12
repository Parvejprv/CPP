#include<iostream>
using namespace std;

// function to convert the lower case to upper case
char ToUpperCase(char ch) {     // d --> 100 - 97 + 65 = 68 ('D')
  char ans = ch - 'a' + 'A';
  return ans;
}

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  // Function call
  char res = ToUpperCase(ch);
  cout << "\nThe converted uppercase of '"<< ch << "' is : " << res;
}

/* 
Output:-
---------

Enter a character: d

The converted uppercase of 'd' is : D


Enter a character: z

The converted uppercase of 'z' is : Z


*/