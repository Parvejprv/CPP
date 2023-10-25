
/*  
Question:-
----------
For an integer N find the number of trailing zeroes in N!.


Example 1:

Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.

Example 2:

Input:
N = 4
Output:
0
Explanation:
4! = 24 so the number of trailing zero is 0.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function trailingZeroes() which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 109

find here:-
https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1

*/





#include<iostream>
using namespace std;

int trailingZeroes(int N)
{
    int count = 0;
    
    while(N) {
        count += N/5;
        N/=5;
    }
    return count;
}
int main() {
  int num;
  cout << "Enter a number: ";
  cin >>num ;

  // Function call
  cout<<"Number of trailing zeroes in the factorial is : "<<trailingZeroes(num);

  return 0;
}