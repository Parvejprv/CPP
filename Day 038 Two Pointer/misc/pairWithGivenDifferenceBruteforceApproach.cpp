/*  
Question:- find pair with the given difference, also store these pair into a vector and give then in output if it is present.

*/



#include<iostream>
#include<vector>
using namespace std;
vector<int> findPairWithGivenDifference(vector<int>& nums, int size, int n) { 
  vector<int> result;

  for(int i=0; i<size-1; i++){
    for(int j=i+1; j<size; j++){
      // int a-b = n;
      int target = nums[i] + n;
      if(nums[j] == target){   // Check if the difference equals the given value
        result.push_back(nums[i]);
        result.push_back(nums[j] );
        return result;
      }
    }
  }

  return result;    // return an empty vector if no such pair exists
}
int main() {

  int size;
  cout << "Enter the size:";
  cin >> size;

  vector<int> v(size);
  
  cout << "Input the elements into the vector:";
  for(int i=0; i<size; i++){
    cin >> v[i];
  }

  int n;
  cout << "Enter the value n:";
  cin >> n;

  vector<int> result = findPairWithGivenDifference(v, size, n);

  if (!result.empty())
  {
    cout << "Pair found: (" << result[0] << ", " << result[1] << ")" << endl;
  }
  else
  {
    cout << "No such pair exists." << endl;
  }

  // for(int x : result){
  //   cout << x << ", ";
  // }


  return 0;
}



/*  
Output:-
---------
Enter the size:5
Input the elements into the vector:90 70 20 80 50
Enter the value n:45
No such pair exists.


Enter the size:6
Input the elements into the vector:5 20 3 2 5 80
Enter the value n:78
Pair found: (2, 80)

*/