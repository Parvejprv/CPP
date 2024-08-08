/*  
Question: Perfect sum problem
-------------------------------

*/

#include<iostream>
#include<vector>
using namespace std; 
int find(int arr[], int index, int n, vector<pair<int, vector<int>>>& ans, vector<int> &temp, int target) {
  // Base case
  if(target == 0){
    ans.push_back({target, temp});
    return 1;
  }
  if(index == n || target < 0)  return 0;

  int count = 0;
  // Recursive case
  temp.push_back(arr[index]);
  count += find(arr, index+1, n, ans, temp, target-arr[index]);
  temp.pop_back();

  count += find(arr, index+1, n,ans, temp, target);

  return count;
}

int main() {
  int arr[] = {2, 5, 6, 1};
  int target = 8;

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;

  vector<pair<int, vector<int>>> ans;
  vector<int> temp;
  int countPerfectSum = find(arr, index, n, ans, temp, target);



  // let try to find out the target as 8
  cout << "Lets find the target : " << target << endl;
  cout << "Count = " << countPerfectSum << endl;

  for(int i=0; i<ans.size(); i++){
    cout << ans[i].first << " - ";
    for(int j=0; j<ans[i].second.size(); j++){
      cout << ans[i].second[j] << " ";
    }
    cout << endl;
  }
}


/*  
Output:-
---------
Lets find target : 8
2


Lets find target : 8
0 - 2 5 1
0 - 2 6


Lets find the target : 8
Count = 2
0 - 2 5 1
0 - 2 6


*/

