/*************************************************** 
Question : Two Sum 

***************************************************/

// Solution: 1 (Using the Two Pointer approach) - O(n)
#include<iostream>
#include<vector>
using namespace std;

void twoSum(vector<int>& arr, int target){
  vector<int> ans;
  
  int start = 0, end = arr.size()-1;

  while(start < end){
    // Check if arr[start]+arr[end] is less than the target then increase the start pointer count
    if((arr[start]+arr[end]) == target){
      ans.push_back(arr[start]);
      ans.push_back(arr[end]);
      break;
    }
    // else, arr[start]+arr[end] would be either greater or equals to the target
    else {
      if(arr[start]+arr[end] < target){
        start++;
      } else {
        end--;
      } 
    }
  }

  // Display the elements
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << ", ";
  }
}
int main() {
  int n, target;
  cout << "Enter the size n: ";
  cin >> n;

  vector<int> arr(n); // create vector (n)
  vector<int> ans;   // resultant vector

  // input elements into the vector
  cout << "Enter the elements into the vector:";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // target
  cout << "Enter the target element to be searched in the array: ";
  cin >> target;

  // twoSum
  twoSum(arr, target);

  return 0;
}


















/*  
Solution 2: Using the Binary search Approach for finding the element target

TC: N*log(n)
*/


// #include<iostream>
// #include<vector>
// using namespace std;
// // binary search | Having the TC: Log(n)
// int binarySearch(vector<int>& arr, int target, int start, int end) {
//   int mid, ans = -1;

//   while(start <= end){
//     mid = start + (end-start)/2;
//     if(arr[mid] == target){
//       ans =  arr[mid];
//     return ans;
//     }
//     else  if(arr[mid] < target){
//       start = mid + 1;
//     } else {
//       end = mid - 1;
//     }
//   }
//   return ans;
// }

// int main(){
//   int n, target;
//   cout << "Enter the size n: ";
//   cin >> n;

//   vector<int> arr(n); // create vector (n)
//   vector<int> ans;   // resultant vector

//   // input elements into the vector
//   cout << "Enter the elements into the vector:";
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   // target
//   cout << "Enter the target element to be searched in the array: ";
//   cin >> target;

//   for(int i=0; i<n-1; i++){
//     int compliment = target - arr[i];
//     int start = i+1, end = n-1;
//     int res = binarySearch(arr, compliment, start, end);
//     // here if result is not equals to -1, i.e. result exist then we have to store the present index element and searching element into the ans(resultant vector) and no further need to check any more
//     if(res != -1){
//       ans.push_back(arr[i]);  
//       ans.push_back(res); // store compliment
//       break;
//     }
//   }

//   for (int i = 0; i < ans.size(); i++)
//   {
//       cout << ans[i] << " " ;
//   }
  

//     // print the answer 
//     // cout << "\nThe pair of numbers that add up to the given number is : \n" ;
//     // for(auto itr = ans.begin(); itr != ans.end() ; ++itr ){
//     //   cout << *itr << " , " ;
//     // }

  

//   return 0;
// }



/*  
Output:- TC: N*Log(n) & SC : O(1)
--------
Enter the size n: 5 
Enter the elements into the vector:2 7 11 15 27
Enter the target element to be searched in the array: 22   
7 15


*/