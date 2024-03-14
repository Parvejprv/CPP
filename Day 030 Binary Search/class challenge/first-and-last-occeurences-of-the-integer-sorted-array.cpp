#include<iostream>
using namespace std;
int firstOccurenceOfTarget(int arr[], int n, int target){
  int start = 0, end = n-1, mid, first = -1;

  while(start <=  end) {
    mid = start + (end-start)/2;
    if(arr[mid] == target) {
      first = mid;
      end = mid-1;
    } else if(arr[mid] < target){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return first;
}

int lastOccurenceOfTarget(int arr[], int n, int target){
  int start = 0, end = n-1, mid, last = -1;

  while(start <=  end) {
    mid = start + (end-start)/2;
    if(arr[mid] == target) {
      last = mid;
      start = mid+1;
    } else if(arr[mid] < target){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return last;
}
int main() {
  int arr[1000];
  int n, target;

  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  cout << "Enter the target element: ";
  cin >> target;

  int firstOccuranceOfTarget = firstOccurenceOfTarget(arr, n, target);
  int lastOccuranceOfTarget = lastOccurenceOfTarget(arr, n, target);
  cout << "First and Last Occurence of target " << target << " is: " << firstOccuranceOfTarget << "," << lastOccuranceOfTarget;
}


/*  
Output:-
---------
Enter the size of the array: 6
Input the elements into the array: 10 20 20 30 40 40
Enter the target element: 30
First and Last Occurence of target 30 is: 3,3

Enter the size of the array: 6
Input the elements into the array: 10 20 20 30 30 50
Enter the target element: 30
First and Last Occurence of target 30 is: 3,4

Enter the size of the array: 5
Input the elements into the array: 10 20 20 30 40
Enter the target element: 50
First and Last Occurence of target 50 is: -1,-1
*/