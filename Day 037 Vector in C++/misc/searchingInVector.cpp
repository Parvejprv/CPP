#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> ans;
  ans.push_back(5);
  ans.push_back(235);
  ans.push_back(15);
  ans.push_back(54);
  ans.push_back(54);
  ans.push_back(125);

  cout << "size = " << ans.size() << endl;
  cout << "capacity = " << ans.capacity() << endl;

  // saerch in binary search in vector element
  sort(ans.begin(), ans.end());   // sort the vector 5 15 54 54 125 235
  // if search element present then it would return 1 otherwise 0
  cout << "Searching for 54 : ";
  cout << binary_search(ans.begin(), ans.end(), 54) << endl;
  

  cout << "size = " << ans.size() << endl;
  cout << "capacity = " << ans.capacity() << endl;
  // find the index of a particular index
  int findInd = find(ans.begin(), ans.end(), 54) - ans.begin();
  cout << "Given element present at index: " << findInd << endl;
  cout << "size = " << ans.size() << endl;
  cout << "capacity = " << ans.capacity() << endl;


  // lower-bound
  int lb = lower_bound(ans.begin(), ans.end(), 54) - ans.begin();
  cout << "Lower bound of 54 is: " << lb << endl;
  // upper-bound
  int ub = upper_bound(ans.begin(), ans.end(), 54) - ans.begin();
  cout << "Upper bound of 54 is: " << ub << endl;
  

  return 0;
}

/*  
Output:-
-----------
size = 6
capacity = 8
Searching for 54 : 1
size = 6
capacity = 8
Given element present at index: 2
size = 6
capacity = 8
Lower bound of 54 is: 2
Upper bound of 54 is: 4

*/