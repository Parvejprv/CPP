/*  
Question : find the Suffix sum of the given array | vector

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  cout << "Enter the size:";
  cin >> n;

  vector<int> arr(n);

  // create a Suffix vector of size (n)
  vector<int> Suffix(n);

  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Suffix Sum
  Suffix[0] = arr[n-1];    // initially
  for (int i = n-2; i >= 0; i--){
    Suffix[i] = Suffix[i-1] + arr[i];
  }

  // Let's Display the prefix sum elements
  cout << "Display the prefix sum: ";
  for(int x : Suffix){
    cout << x << " ";
  }
  
  return 0;
}