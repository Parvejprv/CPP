#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> findPair(vector<int>& arr, int n, int k){
  sort(arr.begin(), arr.end());
  vector<int> result;

  int start = 0, end = n-1;

  while(start < end){
    int diff = arr[end] - arr[start];

    if(abs(diff) == k) {  // Use abs() to check the absolute difference
      result.push_back(arr[start]);
      result.push_back(arr[end]);
      return result;
    }
    else if(diff < k){
      end--;
    } else {
      start++;
    }
  }
  return result;
}
int main() {
  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  vector<int> arr(n);   // create a vector

  cout  << "Input the elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  
  int k;
  cout << "Enter the target element value: ";
  cin >> k;

  vector<int> res = findPair(arr, n, k);

  for(int x:res){
    cout << x << " ";
  }

  return 0;
}