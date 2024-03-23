#include<iostream>
#include<vector>

using namespace std;

int main(){
  // vector <int> arr = {1, 0, 1, 0, 1, 0};
  int n;
  
  cout << "Enter the size: ";
  cin >> n;

  vector<int> arr(n);
  // Input elements into the vector
  cout << "Input the elements 0, 1 into the vector:";
  for(int i=0; i<arr.size(); i++){
    cin >> arr[i];
  }

  

  // // Display the array element
  // cout << "Input the elements into the vector:";
  // for(int i=0; i<arr.size(); i++){
  //   cout << arr[i] << " ";
  // }


  return 0;
}