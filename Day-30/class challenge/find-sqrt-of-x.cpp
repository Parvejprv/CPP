/* 
  Question: Sqrt or nearest Sqrt of x
*/

// Solution 2  / Method 2.

#include<iostream>
using namespace std;
int findSqrtOf_x(int arr[], int n, int x){
  int start = 1, end = x, mid, ans = n;
  while (start <= end) {
    mid = start +(end- start)/2;
    if(mid*mid == x){
      return mid;
    } else if(mid*mid < x){
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  cout << "The Square root | Nearest sqrt of target element is: "<< ans <<endl;
}
int main() {
  int arr[1000];
  int n, target;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  cout << "Enter the target element: ";
  cin >> target;

  // findSqrtOf_x
  int result = findSqrtOf_x(arr, n, target);
  cout << "Result : " << result;
  
  return 0;
}



/*  
//  Solution 1 / Method 1.

#include<iostream>
using namespace std;
void findSqrtOf_x(int arr[], int n, int x){
  int start = 1, end = x, mid, ans = n;
  while (start <= end) {
    mid = start +(end- start)/2;
    if(mid*mid == x){
      ans = mid;
      break;
    } else if(mid*mid < x){
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  cout << "The Square root | Nearest sqrt of target element is: "<< ans <<endl;
}
int main() {
  int arr[1000];
  int n, target;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  cout << "Enter the target element: ";
  cin >> target;

  // findSqrtOf_x
  findSqrtOf_x(arr, n, target);
  
  return 0;
}

*/


/*  

Here Time Complexity of the It: O(log(N)) and Space Complexity of the It: O(1).

Output:-
--------

Enter the size of the array: 7 
Input the elements into the array: 10 20 30 30 40  50 65
Enter the target element: 64
The Square root | Nearest sqrt of target element is: 8

Input the elements into the array: 10 20 20 30 50
Enter the target element: 49
The Square root | Nearest sqrt of target element is: 7

Enter the size of the array: 5
Input the elements into the array: 10 20 30 40 48
Enter the target element: 49
The Square root | Nearest sqrt of target element is: 7


Enter the size of the array: 5
Input the elements into the array: 10 20 30 40 50
Enter the target element: 121
The Square root | Nearest sqrt of target element is: 11
*/