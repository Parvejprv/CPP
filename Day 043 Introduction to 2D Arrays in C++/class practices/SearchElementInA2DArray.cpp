/*  
Question: Search Element in a 2D array.

*/


#include<iostream>
#include<iomanip>

using namespace std;

int main() {
  int n, m, target;

  cout << "Enter the row size n:";
  cin >> n;
  cout << "Enter the column size m:";
  cin >> m;

  // Now, Create a 2D array
  int  arr[n][m];

  // input elements into the 2D array
  cout << "Input the element into the " << n << "X" << m <<" size of 2D array:" << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> arr[i][j];
    }
  }


  cout << "Enter the target element: " << endl;
  cin >> target;


  // Display the 2D array element
  cout << "Target element present in the 2D array or not:" << endl;
  for (int i = 0; i < n; i++)
  {
    for(int j=0; j<m; j++){
      if(arr[i][j] == target)
      {
        cout << "Yes";
        return 0;
      }
    }
    cout << endl;
  }

  cout << "No";
  
}


/*  
Output:-
---------
Enter the row size n:4
Enter the column size m:3
Input the element into the 4X3 size of 2D array:
1 2 3 4 5 6 7 8 9 10 11 12
12
Target element present in the 2D array or not:



Yes


Enter the row size n:3
Enter the column size m:4
Input the element into the 3X4 size of 2D array:
1 2 3 4 5 6 7 8 9 10 11 12
Enter the target element: 
13
Target element present in the 2D array or not:



No

*/
