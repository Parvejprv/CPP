/*  
Question:- Traping rain water problem.
*/

#include<iostream>
#include<vector>

using namespace std;
int trappingRainWater(vector<int>& height){
  int n = height.size();   // size

  // Let create two array of size n
  int leftmax[n], rightmax[n];

  leftmax[0] = 0;     // initially
  // store the maximum of leftmax[i-1] and height[i-1] to leftmax[i]
  for(int i=1; i<n; i++){
    leftmax[i] = max(leftmax[i-1], height[i-1]);
  }

  rightmax[n-1] = 0;    // initially
  // store the maximum of righttmax[i+1] and height[i+1]
  for(int i=n-2; i>=0; i--){
    rightmax[i] = max(rightmax[i+1], height[i+1]);
  }

  int water = 0;
  for(int i=0; i<n; i++){
    int minHeight = min(leftmax[i], rightmax[i]);
    int waterRes = minHeight - height[i];
    if(waterRes >= 0){
      water += waterRes;
    }
  }

  return water;
}

int main() {
  int n;

  cout << "Enter the size n:";
  cin >> n;

  // create a vector of size n
  vector<int> arr(n); 

  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int trappingRainWaterRes = trappingRainWater(arr);
  cout << "water = " << trappingRainWaterRes << endl;

  return 0;
}


/*  
Output:- TC: O(N), SC = O(N)
--------
Enter the size n:8
Input the elements into the vector:4 2 0 5 2 6 2 3
water = 10

*/
















/*  
Solution: 2
//-----------


long long trappingWater(int height[], int n){
      
        int leftmax[n], rightmax[n];
        
        leftmax[0] = 0;   // initially
        for(int i=1; i<n; i++){
          leftmax[i] = max(leftmax[i-1], height[i-1]);
        }
      
        rightmax[n-1] = 0;  // initially
        for(int i=n-2; i>=0; i--){
          rightmax[i] = max(rightmax[i+1], height[i+1]);
        }
      
      
        long long water = 0;
        for(int i=0; i<n; i++){
          int minHeight = min(leftmax[i], rightmax[i]);
          // Now , Check for minHeight - height[i] is positive or not, if it would be negative then don't consider it
          if(minHeight-height[i] >= 0){
            water += minHeight-height[i];
          }
        }
      return water;
    }



*/