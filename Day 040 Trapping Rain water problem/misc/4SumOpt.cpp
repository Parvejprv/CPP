/*  
Question : 4Sum Problem
link: https://www.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1



*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > fourSum(vector<int> &arr, int k) {
  // sort the vector
  sort(arr.begin(), arr.end());
  
  int n = arr.size();
  vector<vector<int>> results;     // resultant vector
  
  for(int i=0; i<n-3; i++){
      if (i > 0 && arr[i] == arr[i - 1]) continue;        // skip duplicate for 1st number
      for(int j = i + 1; j < n - 2; j++){
          if (j > i + 1 && arr[j] == arr[j - 1]) continue;      // skip duplicates for second number
          int target = k - arr[i] - arr[j];
          int left = j + 1, right = n - 1;         // left and right pointer   
  
          while(left < right){
              int sum = arr[left] + arr[right];
              if(sum == target)
              {
                  results.push_back({arr[i], arr[j], arr[left], arr[right]});
                  while(left < right && arr[left] == arr[left+1]) left++;     // skip duplicates
                  while(left < right && arr[right] == arr[right-1]) right--;     // skip duplicates
                  left++;
                  right--;
              }
              else if(sum < target){
                  left++;
              } else {
                  right--;
              }
          }
      }
  }
  
  return results;
}
int main() {
  int n;
  cout << "Enter the size:";
  cin >> n;   // input the size of the vector | array

  vector<int> arr(n);
  cout << "Input the elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];    // Input array elements
  }

  int k;
  cout << "Enter the value of k:";
  cin >> k;
  
  // 4Sum
  vector<vector<int>> result = fourSum(arr, k);
  
  // Printing the results
  for(auto &vec : result){
    for(int num : vec){
      cout << num << " ";
    }
    cout << "$";
  }

  return 0;
}






/*  
Output:-
--------
Enter the size:6
Input the elements into the vector:1 5 1 0 6 0
Enter the value of k:13
1 1 5 6 $


Enter the size:5
Input the elements into the vector:0 0 2 1 1
Enter the value of k:3
0 0 1 2 $

*/