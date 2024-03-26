#include<iostream>
#include<vector>

using namespace std;
int trappingRainWater(vector<int>& height){
  int n = height.size();
  if(n == 0) return 0;    // Edge case: empty height vector
  int left = 0, right = n-1;
  int leftmax = 0, rightmax = 0;
  int water = 0;

  while(left < right){
    // if height[left] < height[right] is true
    if(height[left] < height[right]){
      // Check for left part
      if(height[left] >= leftmax)
        leftmax = height[left];
      else
        water += leftmax-height[left];
      left++;
    }
    // if (height[left] < height[right]) is false
    else 
    { // Check for right part
      if(height[right] >= rightmax){
        rightmax = height[right];
      } else {
        water += rightmax-height[right];
      }
      right--;
    }
  }
  return water;
} 
int main() {
  int n;
  cout << "Enter the size:";
  cin >> n;

  vector<int> height(n);
  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> height[i];
  }

  int trappingRainWaterResult = trappingRainWater(height);
  cout << "Result = " << trappingRainWaterResult << endl;

  return 0;
}


/*  
Output:-
---------
Enter the size:12
Input the elements into the vector:0 1 0 2 1 0 1 3 2 1 2 1
Result = 6
*/