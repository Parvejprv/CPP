
/*  
Solution 1. Brute force approach
---------------------------------
TC: O(n^2)
SC Auxiliary: O(1)

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
  int n, target;

  // size
  cout << "Enter the size of the array:";
  cin >> n;

  vector<int> arr(n);   // create an vector
  vector<int> ans;   // ans vector

  // elements inputed to vector
  cout << "Input the vector elements:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  // target
  cout << "Enter the target element:";
  cin >> target;

  // two-sum (bruteforce approach)
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if((arr[i]+arr[j]) == target){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        break;
      }
    }
  }
  // display the resultant element
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }

  return 0;
}





/* 
TC: O(n^2)
Aux SC: O(1) - no extra spaces are used here
 
Output:-
-----------
Enter the size of the array:5
Input the vector elements:2 7 11 15 27
Enter the target element:22
7 15

*/