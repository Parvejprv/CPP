

/*  
// Solution 1. Segregate 0 and 1()
#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector <int> arr = {1, 0, 1, 0, 1, 0};

  int count0 = 0;
  int count1 = 0;

  for(int i=0; i<arr.size(); i++){
    // if arr[i] == 0 then increase count0 and similarily arr[i] ==  1 then increase count1.
    if(arr[i] == 0)
    count0++;
    else
    count1++;
  }
  cout << "Number of zeros: "<< count0 << endl;
  cout << "Number of ones: "<< count1 << endl;

  for(int i=0; i<count0; i++)
    arr[i] = 0;
  for(int i=count0; i<arr.size(); i++)
    arr[i] = 1;

  // Display the array element
  cout << "Output elements of the vector:";
  for(int i=0; i<arr.size(); i++)
    cout << arr[i] << " ";


  return 0;
}


// Time complexity: O(n)
// Space Complexity: O(1)

*/

