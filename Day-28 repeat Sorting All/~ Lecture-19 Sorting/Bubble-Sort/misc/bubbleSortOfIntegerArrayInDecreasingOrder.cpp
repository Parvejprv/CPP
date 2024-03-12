/*  
Question (HW 1.):- Write a CPP to print the array in Decreasing order of integer array using the bubble sort technique.

*/



/* Solution 1. / Method 1.:- () */
/*  
#include<iostream>
using namespace std;

 void  bubbleSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    bool swapped = 0;
    for(int j=n-2; j>=0; j--){
      if(arr[j] < arr[j+1]){
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
int main() {
  int arr[1000];
  int n;
  cout <<  "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Bubble Sort in Decreasing order
  bubbleSort(arr,n);

  // Display the integer array 
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


*/


/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the array: 10 2 3 90 54
90 54 10 3 2
*/





// Solution 2. / Method 2.:-

#include<iostream>
using namespace std;

 void  bubbleSort(int arr[], int n){
  for(int i=n-2; i>=0; i--){
    bool swapped = 0;
    for(int j=0; j<=i; j++){
      if(arr[j] < arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;

        swapped = 1;

        // OR
        //swap(arr[j], arr[j+1]);
      }
    }
      cout << "index :  " << i << " " << arr[i] << endl;
    // If no two elements were swapped by inner loop, then the array is sorted
    if(swapped == 0){
      break;
    }
  }
}
int main() {
  int arr[1000];
  int n;
  cout <<  "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Bubble Sort in Decreasing order
  bubbleSort(arr,n);

  // Display the integer array
  cout << "Display the array After Bubble Sort: " << endl; 
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the array: 90 54 900 320 2
Display the array After Bubble Sort:
900 320 90 54 2


Enter the size of the array: 6
Input the elements into the array: 
10 2 390 84 9 55
Display the array After Bubble Sort:
390 84 55 10 9 2

Enter the size of the array: 6
Input the elements into the array: 
10 2 390 84 90 0
Display the array After Bubble Sort:
390 90 84 10 2 0
*/