/*  
Question : find the Prefix sum of the given array | vector

*/

// Solution 2. With the help of the Function

#include<iostream>
#include<vector>
using namespace std;
void fillPrefixSum(vector<int>& v, int n, vector<int>& Prefix){
  Prefix[0] = v[0];

  // Add Present element with previous element, and start loop from 1
  for(int i=1; i<n; i++){
    Prefix[i] = Prefix[i-1] + v[i];
  }
}

int main() {
  int n;
  cout << "Enter the size:";
  cin >> n;

  vector<int> v(n);
  cout << "Input the integer elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }

  vector<int> Prefix(n);    // resultant vector
  
  // Function call
  fillPrefixSum(v, n, Prefix);

  // Display the integer vector of Prefix sum
  for(int i=0; i<n; i++){
    cout << Prefix[i] << " ";  
  }

  return 0;
}

/*  
Output:-
--------
Enter the size:5
Input the integer elements into the vector:2 3 4 5 10
2 5 9 14 24 


Enter the size:6
Input the integer elements into the vector:2 3 4 -10 5 20
2 5 9 -1 4 24 
*/
















/* 
// Solution. 1:  Without Using the Function:  

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




*/

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