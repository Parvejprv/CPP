/*  
Question: Kth Missing Number of the sorted integer array using the binary search

*/


#include<iostream>
using namespace std;
int KthMissingNumber(int arr[], int n, int k){

  int start = 0, end = n-1, mid, ans = n;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid] - mid - 1 >= k){
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  int result = ans + k;
  return result;
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

  int k;
  cout << "Enter a value to find Kth missing number of the integer array: ";
  cin >> k;


  // function to find the KthMissingNumber
  int ans = KthMissingNumber(arr, n, k);
  cout <<"Result: " << ans << endl;

  return 0;
}


/*  
Output:-
--------
Enter the size of the array: 6
Input the elements into the array: 2 4 6 7 11 18
Enter a value to find Kth missing number of the integer array: 5  
Result: 9


Enter the size of the array: 6
Input the elements into the array: 2 4 6 7 11 20
Enter a value to find Kth missing number of the integer array: 4  
Result: 8
*/














/*  

// Java

public int findKthPositive(int[] arr, int k) {
  int start = 0, end = arr.length-1, mid, ans = arr.length;
  while(start <= end){
      mid = start + (end-start)/2;
      
      if((arr[mid]-mid-1) >= k){
          ans = mid;
          end = mid - 1;
      } else {
          start = mid + 1;
      }
  }
  return ans + k;
}



*/