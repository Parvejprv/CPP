/*  
Topic
========
Recursion
==========

Question: WAP to find the permutaion of the given integer array, using recursion.

int arr[] = {1,2,3}

Here are the permutaion of the given integer array-
--------------------------------------------------------
Ans:
{1, 2, 3}
{1, 3, 2}
{2, 1, 3}
{2, 3, 1}
{3, 1, 2}
{3, 2, 1}

*/

#include<iostream>
#include<vector>
using namespace std;

void permute(int arr[], vector<vector<int>>&ans, vector<int>&temp, vector<bool>& visited, int n) {
  // Base case
  if(temp.size() == n) {
    ans.push_back(temp);
    return;
  }


    // Run a loop over the original size or temp arr size
  for(int i=0; i<n; i++){
    // Check if I visited elements or not
    if(visited[i] == 0){
      // Mark the current element as visited
      visited[i] = 1;
      // push the original array current element to the temp array
      temp.push_back(arr[i]);     // array ki current value ko temp arr mein push kar do
      // Recursive call to permute the rest of the array
      permute(arr, ans, temp, visited, n);
      // Backtrack by unmarking the current element as visited
      visited[i] = 0;
      // do pop operation after completed the previous task
      temp.pop_back();
    }
  }
}

int main() {
  int arr[] = {1, 2, 3, 4};
  // size of the array
  int n = sizeof(arr)/sizeof(arr[0]);

  // Create a 2-D Vector that gonna store all the possible permutaion of the given integer array in 1-D form of array
  vector<vector<int>> ans;      // final answer
  vector<int> temp;             // temp array
  vector<bool> visited(n, 0);        // visited array

  // Recursive function call to find the permutation of integer arr
  permute(arr, ans, temp, visited, n);


  // Display the elements of 2-D array
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*  

Time complexity: 

Output:-
----------
arr = {1, 2, 3}

1 2 3 
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1




arr = {1, 2, 3}

1 2 3 4 
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4 
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1

*/

































/*  


#include<iostream>
#include<vector>
using namespace std;

void permute(int arr[], vector<vector<int>>&ans, vector<int>&temp, vector<bool> visited, int n) {
  // Base case
  if(temp.size() == n) {
    ans.push_back(temp);
    return;
  }


    // Run a loop over the original size or temp arr size
  for(int i=0; i<n; i++){
    // Check if I visited elements or not
    if(visited[i] == 0){
      // Mark the current element as visited
      visited[i] = 1;
      // push the original array current element to the temp array
      temp.push_back(arr[i]);     // array ki current value ko temp arr mein push kar do
      // Recursive call to permute the rest of the array
      permute(arr, ans, temp, visited, n);
      // do pop operation after completed the previous task
      temp.pop_back();
      // Backtrack by unmarking the current element as visited
      visited[i] = 0;
    }
  }

}

int main() {
  int arr[] = {1, 2, 3};
  // size of the array
  int n = sizeof(arr)/sizeof(arr[0]);

  // Create a 2-D Vector that gonna store all the possible permutaion of the given integer array in 1-D form of array
  vector<vector<int>> ans;      // final answer
  vector<int> temp;             // temp array
  vector<bool> visited;        // visited array

  // Recursive function call to find the permutation of integer arr
  permute(arr, ans, temp, visited, n);


  // Display the elements of 2-D array
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}




*/



/*  
Output:-
----------
1 1 1 
1 1 2
1 1 3
1 2 1
1 2 2
1 2 3
1 3 1
1 3 2
1 3 3
2 1 1
2 1 2
2 1 3
2 2 1
2 2 2 
2 2 3
2 3 1
2 3 2
2 3 3
3 1 1
3 1 2
3 1 3
3 2 1
3 2 2
3 2 3
3 3 1
3 3 2
3 3 3

*/