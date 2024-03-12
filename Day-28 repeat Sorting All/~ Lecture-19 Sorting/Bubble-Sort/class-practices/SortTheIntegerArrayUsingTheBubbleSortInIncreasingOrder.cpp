/*  
Question 1. Write a CPP to perform the Bubble Sort Techniques using a integer array.

*/

// Solution 3. 

#include<iostream>
using namespace std;
 
 // Bubble Sort
void  bubbleSort(int arr[], int n){
  for(int i=n-2; i>=0; i--){
    bool swapped = 0;
    for(int j=0; j<=i; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;

        swapped = 1;

        // OR
        //swap(arr[j], arr[j+1]);
      }
    }
    // If no two elements were swapped by inner loop, then the array is sorted
    if(swapped == 0){
      break;
    }
  }
}
int main(){
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the integer elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  bubbleSort(arr, n);

  // display the array element after sort
  cout << "Display the integer array After Bubble sort: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


/* 
Output:-
Enter the size of the array: 6
Input the integer elements into the array: 1 20 
35 60 9 90
Display the integer array After Bubble sort: 1 9 20 35 60 90


Enter the size of the array: 6
Input the integer elements into the array: 1 2 3 4 5 6
Display the integer array After Bubble sort: 1 2 3 4 5 6


Enter the size of the array: 5
Input the integer elements into the array: 101 2
 903 4 60
Display the integer array After Bubble sort: 2 4 60 101 903
*/













/* Solution 1. / Method 1. (Without using Function) */

/*  
#include<iostream>
using namespace std;
int main(){
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the integer elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Bubble Sort
  for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;

        // OR
        //swap(arr[j], arr[j+1]);
      }
    }
  }

  // display the array element after sort
  cout << "Input the integer elements into the array: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
*/

/*  
Output:-
--------
Enter the size of the array: 5
Input the integer elements into the array: 10 2 3 0 1   
Input the integer elements into the array: 0 1 2 3 10

*/
















/* Solution 2. / Method 2. (Using the Function)*/

/*
#include<iostream>
using namespace std;
void  bubbleSort(int arr[], int n){
  // Bubble Sort
  for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;

        // OR
        //swap(arr[j], arr[j+1]);
      }
    }
  }
}
int main(){
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the integer elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  bubbleSort(arr, n);

  // display the array element after sort
  cout << "Display the integer array After Bubble sort: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
*/

/*  
Output:-
--------
Enter the size of the array: 5
Input the integer elements into the array: 0 100 90 2 3
Display the integer array After Bubble sort: 0 2 3 90 100

*/























/*  
Here Time Complexity of the Bubble Sort in the different cases,

1). Worst Case : O(n^2) & Space Complexity (Aux): O(1)
2). Best Case : O(n)
3). Average Case : O(n^2)

*/