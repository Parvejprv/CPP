#include<iostream>
using namespace std;
long long painterPartition(int arr[], int n, int k){
  long long start = 0, end = 0, mid, ans = -1;

  // edge case
  if(k > n){
    return -1;
  }

  for(int i=0; i<n; i++){
    if(arr[i] > start){
      start = arr[i];
    }
    end += arr[i];
  }

  while(start <= end){
    mid = start + (end-start)/2;

    int wall = 0, count = 1;
    for(int i=0; i<n; i++){
      wall += arr[i];
      if(wall > mid){
        count++;
        wall = arr[i];
      }
    }
    if(count <= k){
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  int arr[1000];

  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  // array elements intput
  cout << "Input the elements into the array:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // k, number of painter
  int k;
  cout << "Enter value of k: ";
  cin >> k;

  // painterPartition
  int partitionResutl = painterPartition(arr, n, k);
  cout << "PartitionResult: " << partitionResutl << endl;

  return 0;
}

/*  
Output:-
--------
Enter the size of the array:5
Input the elements into the array:5 10 30 20 15
Enter value of K: 3
PartitionResult: 35

Enter the size of the array:5
Input the elements into the array:5 10 30 20 15
Enter value of k: 3
PartitionResult: 35

*/