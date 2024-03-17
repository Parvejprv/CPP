#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
  vector<int> v;
  v.push_back(9);
  v.push_back(4);
  v.push_back(10);
  v.push_back(1);
  v.push_back(5);

  // display the vector elements
  cout << "The vector contains: ";
  for (auto i : v){
    cout << i << " ";
  }
  cout << endl;

  // Sort the vector elements, in increasing order
  sort(v.begin(), v.end());
  cout << "After Sorting display the vector elements: ";
  for (auto i : v){
    cout << i << " ";
  }
  cout << endl;

  // Sort the vector element in decreasing order
  sort(v.begin(), v.end(), greater<int>());
  cout << "Sorting the elements from end: ";
  for (auto i : v){
    cout << i << " ";
  }
  cout << endl;

  // reverse the vector in reverse order,
  reverse(v.begin(), v.end());
  cout << "Sorting the elements from end: ";
  for (auto i : v){
    cout << i << " ";
  }
  cout << endl;


  return 0;
}


/*  
Output:-
---------
The vector contains: 9 4 10 1 5 
After Sorting display the vector elements: 1 4 5 9 10      
Sorting the elements from end: 10 9 5 4 1

*/