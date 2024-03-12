/*  
Question 1. 
Write the Program to find out the index of the peak elements of the Mountain array

*/


#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int n){
  int start = 0, end = n-1, mid;
  
  while(start <= end){
    mid = end + (start-end)/2;
    if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
      return mid;
    } else if(arr[mid] > arr[mid-1]){
      start = mid+1;
    } else {
      end = mid-1;
    }
  }
  return -1;
}
int main() {
  
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Function call
  int res = peakIndexInMountainArray(arr, n);
  cout << "Result (Peak element index of the mountain array): " << res;

  return 0;
}

/*  
Output:-
----------
Enter the size of the array: 7
Input the elements into the array: 2 4 6 8 10 8 5
Result (Peak element index of the mountain array): 4

Enter the size of the array: 8
Input the elements into the array: 1 2 3 4 5 6 4 5
Result (Peak element index of the mountain array): 5
*/






/*  
// JavaScript: -

var peakIndexInMountainArray = function(arr) {
     var n = arr.length;
        var start = 0, end = n-1, mid;

        while(start <= end){
            mid = Math.floor(end+(start-end)/2);

            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            } else if(arr[mid] < arr[mid+1]){
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        return -1;
};






// Java
class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int n = arr.length;
        int start = 0, end = n-1, mid;

        while(start <= end){
            mid = end+(start-end)/2;

            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            } else if(arr[mid] > arr[mid-1]){
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        return -1;
    }
}






*/