#include<iostream>
#include<vector>

using namespace std;

int main() {
  int n, target;
  cout << "Enter the size of the array:";
  cin >> n;
  cout << "Enter the target:";
  cin >> target;

  vector<int> arr(n);   // create an vector
  vector<int> ans(n);   // ans vector
  cout << "Enter elements of the array"<< endl;
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if((arr[i]+arr[j]) == target){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        break;
      }
    }
  }

  // for(int i=0; i<ans.size(); i++){
  //   cout << ans[i] << " ";
  // }

  return 0;
}