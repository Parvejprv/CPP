/*  
Reverse Integer:-
Given a 32-bit signed integer, reverse digits of an integer.

Ex. 
216   -> 612

Logic
------
1. First we have to iterate each number one by one by mod 10 & then divide by 10.
2. The user formula
  ans = ans*10 + rem
*/


#include<iostream>
using namespace std;

int reverse(int n);


int main(){
  int num, ans = 0, rem;
  cout << "Enter the Number : ";
  cin >> num;

  // Logic 1
  // while(num > 0) {
  //   rem = num%10;
  //   // cout << rem;
  //   num /= 10;
  //   // cout << num;
  //   ans = ans*10 + rem;
  //   // cout << ans;
  // }
  // cout << ans;

  // Logic 2 (un-sign)
  // for(;num > 0 ; ) {
  //   rem = num%10;
  //   num /= 10;
  //   ans = ans*10 + rem;
  // }
  // cout << "Reverse Number is : " << ans;
  
  int ans = reverse(num);
  cout << ans;

}

  // Leetcode Question:-
  int reverse(int x) {
    int rem, ans = 0;
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




