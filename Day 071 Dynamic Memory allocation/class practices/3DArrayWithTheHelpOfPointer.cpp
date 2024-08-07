/*  
Topic"-
========== 

3-D Array with the help of pointer.
--------------------------------------

Ans:-
To create a 3D array need to follow the further steps,
1. create an array [] of size l, that would contains an array of addresses, and again this array also contains an array of address. And that array contains the values of integer type (here it is an integer type).

  int **[l];

2. To create memory block in heap use a new keyword. And store that in a Triple pointer of integer type.
int ***ptr = new int **[l];


Syntax:-
int ***ptr = new int **[l];
for(int i=0; i<l; i++){
  ptr[i] = new int *[b];
  for(int j=0; j<b; j++){
    ptr[i][j] = new int[h];
  }
}


*/


#include<iostream>
using namespace std;

int main() {
  int l, b, h;
  cout << "Enter the length(l) breadth(b) and height(h) size of 3-D array: " ;
  cin >> l >> b >> h;

  /*********  Create 3-D array with the help of pointer *********/

  // create a 1-D array that gonna store the address of 2-D array
  int ***ptr = new int **[l];
  for (int i = 0; i < l; i++){

    // create 2-D array and store it's address in ptr
    ptr[i] = new int *[b];
    for(int j=0; j<b; j++){
      ptr[i][j] = new int[h];
    }
  }

  // filled with the value that user wants
  cout << "Enter the " << l << "x" << b << "x" << h << " elements into the array: " << endl;
  for(int k=0; k<l; k++)
  for (int i = 0; i < b; i++) 
    for (int j = 0; j < h; j++) 
    cin >> ptr[k][i][j];


  // print the elements of the array
  cout << "Display the 3D array elements:" << endl;
  for(int k=0; k<l; k++){
    for (int i = 0; i < b; i++) {
      for (int j = 0; j < h; j++) 
        cout << ptr[k][i][j] << " ";
      cout << endl;
    }
    cout << endl;
  }

  // Release the memory from 3D array, that is used in heap
  for(int i=0; i<l; i++){
    for(int j=0; j<b; j++){
      delete[] ptr[i][j];
    }
    delete[] ptr[i];
  }
  delete[] ptr;


}






/*  
Output:-
-----------
Enter the length(l) breadth(b) and height(h) size of 3-D array: 3 3 3
Enter the 3x3x3 elements into the array: 
1 2 3
3 4 5
5 6 7
7 6 5
5 4 3
3 2 1
4 5 6
6 7 8
7 8 9
Display the 3D array elements:
1 2 3
3 4 5
5 6 7

7 6 5
5 4 3
3 2 1

4 5 6
6 7 8
7 8 9





Enter the length(l) breadth(b) and height(h) size of 3-D array: 2 2 2
Enter the 2x2x2 elements into the array: 
1 2
3 4
5 6 
7 8
Display the 3D array elements:
1 2 
3 4 

5 6 
7 8 



*/




