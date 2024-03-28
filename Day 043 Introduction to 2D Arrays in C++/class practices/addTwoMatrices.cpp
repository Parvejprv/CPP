/*  
Question: add two Matrices using the two dimentional array.

*/


// Solution 2. With the help of the function
#include <iostream>
using namespace std;
void addMatrices(int arr[][100], int arr2[][100], int arr3[][100], int n, int m){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      arr3[i][j] = arr[i][j] + arr2[i][j];
    }
  }
}
int main() {
  int n, m;

  cout << "Enter the row size:";
  cin >> n;
  cout << "Enter the column size:";
  cin >> m;

  // Now, Create 2D arrays
  int arr[n][100];
  int arr2[n][100];
  int arr3[n][100] = {0};   // Resultant matrix and initialized with 0

  // Input elements into the first 2D array
  cout << "Input the elements into the " << n << "X" << m << " size of 2D array 1:" << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> arr[i][j];
    }
  }
  // Input elements into the second 2D array
  cout << "Input the elements into the " << n << "X" << m << " size of 2D array 2:" << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> arr2[i][j];
    }
  }

  // Call function to add the matrices
  addMatrices(arr, arr2, arr3, n, m);

  // Display the resultant matrix
  cout << "Displaying the resultant matrix:" << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout << arr3[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*  
Output:-
---------
Enter the row size:2
Enter the column size:2
Input the elements into the 2X2 size of 2D array 1:
1 2 3 4
Input the elements into the 2X2 size of 2D array 2:
1 2 3 4
Displaying the resultant matrix:
2 4
6 8


Enter the row size:2
Enter the column size:2
Input the elements into the 2X2 size of 2D array 1:
1 2 3 4
Input the elements into the 2X2 size of 2D array 2:
4 3 2 1
Displaying the resultant matrix:
5 5
5 5

*/








/*  
// Solution 1. Without using the function

#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n, m;

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

  // Now, Create a 2D array
  int  arr2[n][m];

  // input elements into the 2D array
  cout << "Input the element into the " << n << "X" << m <<" size of 2D array2:" << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> arr2[i][j];
    }
  }


  int arr3[n][m];    // resultant matrix
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      arr3[i][j] = (arr[i][j] + arr2[i][j]);
    }
  }





  // Display the 2D array element
  cout << "Display ( Resultant Matrix) the 2D array elements:" << endl;
  for (int i = 0; i < n; i++)
  {
    for(int j=0; j<m; j++){
      cout << setw(2) << arr3[i][j] << " ";
    }
    cout << endl;
  }
  

  return 0;
}

*/



/*  
Output:-
----------
Enter the row size n:2
Enter the column size m:2
Input the element into the 2X2 size of 2D array:
1 2 3 4 
Input the element into the 2X2 size of 2D array2:
1 2 3 4
Display the 2D array elements:
 2  4
 6  8



Enter the row size n:3
Enter the column size m:3
Input the element into the 3X3 size of 2D array:
1 2 3 4 5 6 7 8 9
Input the element into the 3X3 size of 2D array2:
9 8 7 6 5 4 3 2 1
Display ( Resultant Matrix) the 2D array elements:
10 10 10
10 10 10
10 10 10


Enter the row size n:3
Enter the column size m:4
Input the element into the 3X4 size of 2D array:
1 2 3 4 5 6 7 8 9 10 11 12
Input the element into the 3X4 size of 2D array2:
12 11 10 9 8 7 6 5 4 3 2 1
Display ( Resultant Matrix) the 2D array elements:
13 13 13 13
13 13 13 13
13 13 13 13
*/