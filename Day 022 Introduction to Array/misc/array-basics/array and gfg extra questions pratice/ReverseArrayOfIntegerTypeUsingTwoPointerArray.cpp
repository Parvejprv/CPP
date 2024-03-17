#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end){ 
  while (start < end) {
    // swap the array element
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
int main() {
  int arr[100];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int start = 0, end = n-1;

  // Input elements in the array
  cout << "Input the Elements into the Array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Reverse the Array with the help of the function
  reverseArray(arr, start, end);

  // Display the array element after Reverse
  cout << "Reverse Element of the Integer Array using the Two pointer Approach: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


/*  
Output:-
---------

Enter the size of the array: 5
Input the Elements into the Array: 10 20 30 30 40
Reverse Element of the Integer Array using the Two pointer Approach: 40 30 30 20 10 

*/