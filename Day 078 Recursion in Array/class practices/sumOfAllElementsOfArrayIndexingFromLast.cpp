

/*  

Question: Sum of all elememt present into the array using recursion.

*/

/* 
Sum of all elements present into the array.
*/

// Mathematical intitution behind this logic is- for given array, int arr[5] = {3, 4, 5, 8, 2};
/****************************
sum(5) = 0        => Base case
sum(4) = 2 + sum(5)  -> 2+0 = 2
sum(3) = 8 + sum(4)  -> 8+2 = 10
sum(2) = 5 + sum(3)  -> 5+10 = 15
sum(1) = 4 + sum(2)  -> 4+15 = 19
sum(0) = 3 + sum(1)  -> 3+19 = 22


----------------------------------
sum(arr, index, n) = arr[index] + sum(arr, index+1, n)
----------------------------------

****************************/




#include<iostream>
using namespace std;

int sumOfAllElements(int arr[], int index){
  if(index == -1)
  {
    return 0;
  }

  // cout << arr[index] << " " << endl;
  return (sumOfAllElements(arr, index-1) + arr[index] );
}

int main() {

  int arr[5] = {3, 7, 6, 2, 8};

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = n-1;
  cout << sumOfAllElements(arr, index);

  return 0;
}

/*  
Output:-
----------
8 
2 
6 
7 
3 
26

*/