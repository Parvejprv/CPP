/*  
Question: Print the Sum of Diagonal Element

*/

#include<iostream>
#include<climits>

using namespace std;
// // Function to print the Diagonal sum of diagonal elements
// void  printDiagonalSum(int arr[][10], int row, int col) {
//   int first = 0, second = 0, index = -1;

//   // // first diagonal sum would be
//   // for(int i=0; i<row; i++){
//   //   for(int j=0; j<col; j++){
//   //     if(i == j)
//   //       first += arr[i][j];
//   //   }
//   // } 

//   // OR

//   // first diagonal sum is
//   for(int i=0; i<row; i++){
//     first += arr[i][i];
//   }

  

//   // // second diagonal sum is
//   // for(int i = 0, j=col-1; j>=0; j--, i++){
//   //   second += arr[i][j];
//   // }

//   // OR  (with the help of while loop)

//   // second element sum would be
//   int i = 0, j = col-1;
//   while(j >= 0){
//     second += arr[i][j];
//     i++;
//     j--;
//   }



//   cout << "sum of the first and second diagonal elements are,\nfirst = " << first << ", second = " << second << endl;
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

  int first = 0, second = 0, index = -1;

  // // first diagonal sum would be
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     if(i == j)
  //       first += arr[i][j];
  //   }
  // } 

  // OR

  // first diagonal sum is
  for(int i=0; i<row; i++){
    first += arr[i][i];
  }

  

  // // second diagonal sum is
  // for(int i = 0, j=col-1; j>=0; j--, i++){
  //   second += arr[i][j];
  // }

  // OR  (with the help of while loop)

  // second element sum would be
  int i = 0, j = col-1;
  while(j >= 0){
    second += arr[i][j];
    i++;
    j--;
  }



  cout << "sum of the first and second diagonal elements are,\nfirst = " << first << ", second = " << second << endl;



  // function call
  // printDiagonalSum(arr, row, col);


  return 0;
}


/*  
Output:-
---------

Enter the row size:3
Enter the column size:3
Input the elements into the matrix of size 3 X 3 : 
1 2 3
4 5 6
7 8 9
sum of the first and second diagonal elements are,
first = 15, second = 15

*/