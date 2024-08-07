/*  

Topic Name: 

Dynamic Memory allocation
=========================================

2D Array
=========

int **ptr = new int *[n];

for (int i = 0; i < n; i++){
  ptr[i] = new int[m];
}

// taking input into double pointer
for (int i = 0; i < n; i++){
  for (int j = 0; j < m; j++){
    cin >> ptr[i][j];
  }
}

// to release the memory block of 1-D, to delete the entrire 1-D use a loop
for(int i=0; i<n; i++){
  delete[] ptr[i];
}
// now, release these
delete[] ptr;

 
*/


#include<iostream>
using namespace std;

int main() {
  // Array create karna hai, jo store karega addresses ko
  int n, m;   // n = rows, m = cols
  cout << "Enter size of 2D array i.e. the number of rows(n) and number of columns(m):";
  cin >> n >> m;

  // Create 2D array with the help of pointer
  int **ptr = new int *[n];
  for (int i = 0; i < n; i++){
    ptr[i] = new int[m];
  }

  // taking input in 2-D array, and filled with values
  cout << "Enter the value of size "<< n << "X" << m << " into the 2D array: ";
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> ptr[i][j];
    }
  }


  // Printing the values after taking input from the user
  cout << "Display the elements of the two-dimensional array with the help of pointer: " << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
    cout << ptr[i][j] << " ";
    cout << endl;
  }


  // Release the memory block of 1-D, to delete the entire 1-D use delete[] ptr[i] inside a loop.
  for(int i=0; i<n; i++)
    delete[] ptr[i];      // release all the memory block from heap
  delete[] ptr;     // at the last delete also that memory block which is pointed by ptr too.




}





/*  
Output:-
--------
Enter size of 2D array i.e. the number of rows(n) and number of columns(m):3
4
Enter the value of size 3X4 into the 2D array: 3 6 9 8
2 4 6 8
1 3 5 7
Display the elements of the two-dimensional array with the help of pointer: 
3 6 9 8 
2 4 6 8
1 3 5 7




*/










