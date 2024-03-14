/* 
        Author    :     Parvej alam
        date      :     05-10-2k23
*/

// 1009.  Complement of Base10 integer

/* 
Here is the leetcode Solution:-
------------------------------

class Solution {
public:
    int bitwiseComplement(int n) {
        // if num == 0 then return 1
        if (n == 0) {
            return 1;
        }
        
        int rem, ans = 0, mul = 1;
        // run a loop till the number
        while(n){
            // find the reminder and made the complement of it, And then multiply rem with mul for bin and add to the ans, here it is what I am saying
            
            rem = n%2;
            //cout << "reminder = " << rem << endl; 
            rem = rem^1;    // complement of the reminder that we get
            //cout << "complement's of the rem = " << rem << endl; 
            n = n/2;
            //cout << "now, n = " << n << endl;
            ans = ans + rem*mul;
            //cout << "ans = " << ans << endl;
            mul = mul * 2;
            //cout << "mul = " << mul << endl;
        }

        return ans;
    }
};


*/

#include<iostream>
using namespace std;
int main() {
  // if num == 0 then return 1
  int num, rem, ans = 0, mul = 1;
  
  cout << "enter the number : ";
  cin >> num;

  if (num == 0) {
    return 1;
  }
   
  while(num > 0){
    rem = num%2;
    cout << "reminder = " << rem << endl; 
    rem = rem^1;    // complement of the reminder that we get
    cout << "reminder's complement = " << rem << endl; 
    num = num/2;
    cout << "now, num = " << num << endl;
    ans = ans + rem*mul;
    cout << "ans = " << ans << endl;
    mul = mul*2;
    cout << "mul = " << mul << endl;


    cout << endl;
    cout << endl;
  }
  cout <<"Finally, ans : " << ans;
}