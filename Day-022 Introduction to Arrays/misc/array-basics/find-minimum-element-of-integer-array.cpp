/*  
Question: Find the Minimum Element of the Integer array.


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

  // Check for minimum element
  int min = INT32_MAX;
  for(int i=0; i<n; i++){
    if(arr[i] < min) {
      min = arr[i];
    }
  }

  cout << "Minimum Element of the array : " << min << endl;
}



/* 
Output:
-------
Enter the size of the Array: 5
Input the Elements into the Array :
10 20 30 4 1
Minimum Element of the array : 1


Enter the size of the Array: 5
Input the Elements into the Array :
1 2 3 4 5
Minimum Element of the array : 1


Enter the size of the Array: 5
Input the Elements into the Array :
121 101 32953 0 16543
Minimum Element of the array : 0
*/