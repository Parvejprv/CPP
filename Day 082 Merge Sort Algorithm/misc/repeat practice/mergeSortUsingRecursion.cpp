/*  
Topic
-------
Merge Sort

Question. 
----------
WAP to find the sorting using merge sort for non-decreasing order.

*/

/*  


#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int end, int mid){
  vector<int> temp (end-start+1);

  int left = start, right = mid+1, index = 0;
  while(left <= mid && right <= end){
    if(arr[left] <= arr[right]){
      temp[index] = arr[left];
      index++, left++;
    } else {
      temp[index] = arr[right];
      index++, right++;
    }
  }

  // Left sub-arrays got some value remains
  while(left <= mid){
    temp[index] = arr[left];
    index++, left++;
  }

  // Right sub-arrays got some value remains
  while(right <= end){
    temp[index] = arr[right];
    index++, right++;
  }


  // now after divides and merge, we have to reset the value of index to 0
  index = 0;
  while(start <= end){
    arr[start] = temp[index];
    start++, index++;
  }

}
void mergeSort(int arr[], int start, int end){
  if(start == end) return;

  int mid = start + (end-start)/2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid+1, end);
  merge(arr, start, end, mid);
}

int main() {
  int arr[] = {6, 4, 7, 2, 9, 8, 3, 5};

  int n = sizeof(arr)/sizeof(arr[0]);
  int start = 0, end = n-1;

  mergeSort(arr, start, end);

  // print the array element s after getting sort in ascending order,
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}


*/


/*  
Output:-
--------
2 3 4 5 6 7 8 9 

*/











/*  
Question 2. WAP to print the lements of the array using merge sort technique, in descending order.

*/


#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int end, int mid){
  vector<int> temp (end-start+1);

  int left = start, right = mid+1, index = 0;
  while(left <= mid && right <= end){
    if(arr[left] >= arr[right]){
      temp[index] = arr[left];
      index++, left++;
    } else {
      temp[index] = arr[right];
      index++, right++;
    }
  }

  // Left sub-arrays got some value remains
  while(left <= mid){
    temp[index] = arr[left];
    index++, left++;
  }

  // Right sub-arrays got some value remains
  while(right <= end){
    temp[index] = arr[right];
    index++, right++;
  }


  // now after divides and merge, we have to reset the value of index to 0
  index = 0;
  while(start <= end){
    arr[start] = temp[index];
    start++, index++;
  }

}
void mergeSort(int arr[], int start, int end){
  if(start == end) return;

  int mid = start + (end-start)/2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid+1, end);
  merge(arr, start, end, mid);
}

int main() {
  int arr[] = {6, 4, 7, 2, 9, 8, 3, 5};

  int n = sizeof(arr)/sizeof(arr[0]);
  int start = 0, end = n-1;

  mergeSort(arr, start, end);

  // print the array element s after getting sort in ascending order,
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}


/*  
Output:-
---------
9 8 7 6 5 4 3 2

*/
