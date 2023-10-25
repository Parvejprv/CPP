/* 
  Author    :     Parvej Alam
  Date      :     08-10-2k23

*/

// Question:- Array initialization



/*  
Array initialization with size.
-------------------------------
#include<iostream>
using namespace std;

int main() {
  int arr[10];      // array initialization with size 10

  for(int i=1; i<=9; i++){
    cout << i << "\n";
  }
}
*/



/* 
Method:- 2
-----------

#include<iostream>
using namespace std;
int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 4, 8, 10, 100};      // array initialization with array elements

  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "size of the array = " << size << endl;

  for(int i=0; i<=size ; i++){
    cout << arr[i] << endl;
  }

  return 0;
}

*/



/*  
Method:- 3
-----------

Here we are taking the size and array element input from the users,

#include<iostream>
using namespace std;
int main() {
  int size;

  cout << "Enter the Size of the array : ";
  cin >> size;
  cout << "size of the array = " << size << endl;

  int arr[size];  // Creating an array that would take size input for the array,

  // a loop for taking element input into the array
  cout << "enter the element into the array : \n";
  for(int i=0; i<size ; i++){
    cin >> arr[i];
  }

  // a loop for printing the array element
  cout << "Output array :: \n";
  for(int i=0; i<size ; i++){
    cout << arr[i] << endl;
  }

  return 0;
}
*/









/* 
****************************************************
With the help of the Function
-------------------------------
****************************************************
*/



/*  
Method to print the array of size(n)
------------------------------------

#include<iostream>
using namespace std;


void printArray(int arr[],int n) {
  // a loop for taking element input into the array
  cout << "enter the element into the array : \n";
  for(int i=0; i<n ; i++){
    cout << arr[i] << endl;
  }
}

int main() {
  int size;

  cout << "Enter the Size of the array : ";
  cin >> size;
  cout << "size of the array = " << size << endl;

  int arr[size];  // Creating an array that would take size input for the array,

  // a loop for taking element input into the array
  cout << "enter the element into the array : \n";
  for(int i=0; i<size ; i++){
    cin >> arr[i];
  }

  // displayArrayElements(size)
  printArray(arr, size);

  return 0;
}


*/





/*  
Print the array in reverse Order:-
----------------------------------

#include<iostream>
using namespace std;


void printArray(int arr[],int n) {
  // a loop for taking element input into the array
  for(int i=n-1; i>=0 ; i--){
    cout << arr[i] << endl;
  }
}

int main() {
  int size;

  cout << "Enter the Size of the array : ";
  cin >> size;
  cout << "size of the array = " << size << endl;

  int arr[size];  // Creating an array that would take size input for the array,

  // a loop for taking element input into the array
  cout << "enter the element into the array : \n";
  for(int i=0; i<size ; i++){
    cin >> arr[i];
  }

  // displayArrayElements(size)
  printArray(arr, size);

  return 0;
}

*/




/*  
Search a specific element of the array:-
----------------------------------------



*/


#include<iostream>
using namespace std;


int Search(int arr[],int n, int X) {
  // a loop for taking element input into the array
  //for(int i=0; i<n ; i++)  OR
  for(int i=n-1; i>=0 ; i--){
    // cout << arr[i] << endl;
    if (arr[i] == X)
    return i;
  }
  return -1;
}

int main() {
  int size, searchElem;

  cout << "Enter the Size of the array : ";
  cin >> size;

  int arr[size];  // Creating an array that would take size input for the array,

  // a loop for taking element input into the array
  cout << "enter the element into the array : \n";
  for(int i=0; i<size ; i++){
    cin >> arr[i];
  }

  cout << "Enter the search element  = ";
  cin >> searchElem;

  // Search() element into the array
  int res = Search(arr, size, searchElem);
  if(res < 0){
    cout << "Element Not Found! : " << res;
  } else {
    cout << "Found at index : " << res;
  }

  return 0;
}
