/*  
Question 1. Write a CPP to print the integer array in ascending order Using the Insertion Sort.

*/


#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int n; 
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // Insertion Sort
  for(int i=0; i<n; i++){
    for(int j=n-1; j>0; j--){
      if(arr[j] < arr[j-1])
        swap(arr[j], arr[j-1]);
    }
  }

  // Display the Integer array after Sorting 
  cout << "Output After Sorting the element using the Insertion Sort in Ascending Order: ";
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  
}

/*  
Output:
---------
Enter the size of the array: 5
Input the elements into the array: 1 4 6 5 0
Output After Sorting the element using the Insertion Sort in Ascending Order: 0 1 4 6 5

Input the elements into the array: 10 20 30 4 50
Output After Sorting the element using the Insertion Sort in Ascending Order: 4 10 20 30 50

*/