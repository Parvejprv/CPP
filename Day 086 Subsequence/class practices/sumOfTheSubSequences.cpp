/*  
Topic
========

Subsequences using Recursion
==============================

Question: Find Sum of the Subsequence of a given number.

*/

#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>>&ans, vector<int> temp){
  // Base case
  if(index==n){
    ans.push_back(temp);
    return ;
  }

  // Not included
  subsequence(arr, index+1, n, ans, temp);
  // Included
  temp.push_back(arr[index]);
  subsequence(arr, index+1, n, ans, temp);
}

int main() {
  int arr[] = {1, 2, 3};

  // Create a 2-D vector that gonna store the 1-D array

  vector<vector<int>> ans;    // 2-D array
  vector<int> temp;   // temp

  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "size: " << n << endl;
  subsequence(arr, 0, n, ans, temp);

  // Display the 2-D array elements
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout << ans[i][j] << " " ;
    }
    cout << endl;
  }
}


/*  
Output:-
----------
// Subsequence of the given array elements
size: 3

3
2
2 3
1
1 3
1 2
1 2 3
*/
