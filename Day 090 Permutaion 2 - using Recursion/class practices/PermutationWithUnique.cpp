/*  
Problem :- Leetcode
Problem Link :- https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/


Question:- 47 Permutation 2
---------------
47. Permutations II
Medium

8525

146

Add to List

Share
Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

Example 1:

Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]
Example 2:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 

Constraints:

1 <= nums.length <= 8
-10 <= nums[i] <= 10

*/

#include<iostream>
#include<vector>
using namespace std;

void permute2(vector<int>&nums, vector<vector<int>>&ans, int index) {
  if (index == nums.size()) {
    ans.push_back(nums);
    return;
  }
  vector<bool>used(21, 0);
  for(int i=index; i<nums.size(); i++){
    if(used[nums[i]+10] == 0) {
      swap(nums[index], nums[i]);
      permute2(nums, ans, index+1);
      swap(nums[index], nums[i]);
      used[nums[i]+10] = 1;
    }
  }
}

/*  
void permute2(vector<int>& arr, vector<vector<int>>&ans, int index) {

  // Base case
  if (index == arr.size()) {
    ans.push_back(arr);
    return;
  }
  
  vector<bool>use(21, 0);   // boolean vector

  // Run a loop over the elements
  for(int i=index; i<arr.size(); i++){
    
    // Skip duplicates, check if the element of each is occurs or not, index yha se 0 milega tabhi following operation hoga   
    // Check if the index of use is 0 that means it is not used yet
    if(use[arr[i]+10] == 0){    // like, 1+10 == 0
      // Swap the current element with the first element of the array
      swap(arr[i], arr[index]);
      // Call the recursive function again for the next iteration, with next index
      permute2(arr, ans, index+1);
      // Swap the elements back to their original positions
      swap(arr[i], arr[index]);
      
      // Now make that use's index value as 1, I mean true kar do ab
      use[arr[i]+10] = 1;
    }
  }

}
*/

int main() {
  vector<int> nums = {1, 1, 2};
  int index = 0;

  vector<vector<int>>ans;
  permute2(nums, ans, index);

  for (const auto& perm : ans) {
      for (int num : perm) {
          cout << num << " ";
      }
      cout << endl;
  }

  return 0;
}




/*  
Output:-
----------
1 1 2 
1 2 1
2 1 1



*/