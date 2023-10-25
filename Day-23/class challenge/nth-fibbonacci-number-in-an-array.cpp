/* 
Question:-
-----------

Find nth fibbonacci number of the array, and print it.
 
*/

#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the nth number : ";
  cin >> n;
  int arr[1000];
  // first = 0;
  // second = 1;

  arr[0] = 0;
  arr[1] = 1;

  for(int i=2; i<=n-1; i++) {
    arr[i] = arr[i-1]+arr[i-2];
  }

  cout << arr[n-1] << " ";
}


/*  
Output:-
--------

Enter the nth number : 7
8

Enter the nth number : 8
13

*/