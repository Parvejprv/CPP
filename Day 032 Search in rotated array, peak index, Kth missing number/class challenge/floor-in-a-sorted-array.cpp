/*  
Question:-
Floor in a Sorted Array


Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).

Example 1:

Input:
N = 7, x = 0 
arr[] = {1,2,8,10,11,12,19}
Output: -1
Explanation: No element less 
than 0 is found. So output 
is "-1".
Example 2:

Input:
N = 7, x = 5 
arr[] = {1,2,8,10,11,12,19}
Output: 1
Explanation: Largest Number less than 5 is
2 (i.e K = 2), whose index is 1(0-based 
indexing).
Your Task:
The task is to complete the function findFloor() which returns an integer denoting the index value of K or return -1 if there isn't any such number.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 107
1 ≤ arr[i] ≤ 1018
0 ≤ X ≤ arr[n-1]

*/


#include<iostream>
#include<vector>

using namespace std;
// Function to find floor of x
// n: size of vector
// x: element whose floor is to find
int findFloor(vector<long long> v, long long n, long long x){
    
    long start = 0, end = n-1, mid, index = -1;
    
    while(start <= end){
        mid = start + (end-start)/2;
        
        if(v[mid] == x){
            index = mid;
            return index;
        } else if (v[mid] < x){
            index = mid;
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    }
    return index;
    
}
int main() {
  vector<long long> arr;
  int n;
  cout << "Enter the size of the vector: ";
  cin >> n;

  // input elements into the array
  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    arr.push_back(num);
  }

  long x;
  cout << "Enter the value of the x: ";
  cin >> x;

  long ans = findFloor(arr, n, x);
  cout << "Result: " << ans << endl;
  return 0;
}



/*  
Output:-
---------
Enter the size of the vector: 5
Input the elements into the array: 10 12 13 14 15
Enter the value of the x: 11
Result: 0


Enter the size of the vector: 7
Input the elements into the array: 1 2 8 10 11 12 19
Enter the value of the x: 5
Result: 1


Enter the size of the vector: 
7
Input the elements into the array: 1 2 8 10 11 12 19
Enter the value of the x: 0
Result: -1
*/