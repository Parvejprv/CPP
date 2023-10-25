/*  
Question : Find and return, Second largets element into the array. if it does not present then return -1.
*/


int print2largest(int arr[], int n) {
    
    // Largest
    int max1 = -1;
      
      for(int i=0; i<n; i++){
          if(arr[i] > max1) {
              max1 = arr[i];
          }
      }
      
      // Second largest
      int secondMax = -1;
      
      for(int i=0; i<n; i++) {
          if(arr[i] != max1) {
              secondMax = max(secondMax, arr[i]);
          }
      };
      
      return secondMax;
}


/*
Solution 1.   (C++)
-----------

#include <iostream>
#include <climits>
using namespace std;

int print2Largest(int arr[], int size) {

    // Function for swapping the elements of the array
    if (size <= 0) {
        return -1; // Error: Invalid array size
    }

    int ans = INT_MIN;
    for(int i=0; i<size; i++){
      if(arr[i] > ans){
        ans = arr[i];
      }
    }

    // secondLargest
    int secondMax = INT_MIN;
    for(int i=0; i<size; i++){
      if(arr[i] != ans){
        secondMax = max(secondMax, arr[i]);
      }
    }
    return secondMax;
}

int main() {
    int size;

    // taking size input
    cout << "Enter the size of the array : ";
    cin >> size;

    if(size <= 0){
      cout << "Invalid array size." << endl;
      return 1;
    }

    int arr[size];            // create an integer array of size
    // taking array element input
    cout << "enter the elements into the array : ";
    for(int i = 0; i < size; i++){
      cin >> arr[i];
    }


    int result = print2Largest(arr, size); // Function Call
    cout << result;

    return 0;
}

*/








/*  
Solution 2. (Java)
-----------
*/


