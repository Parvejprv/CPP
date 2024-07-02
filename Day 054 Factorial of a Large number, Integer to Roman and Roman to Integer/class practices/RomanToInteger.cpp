/*  
Question:-  Roman to Integer
==============================
Here we need to convert the Roman number into integer form
Example:- III = 3, IV = 4, IX = 9, LVIII = 58

I - 1
V - 5
X - 10
L - 50
C - 100
D - 500
M - 1000


There is a point that How we consider which number is positive or negative.

----------------------------------------
There is a certain tricks:-
----------------------------------------
If the next number of the given number is greater than it would be consider as negative, otherwise it would be positive number.

I, II, III
IV - (-1+5) = 4
V, VI, VII, VIII - (5+1+1+1) = 8, 
IX - (-1+10) = 9

----------------------------------------

*/


#include<iostream>
using namespace std;
int num(char c) {
  if(c == 'I') return 1;
  else if(c == 'V') return 5;
  else if(c == 'X') return 10;
  else if(c == 'L') return 50;
  else if(c == 'C') return 100;
  else if(c == 'D') return 500;
  else if(c == 'M') return 1000;
  return 0;   // default case,
}
int romanToInteger(string &s){
  
  int index = 0, sum = 0;
  while(index < s.size()-1){
    if(num(s[index]) < num(s[index+1])){
      // make left num as negative / Subtraction case
      sum -= num(s[index]);
    } else {
      sum += num(s[index]);
    }
    index++;
  }

  // last element
  sum += num(s[s.size()-1]);
  return sum;
}

int main() {
  string s;
  cout << "Enter the string s: ";
  cin >> s;

  // function call 
  int result = romanToInteger(s);
  cout << "Result: " << result << endl;

  return 0;
}


/* 
TC: O(N)
SC: O(1)

Output:-
-----------
Enter the string s: XLIII
Result: 43

*/




















// Solution:- 1 (CPP)

/*  

#include<iostream>
#include<algorithm>
using namespace std;
// function to convert the character into number/integer
int num(char c){
  if(c == 'I') return 1;
  if(c == 'V') return 5;
  if(c == 'X') return 10;
  if(c == 'L') return 50;
  if(c == 'C') return 100;
  if(c == 'D') return 500;
  if(c == 'M') return 1000;
  return 0; // Default case, though input gurantees valid Roman numerals
}
int romanToInteger(string &str){
  int sum = 0, index = 0;   // sum that will obtain the sum, and index = 0

  while(index < str.size()){
    // here a function num() that would convert character into number
    if(index < str.size()-1 && num(str[index]) < num(str[index+1])){
      // Subtraction case
      sum -= num(str[index]);
    } else {
      // Normal addition case
      sum += num(str[index]);
    }
    index++;
  }
  
  return sum;
}

int main(){
  string s;
  cout << "Enter the string s: ";
  cin >> s;

  // function call
  int result = romanToInteger(s);
  cout << "Result: " << result << endl;

  return 0;
}

*/

/*  
Output:-
-----------
Enter the string s: LVIII
Result: 57

*/









/*  

Solution. 3
--------------------

#include <iostream>
using namespace std;

int num(char c) {
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else if (c == 'M') return 1000;
    return 0; // default case
}

int romanToInteger(const string &s) {
    int sum = 0;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        // Check if the current value is less than the next value
        if (i < n - 1 && num(s[i]) < num(s[i + 1])) {
            sum -= num(s[i]);
        } else {
            sum += num(s[i]);
        }
    }

    return sum;
}

int main() {
    string s;
    cout << "Enter the string s: ";
    cin >> s;

    // Function call
    int result = romanToInteger(s);
    cout << "Result: " << result << endl;

    return 0;
}

*/



