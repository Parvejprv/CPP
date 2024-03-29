/*  
Question: Print the Row index with max sum

*/

#include<iostream>
#include<climits>

using namespace std;
// void printrowmax(int arr[][4], int n, int m){
//   int index = -1, sum = INT_MIN;

//   for (int i = 0; i < n; i++)
//   {
//     int total = 0;
//     for(int j=0; j<m; j++){
//       total += arr[i][j];
//     }
//     if(total > sum){
//       sum = total;
//       index = i;
//     }
//   }
//   cout << "index = " << index << endl;
// }
int main()
{
  int row, col;
  cout << "Enter the row size:";
  cin >> row;
  cout << "Enter the column size:";
  cin >> col;

  int arr[row][col];
  cout <<  "Input the elements into the matrix of size "<< row << " X " << col <<" : "<< endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cin >> arr[i][j];
    }
  }

  int maxSum = INT_MIN, index = -1;

  for(int i=0; i<row; i++){
    int total = 0;
    for(int j=0; j<col; j++){
      total += arr[i][j];
    }
    if(total > maxSum){
      maxSum = total;
      index = i;
    }
  }

  cout << "Row index of the Matrix with maximum sum = " << index << endl;


  return 0;
}


/*  
Output:-
--------
Enter the row size:5
Enter the column size:4
Input the elements into the matrix of size 5 X 4 : 
3 4 7 18
2 8 3 9
5 4 2 2
7 3 0 8
2 8 9 1
Row index of the Matrix with maximum sum = 0


Enter the row size:3
Enter the column size:3
Input the elements into the matrix of size 3 X 3 : 
10 20 30
40 50 60
70 80 90
Row index of the Matrix with maximum sum = 2


Enter the row size:3
Enter the column size:3
Input the elements into the matrix of size 3 X 3 : 
1 2 3 4 5 6 7 8 9
Row index of the Matrix with maximum sum = 2
*/