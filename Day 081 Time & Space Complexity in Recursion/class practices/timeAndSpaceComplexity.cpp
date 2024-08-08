/*  
Topic
========
Time & Space Complexity in Recursion


*/

#include<iostream>
using namespace std;
void print(int arr[], int index){
  // Base case
  if(index == -1)
  return ;

  cout << arr[index] << " ";
  print(arr, index-1);
}

int main() {
  int arr[5] = {2, 3, 4, 5, 6};
  print(arr, 4);

}


/*
Time complexity: O(n)
Space Complexity: O(n)

Output:-
----------
6 5 4 3 2 

*/
