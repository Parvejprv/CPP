/*  
Question : 69 (leetcode) -  Sqrt(x)
-------------
OR GFG
Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).


Example 1:

Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.
Example 2:

Input:
x = 4
Output: 2
Explanation: Since, 4 is a perfect 
square, so its square root is 2.
 

Your Task:
You don't need to read input or print anything. The task is to complete the function floorSqrt() which takes x as the input parameter and return its square root.
Note: Try Solving the question without using the sqrt function. The value of x>=0.

 

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)


*/


/*
#include<iostream>
using namespace std;
long sqrt(long x)
	 {
	    // Base Case
	    if(x == 0 || x == 1){
	        return x;
	    }
	    
		long start = 1, end = x, ans = -1;
		
		while(start <= end){
		    
		   long mid = start + (end-start)/2;
		   
		   if(mid * mid == x){
		       // If x is a perfect square, return its square root number i.e. mid
		       return mid;
		   } else if(mid * mid < x){
		       // If mid*mid is less than x, update answer and search in the right half
		       ans = mid;
		       start = mid + 1;
		   } else {
		       // If mid*mid is greater than x, search in the left half
		       end = mid - 1;
		   }
		}
		
		return ans;
	 }
int main() {
  long num;
  cout << "Enter the number: ";
  cin >> num;

  // floorSqrt of a number
  long floorSqrt = (long)sqrt(num);
  cout << "floorSqrt: " <<  floorSqrt << endl;
  return 0;
}
*/


/*  
Output:-
--------
Enter the number: 68
floorSqrt: 8

Enter the number: 50
floorSqrt: 7

Enter the number: 25
floorSqrt: 5

Enter the number: 16
floorSqrt: 4
*/









/* ********************************* */
/* ************* JAVA ************** */



/*  
In Java(Solution)
------------------

Problem: Floor Sqroot of Number

class Solution {
    public int mySqrt(int x) {
        if(x==0 || x==1)
        return x;

        // Or
        // if(x<2){
        //     return x;
        // }

        int start = 0, end = x, ans = 0;

        while(start <= end) {
            int mid = end + (start-end)/2;
            if(mid == x/mid){
                return mid;
            } else if(mid < x/mid){
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
}

*/


/* *************************** */










// Solution 3. find the Sqrt of a integer number

// Here is the Another Solution for it,
#include<iostream>
#include <climits>
using namespace std;

int sqrt(int num){
  // Sqrt of x
  int i=1, result = 1;
  while(result <= num){
    i++;
    if(result > INT_MAX){
      return (int) i-1;
    }
    result = i*i;
  }

  return (int) i-1;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  int ans = sqrt(num);
  cout << "Sqrt of " << num << " is: " << ans ;
}


/*  
Output:-
---------
Enter a number: 65
Sqrt of 65 is: 8

Enter the number: 25
floorSqrt: 5
*/
