/*  
Question: find minimum in sorted rotated array.


*/

// 4, 5, 6, 7, 0, 1, 2



#include<iostream>
using namespace std;

int findMinimum(int arr[], int n){
    int start = 0, end = n-1, mid, ans = arr[0];

    while(start <= end) {
        mid = start + (end-start);

        // Left side sorting, min ele would be rigth side
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } 
        // Right side sorting
        else {
            ans = arr[mid];
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the Number of pages into the array:";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }


  // Function to Distribute the number of pages to the student 
  int min = findMinimum(arr, n);
  cout << "Minimum element in rotated sorted array:" << min ;

  return 0;
}



/*  

Output:-
--------
Enter the size of the array: 7
Input the Number of pages into the array:4 5 6 7 0 1 2
Minimum element in rotated sorted array:0

Enter the size of the array: 7
Input the Number of pages into the array:1 2 3 4 5 6 7 
Minimum element in rotated sorted array:1
*/