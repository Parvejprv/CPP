/*  
  Question:- 
  Find the count of the occurrences of the target element
*/

#include<iostream>
#include <vector>
using namespace std;

// Function to find the first Occurrence of the target element of the given sorted integer array.
int findFirstOccurrence(vector<int>& nums, int target){
  int start = 0, end = nums.size()-1;
  int firstOccurrence = -1;

  while(start <= end){
    int mid = start + (end-start)/2;
    
    if(nums[mid] == target)
    {
      firstOccurrence = mid;
      end = mid - 1;
    } 
    else if(nums[mid] < target){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return firstOccurrence;
}

// Function to find the last occurrence of target using binary search
int findLastOccurrence(vector<int>& nums, int target){
  int start = 0, end = nums.size()-1;
  int lastOccurrence = -1;

  while(start <= end){
    int mid = start + (end-start)/2;
    
    if(nums[mid] == target)
    {
      lastOccurrence = mid;
      start = mid + 1;
    } else if(nums[mid] < target){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return lastOccurrence;
}

// Function to count the occurrences of target element
int countOccurances(vector<int>& nums, int target){
  int first = findFirstOccurrence(nums, target);
  int last = findLastOccurrence(nums, target);

  cout << "First: " << first << endl;
  cout << "Last : " << last << endl;

  if(first == -1 || last == -1)   // Target not found
    return 0;

  return last - first+1;
}

// static
// int main() {
//   vector<int> nums = {1, 2, 2, 2, 3, 4, 5, 5, 5, 5, 6};
//   int target = 5;
  
//   int count = countOccurances(nums, target);
//   cout << "Occurances of " << target << " = " << count << endl;

//   return 0;
// }



int main() {
  vector<int> nums;

  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  // take array element's input into the vector
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    int num;
    cin >> num;
    nums.push_back(num);
  }

  int target;
  cout << "Enter the target element: ";
  cin >> target;

  int count = countOccurances(nums, target);
  cout << "Occurrences of " << target << " = " << count << endl;

  return 0;
}



/*  
Output:-
--------
First: 6
Last : 9
Occurances of 5 = 4


Enter the size of the array: 7
Input the elements into the array: 1 2 2 3 3 4 4
Enter the target element: 3
First: 3
Last : 4
Occurrences of 3 = 2

*/