#include<iostream>
using namespace std;
int bookAllocation(int arr[], int n, int m){

  // Check for invalid case (edge case)
  if(m > n)
  return -1;

  int start = arr[0], end = 0, mid;
  int ans = -1;

  for(int i=0; i<n; i++){
    // start = max(start, arr[i]);  OR
    if(arr[i] > start){
      start = arr[i];       // start
    }
    end += arr[i];    // sum of all the element present into the array
  }




  while(start <= end){
    mid = start + (end-start)/2;

    int page = 0, count = 1;
    for(int i=0; i<n; i++){
      page = page + arr[i];

      // Check if page is greater than mid, i.e. it would be the second student
      if(page > mid){
        count++;
        page = arr[i];
      }
    }

    // Check for the candidate or student
    if(count <= m){
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  // return ans;
}

int main() {
  int arr[1000];

  int n, m;
  cout << "Enter the  size of array: ";
  cin >> n;

  // element's into an array
  cout << "Input the elements of the array:";
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // Students to distributes
  cout << "Enter the number of student to distributes:";
  cin >> m;

  // Function to book allocation of the pages
  int ansRes = bookAllocation(arr, n, m);
  cout << "Book | page allocation : " << ansRes << endl;

  return 0;
}



/*  
Output:-
----------
Enter the  size of array: 4
Input the elements of the array:12 34 67 90
Enter the number of student to distributes:2
Book | page allocation : 113



*/