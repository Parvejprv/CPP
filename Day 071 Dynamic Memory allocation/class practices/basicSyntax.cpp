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





/* - Create a 2D array with the help of pointer and also filled with elements and print those elements and also released their heap memory. */







#include<iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Enter the rows and cols size i.e. number of rows(n) and number of cols(m): " ;
  cin >> n >> m;

  int **ptr = new int *[n];

  // Create arrays with the help of pointer
  for (int i = 0; i < n; i++){
    ptr[i] = new int[m];
  }

  // filled with the value that user wants
  cout << "Enter the " << n << "x" << m << " elements into the array: " << endl;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < m; j++) 
    cin >> ptr[i][j];


  // print the elements of the array
  cout << "Display the 2D array elements:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) 
    cout << ptr[i][j] << " ";
    cout << endl;
  }

  // Release the memory, that is used in heap
  for(int i=0; i<n; i++)
  delete[] ptr[i];

  delete[] ptr;


}






/*  
Output:-
-----------
Enter the rows and cols size i.e. number of rows(n) and number of cols(m): 3 4 
Enter the 3x4 elements into the array:
1 2 3 4
4 5 6 7
7 8 9 0
Display the 2D array elements:
1 2 3 4
4 5 6 7
7 8 9 0


*/




