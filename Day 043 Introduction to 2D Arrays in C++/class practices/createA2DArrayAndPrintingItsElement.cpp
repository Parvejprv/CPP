/*  

Question: take element input from the keyboard from the user and print them using the 2D array.

*/



// #include<iostream>
// #include<iomanip>

// using namespace std;
// void print2DArray(int arr[][m], int n, int m){
//   // Display the 2D array element
//   cout << "Display the 2D array elements:" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     for(int j=0; j<m; j++){
//       cout << setw(2) << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }
// int main() {
//   int n, m;

//   cout << "Enter the row size n:";
//   cin >> n;
//   cout << "Enter the column size m:";
//   cin >> m;

//   // Now, Create a 2D array
//   int  arr[n][m];

//   // input elements into the 2D array
//   cout << "Input the element into the " << n << "X" << m <<" size of 2D array:" << endl;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//       cin >> arr[i][j];
//     }
//   }

//   // Display
//   print2DArray(arr, n, m);
  

//   return 0;
// }















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


  // Display the 2D array element
  cout << "Display the 2D array elements:" << endl;
  for (int i = 0; i < n; i++)
  {
    for(int j=0; j<m; j++){
      cout << setw(2) << arr[i][j] << " ";
    }
    cout << endl;
  }
  

  return 0;
}


*/


/*  
Output:-
---------
Enter the row size n:4
Enter the column size m:3
Input the element into the 4X3 size of 2D array:
1 2 3 4 5 6 7 8 9 10 11 12
Display the 2D array elements:
 1  2  3
 4  5  6
 7  8  9
10 11 12

*/






// Solution:- print the array element 
/*  
#include<iostream>
#include<iomanip>

using namespace std;
void print2DArray(int arr[][4], int row
, int col){
  // Display the 2D array element
  cout << "Display the 2D array elements:" << endl;
  for (int i = 0; i < row; i++)
  {
    for(int j=0; j<col; j++){
      cout << setw(2) << arr[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  // int row, col;

  // // Input row and column sizes
  // cout << "Enter the number of rows: ";
  // cin >> row;
  // cout << "Enter the number of columns: ";
  // cin >> col;

  // Now, Create a 2D array
  int  arr[3][4];

  // input elements into the 2D array
  cout << "Input the element into the " << 3 << "X" << 4 <<" size of 2D array:" << endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      cin >> arr[i][j];
    }
  }

  // Display
  print2DArray(arr, 3, 4);
  

  return 0;
}

*/


/*  
Output:-
---------
Input the element into the 3X4 size of 2D array:
1 2 3 4 5 6 7 8 9 10 11 12
Display the 2D array elements:
 1  2  3  4
 5  6  7  8
 9 10 11 12

*/









// Find the element if it is present into the array.

#include<iostream>
#include<iomanip>

using namespace std;
void print2DArray(int **arr, int row
, int col, int x){
  // Display the 2D array element
  cout << "Display the 2D array elements:" << endl;
  for (int i = 0; i < row; i++)
  {
    for(int j=0; j<col; j++){
      if(arr[i][j] == x){
        cout << "Yes ";
        return ;
      }
    }
  }
  cout << "No ";
}
int main() {
  int row, col;

  // Input row and column sizes
  cout << "Enter the number of rows: ";
  cin >> row;
  cout << "Enter the number of columns: ";
  cin >> col;

  // Now, Create a 2D array
  // int  arr[row][col];/* not work */

  // Dynamically allocate memory for the 2D Array
  int **arr = new int*[row];
  for(int i = 0; i < row; i++){
    arr[i] =  new int[col];
  }

  // input elements into the 2D array
  cout << "Input the element into the " << row << "X" << col <<" size of 2D array:" << endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cin >> arr[i][j];
    }
  }


  // enter the target
  int target;
  cout << "Enter the target element : ";
  cin >> target ;


  // Display
  print2DArray(arr, row, col, target);
  

  return 0;
}

