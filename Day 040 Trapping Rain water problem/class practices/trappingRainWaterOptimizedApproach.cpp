/*  
Question: Trapping rain water problem.
TC:O(N)
SC: O(1)
*/



#include<iostream>
#include<vector>
using namespace std;
int trappingRainWater(vector<int>& height){
  int n = height.size();    // size
  int leftmax = 0, rightmax = 0, index = 0;

  int maxheight = height[0], water  = 0;

  // Check for maxheight and index of it
  for(int i=0; i<n; i++){
    if(height[i] > maxheight){
      maxheight = height[i];
      index = i;
    }
  }

  // Left part
  for(int i=0; i<index; i++){
    if (leftmax > height[i])
      water += leftmax - height[i];
    else
      leftmax = height[i];
  }

  // Right part
  for(int i=n-1; i>index; i--){
    if (rightmax > height[i])
      water += rightmax - height[i];
    else
      rightmax = height[i];
  }
  return water;
}
int main(){
  int n;
  cout << "Enter the size:";
  cin >> n;

  vector<int> height(n);
  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> height[i];
  }

  int trappingRainWaterRes = trappingRainWater(height);
  cout << "Water = " << trappingRainWaterRes ;

  return 0;
}

/*  
Output:-
---------
Enter the size:8
Input the elements into the vector:4 2 0 5 2 6 2 3
Water = 10


Enter the size:12
Input the elements into the vector:0 1 0 2 1 0 1 3 2 1 2 1
Water = 6
*/





















/*  
// Solution: 1 (Without using any extra spaces)
// ----------------------------------------------


#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n;

  cout << "Enter the size:";
  cin >> n;

  vector<int> height(n);

  cout << "Input the elements into the vector:";
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  // Let declare the maxleft and maxright variable initialization with value 0
  int maxleft = 0, maxright = 0;
  int water = 0;

  // let suppose the maxheight element present in the height[] is first element and it is present at the index at 0
  int maxheight  = height[0];
  int index = 0;

  // Now, we are going to evaluate exact maxheight element from height[], and index would be i as
  for(int i=1; i<n; i++){
    // check for maximum
    if(height[i] > maxheight){
      // now maxheight would be height[i] and it's index would be
      maxheight = height[i];
      index = i;
    }
  }

  // Left part
  for(int i=0; i<index; i++){
    // here check if the leftmax is greater than height[i], then store the difference of maxleft and height[i]
    if(maxleft > height[i]){
      water += maxleft- height[i];
    }
    // else ,let one case is arise where
    else {
      maxleft = height[i];
    } 
  }


  for(int i=n-1; i>index; i--){
    if(maxright > height[i]){
      water += maxright - height[i];
    } else {
      maxright = height[i];
    }
  }

  cout << "Water = " << water << endl;
  return 0;
}


*/


/*  
Output:-
--------
Enter the size:8
Input the elements into the vector:4 2 0 5 2 6 2 3
Water = 10

*/