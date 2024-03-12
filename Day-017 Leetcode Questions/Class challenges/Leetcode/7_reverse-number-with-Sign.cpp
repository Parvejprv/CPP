#include<iostream>
#include<limits.h>
using namespace std;

int reverse(int n);     // function definition

int reverse(int x) {
  int rem, ans = 0;
  
  // cout << "intMin " << INT_MIN << endl << "intMax " << INT_MAX << endl ;
  
  while(x!=0){
      rem=x % 10;
      x /= 10;
      if(ans > INT_MAX/10 || ans < INT_MIN/10) {
      return 0;
      }
      ans = ans * 10 + rem;
  }
  return ans;
}


int main() {
  // Leetcode Question:- 7
  int n;
  cout << "Enter number : ";
  cin >> n;

  int reversed = reverse(n);
  cout << reversed;

}








/* 

Let say here I am trying to insert the integer of a number that is 236789, it is in the range of the integer that is possible but if I try to insert the reverse of it, then it may results an integer overflow error ( that means it may not insert the number because the range of the integer is limited and this number belongs to out of range integer. )

Here range of the integer is :  
((-2^31)-1)  to ((2^31)-1)

Ex.
num = 236789

reverse = 987632    (Yes ofcourse this range is out of integer.)
*/