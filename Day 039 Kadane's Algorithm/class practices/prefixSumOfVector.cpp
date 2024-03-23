/*  
Question : find the Prefix sum of the given array | vector

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  cout << "Enter the size:";
  cin >> n;

  vector<int> arr(n);

  // create a prefix vector of size (n)
  vector<int> Prefix(n);

  cout << "Input the elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // Prefix Sum
  Prefix[0] = arr[0];    // initially
  for(int i=1; i<n; i++){
    Prefix[i] = Prefix[i-1] + arr[i];
  }

  // Let's Display the prefix sum elements
  cout << "Display the prefix sum: ";
  for(int x : Prefix){
    cout << x << " ";
  }
  
  return 0;
}

/*  
Output:-
--------
Enter the size:6
Input the elements into the vector:2 3 4 -2 5 10
Display the prefix sum: 2 5 9 7 12 22


Enter the size:5
Input the elements into the vector:2 3 4 5 10
Display the prefix sum: 2 5 9 14 24
*/