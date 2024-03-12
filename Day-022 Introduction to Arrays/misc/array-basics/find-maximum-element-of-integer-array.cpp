/*  
Question: Find the Maximum Element of the Integer array.


*/



#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of the Array: ";
  cin >> n;

  int arr[n];
  cout << "Input the Elements into the Array : "  << endl;
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Check for Maximum element
  int max = INT32_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] > max) {
      max = arr[i];
    }
  }

  cout << "Maximum Element of the array : " << max << endl;
}



/* 
Output:
-------
Enter the size of the Array: 5
Input the Elements into the Array :
10 20 30 4 1
Maximum Element of the array : 30


Enter the size of the Array: 5
Input the Elements into the Array :
1 2 3 4 5
Maximum Element of the array : 5


Enter the size of the Array: 5
Input the Elements into the Array :
121 101 32953 0 16543
Maximum Element of the array : 32953
*/