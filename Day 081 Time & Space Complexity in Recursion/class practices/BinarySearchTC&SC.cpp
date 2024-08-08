/*  
Topic
========

Question:
------------




Note:


int arr [8] = {1, 2, 4, 6, 8, 10, 12, 14};

indexing will be - from 0 to 7

Now, 
start = 0, end = 7
mid = start + (end-start)/2
    = 0 + (7-0)/2
    = 3

B(arr, 0, 7, 14)      - n
mid = 0 + (7-0)/2
    = 3


B(arr, 4, 7, 14)      - n/2
mid = 4 + (7-0)/2
    = 5

B(arr, 6, 7, 14)      - n/4
mid = 6 + (7-0)/2
    = 6

B(arr, 7, 7, 14)      - n/8
mid = 7 + (7-0)/2
    = 7

  Yes! element present at index 7


Here we notice one thing each term time complexity would be half of the given array, because we neglect those half part directly.

if we add all those,

=====================================
n + n/2 + n/4 + n/8 + n/16 + ..... + n/2^k
=====================================

there is a certain point where these value termed as 1,
so,

n/2^k = 1

take log both side,
log(n) = k log(2)
k = log(n)/log(2)
k = log (base 2) (n)
=====================================

So, 

Time complexity: O(log(n))
Space complexity: O(log(n))

*/


#include<iostream>
#include<vector>
using namespace std;
int print(vector<int> &arr, int index, int n){
  // Base case
  if(index == n)
  return 0;

  return arr[index] + print(arr, index+1, n);
}

int main() {
  vector<int> arr = {2, 3, 4, 5, 6};
  
  // size
  int n = arr.size();
  int index = 0;

  cout << print(arr, index, n-1);

}

/*  
Output:-
----------

*/
