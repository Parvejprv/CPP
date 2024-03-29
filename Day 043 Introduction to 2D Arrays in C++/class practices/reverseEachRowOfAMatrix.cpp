/*  
Question: Reverse the Each row of the Matrix.
*/


// Solution 2. With the help of the function 


#include<iostream>
using namespace std;
// This allows you to specifies the size at the run time
void reverseRows(int** arr, int row, int col){
  for(int i = 0; i < row; i++){
    // with the help of two pointer approach reverse the array elements
    int start = 0, end = col - 1;
    while(start <  end){
      swap(arr[i][start], arr[i][end]);
      start++;
      end--;
    }
  }
}

int main() {
  int row, col;

  cout << "Enter the row size : ";
  cin >> row;
  cout << "Enter the column size : ";
  cin >> col;

  int** arr = new int*[row];
  for(int i=0; i<row; i++){
    arr[i] = new int[col];
  }


  cout <<  "Input the elements into the matrix of size "<< row << " X " << col <<" : "<< endl;
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cin >> arr[i][j];
    }
  }

  // Reverse the each row of the matrix
  reverseRows(arr, row, col);


  // Display the matrix element after reverse
  cout << "Display the resultant Matrix after reversing the row: " << endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout <<  arr[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}




/*  
Output:-
---------
Enter the row size : 3
Enter the column size : 3
Input the elements into the matrix of size 3 X 3 : 
1 2 3 4 5 6 7 8 9
Display the resultant Matrix after reversing the row: 
3       2       1
6       5       4
9       8       7


Enter the row size : 3
Enter the column size : 3
Input the elements into the matrix of size 3 X 3 : 
1 2 3 
4 5 6
7 8 9
Display the resultant Matrix after reversing the row: 
3       2       1
6       5       4
9       8       7

*/














/*  
// Solution 1. Without using the function.

#include<iostream>
using namespace std;

int main() {
  int row, col;

  cout << "Enter the row size : ";
  cin >> row;
  cout << "Enter the column size : ";
  cin >> col;

  int arr[row][col];
  cout <<  "Input the elements into the matrix of size "<< row << " X " << col <<" : "<< endl;
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cin >> arr[i][j];
    }
  }

  // Reverse the each row of the matrix
  for(int i=0; i<row; i++){
    int start = 0, end = col - 1;
    while(start < end){
      swap(arr[i][start], arr[i][end]);
      start++;
      end--;
    }
  }


  // Display the matrix element after reverse
  cout << "Display the resultant Matrix after reversing the row: " << endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout <<  arr[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}

*/

/*  
TC: O(n^2)
SC: O(1)
Output:-
---------
Enter the row size : 3
Enter the column size : 3
Input the elements into the matrix of size 3 X 3 : 
1 2 3
4 5 6
7 8 9
Display the resultant Matrix after reversing the row: 
3       2       1
6       5       4
9       8       7


*/

