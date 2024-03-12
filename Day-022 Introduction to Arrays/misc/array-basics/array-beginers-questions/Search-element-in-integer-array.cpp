/*  
  Question 1. Search the Element into the integer array. 
*/

#include<iostream>
using namespace std;
int main() {
  int n, target, index = -1;
  cout << "Enter the size: ";
  cin >> n;

  int arr[1000];
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // target
  cout << "Enter the number to search in the sorted array: ";
  cin >> target;

  // Search the given element
  for(int i=0; i<n; i++) {
    if(arr[i] == target) {
      index = i;
      break;
    }
  }
  cout << "index: " << index;
  
}


/*  
Output:
---------
Enter the size: 5
Input the elements into the array: 10 20 30 40 50
Enter the number to search in the sorted array: 60
index: -1

Enter the size: 5
Input the elements into the array: 100 20 30 4 50
Enter the number to search in the sorted array: 4
index: 3
*/