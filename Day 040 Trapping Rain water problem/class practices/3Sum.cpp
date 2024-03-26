/*  
Question: 3 Sum
*/



// Solution 1. Brute force
#include<iostream>
#include<vector>
using namespace std;
int Sum_3Sum(vector<int>& arr, int x){
  int n = arr.size();
  // 3 Sum
  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      for(int k=j+1; k<n; k++){
        if((arr[i]+arr[j]+arr[k]) == x){
          return 1;
        }
      }
    }
  }
  return 0;
}
int main() {
  int n;

  cout << "Enter the size:";
  cin >> n;

  vector<int> arr(n);

  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int x;
  cout << "Input the target element:";
  cin >> x;

  // 3Sum
  int Result = Sum_3Sum(arr,x);
  cout << "3SumResult = " << Result << endl;

  return 0;
}



/*  
Ouput:- TC: O(n^3) & SC: O(1) 
--------
Enter the size:6
Input the elements into the vector:1 4 45 6 10 8
Input the target element:13
3SumResult = 1

Enter the size:6
Input the elements into the vector:1 4 45 6 10 8
Input the target element:39
3SumResult = 0

*/