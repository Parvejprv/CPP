

/*  
Question : 
===========
Let interviewer asked for without using any extra space so use swapping here to find the permutaion.

*/


#include<iostream>
#include<vector>
using namespace std;
void permute(vector<int>& arr, vector<vector<int>>&ans, int index) {

  // Base case
  if (index == arr.size() - 1) {
    ans.push_back(arr);
    return;
  }


  // Run a loop over the elements
  for(int i=index; i<arr.size(); i++){
    // Swap the current element with the first element of the array
    swap(arr[i], arr[index]);
    // Call the recursive function again for the next iteration, with next index
    permute(arr, ans, index+1);
    // Swap the elements back to their original positions
    swap(arr[i], arr[index]);
  }

}
int main() {
  vector<int> arr
 = {1, 2, 3, 4};
  
  int n = arr.size();
  int index = 0;

  // Create an 2D vector that gonna result the final answer
  vector<vector<int>> ans;

  // Recursive function call
  permute(arr, ans, index);

  // Display the element of the 2D array
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++)
    cout << ans[i][j] << " ";
    cout << endl;
  }

  return 0;
}


/*  
Time complexity : O(n*n!)
Space Complexity : O(1)

Output:-
----------
arr = {1, 2, 3}

1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 2 1 
3 1 2



arr = {1, 2, 3, 4}

1 2 3 4 
1 2 4 3
1 3 2 4
1 3 4 2
1 4 3 2
1 4 2 3
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 3 1
2 4 1 3
3 2 1 4 
3 2 4 1
3 1 2 4
3 1 4 2
3 4 1 2
3 4 2 1
4 2 3 1
4 2 1 3
4 3 2 1
4 3 1 2
4 1 3 2
4 1 2 3


*/






