#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> findPair(vector<int>& arr, int k) {

  int n = arr.size();
  sort(arr.begin(), arr.end());

  vector<int> result;

  int start = 0, end = n-1;

  for(int i=0; i<n-1; i++){
    int target = arr[i] + k;

    // Reset the start and end 
    start =  i+1;
    end = n-1;

    while(start <= end){
      int mid = start + (end-start)/2;

      if(arr[mid] == target){
        result.push_back(arr[i]);
        result.push_back(arr[mid]);
        return result;
      } else if(arr[mid] < target){
        start = mid + 1;
      } else {
        end = mid-1;
      }
    }
  }
  return result;
}

int main(){
  // vector <int> arr = {1, 0, 1, 0, 1, 0};
  int n;
  
  cout << "Enter the size: ";
  cin >> n;

  vector<int> arr(n); 
  vector<int> ans;

  // Input elements into the vector
  cout << "Input the elements into vector:";
  for(int i=0; i<arr.size(); i++){
    cin >> arr[i];
  }
  
  // target
  int target;
  cout <<   "Enter the target k:";
  cin >> target;

  


  ans = findPair(arr, target);
  
  // display the ans vector elements
  for (int i = 0; i < ans.size(); i++){
      cout << ans[i] << " " ;
  }


  return 0;
}