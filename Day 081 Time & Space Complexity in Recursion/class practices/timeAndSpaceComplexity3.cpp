/*  
Topic
========
Time & Space Complexity in Recursion



Question: 
============
There is a vector is given with integer elements, your task is to print the total of the elements that is present into the vector and return it back as an integer.

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
Note: here we are going to use as an reference variable, so that space complexity gonna take upto n+1.
And Notice one thing that gonna change the direct to the original vetor too because we are using a reference.

that means, O(n).

Time complexity: O(n)
Space Complexity: O(n)

Output:-
----------
14

*/
