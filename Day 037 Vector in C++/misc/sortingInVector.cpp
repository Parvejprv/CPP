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

  // sort vector element ascending order
  sort(ans.begin(), ans.end());
  // print the vector element after sorting
  for(int ele : ans)
  cout << ele << " ";
  cout << "\n" << endl;

  // sort vector element descending order
  sort(ans.begin(), ans.end(), greater<int>());
  // print the vector element after sorting
  for(int ele : ans)
  cout << ele << " ";
  cout  << endl;
  sort(ans.rbegin(), ans.rend());
  // print the vector element after sorting
  for(int ele : ans)
  cout << ele << " ";
  cout << "\n" << endl;

  // remove duplicates from sorted vector
  auto it = unique(ans.begin(), ans.end());
  ans.resize(it - ans.begin());

  int n = ans.size();
  cout << n << "";

  return 0;
}

/*  
Output:-
-----------
size = 6
capacity = 8
5 15 54 54 125 235

235 125 54 54 15 5
235 125 54 54 15 5

5

*/