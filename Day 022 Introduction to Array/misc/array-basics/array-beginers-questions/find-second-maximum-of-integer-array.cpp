


/* 
Question 2. Find the Second maximum element of the array.

Given an unsorted integer array, write a function that returns the second highest number in the array
*/




/* Method 3. CA */

#include<iostream>
#include<climits>
using namespace std;
int findSecondMax(int arr[], int n) {
  
  int ans = INT_MIN;
  int secondMax = -1;

  // Largest element
  for(int i=0; i<n; i++){
    if(arr[i] > ans) {
      ans = arr[i];
    }
  }

  // Find the second max element
  for(int i=0; i<n; i++){
    if(arr[i]!= ans)
    secondMax = max(secondMax, arr[i]);
  }
   return secondMax;
}
int main() {
  int arr[100];
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  cout << "Input the Elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Find the Second Maximum element
  int secondMaxElement = findSecondMax(arr,n);

  cout << "Second Max: " << secondMaxElement;

}

/* 
Output:
-------

*/










/*  
Method 2. (with the help of the function)
---------
*/
/*
#include<iostream>
#include <climits>
using namespace std;
int findSecondLargest(int arr[], int n) {
  if(n < 2){
    cout << "You have to choose atleast two element.";
    return -1;
  }
  int firstMax = INT_MIN;
  int secondMax = INT_MIN;

  // Find the first and second maximum
  for(int i=0; i<n; i++){
    if(arr[i] > firstMax){
      secondMax = firstMax;
      firstMax = arr[i];
    } else if (arr[i] > secondMax && arr[i] != firstMax) {
      secondMax = arr[i];
    }
  }

  return secondMax;
}

int main() {
  int arr[1000];
  int n;
  cout << "Enter the Size of the Array: ";
  cin >> n;

  cout << "Input the Element into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int secondMaxElement = findSecondLargest(arr, n);

  if(secondMaxElement != -1)
    cout << "Second Largest Element: " << secondMaxElement << endl;

  return 0;
}

*/












/*  
Method 1. Without Function.
---------
*/


/* 

#include<iostream>
#include <climits>
using namespace std; 
int main() {

  int n;
  cout << "Enter the number of elements you want in array: ";
  cin >> n;

  if(n < 2){
    cout << "Array should have atleast two values.";
    return -1;
  }


  int arr[100];
  cout << "Input the Elements into the Array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // 1st maximum
  int max = INT_MIN;
  // cout << "max : " << max << endl;

  for(int i=0; i<n; i++){
    // check if any element of the array would be greater than initial maximum then max = arr[i]
    if(arr[i] > max){
      max = arr[i];
    }
  }

  // Now, Second maximum
  int secondMax = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] != max && arr[i] > secondMax) {
      secondMax = arr[i];
    }
  }

  // cout << "The largest element is : "<< max ;
  cout << "\nThe Second largest element is : "<< secondMax ;
}

*/



/*  
Output:
-------
Enter the number of elements you want in array: 5
Input the Elements into the Array: 12 35 1 10 1
The largest element is : 35
The Second largest element is : 12


Enter the number of elements you want in array: 7
Input the Elements into the Array: 12 35 1 10 33 1 0
The largest element is : 35
The Second largest element is : 33


Enter the number of elements you want in array: 6
Input the Elements into the Array: 12 35 1 10 1 10
The largest element is : 35
The Second largest element is : 12


Enter the number of elements you want in array: 3
Input the Elements into the Array: 10 5 10
The largest element is : 10
The Second largest element is : 5


Enter the number of elements you want in array: 5
Input the Elements into the Array: 10 20 203 30 40

The Second largest element is : 40
*/