/* 
Question:-
---------- 
2. Reverse a Number n using the Function,
Constraints : -5000 <= n <= 5000
*/

#include<iostream>
using namespace std;

// Method to reverse the number
int Reverse(int num) {
  int sign = 1;
  // Check if the number is negative
  if(num < 0) {
    sign = -1;
    num = -num;
  }

  if(num > 5000){
    return 0;
  }

  int ans = 0;
  while(num) {
    int rem = num%10;   // rem

    if( ans > 5000 || (ans == 5000 && rem > 0) ) {
      return 0;
    }

    ans = ans*10 + rem;
    num = num/10;
  }
  return sign*ans;

}

int main() {
  int num;
  cout << "Enter the number : ";
  cin >>num ;

  // Checking if the number is within the given constraints
  if (num < -5000 || num > 5000) {
      cout << "Number out of range" << endl;
      return 0;
  }


  // function call
  int reverseNumber = Reverse(num);

  if(reverseNumber == 0 && num != 0)
  cout << "Out of range\n";

  cout << "Reverse Number : " << reverseNumber;
  return 0;
}

/*  
Output:-
-------

Enter the number : 4999
Revers Number : 9994

Enter the number : 4445
Revers Number : 5444

*/