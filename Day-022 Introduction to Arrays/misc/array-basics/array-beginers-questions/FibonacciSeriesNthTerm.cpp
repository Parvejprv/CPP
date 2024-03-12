// arr[i] = arr[i-1] + arr[i-2];


#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[1000];


  // here, first two elements are
  arr[0] = 0;
  arr[1] = 1;

  for(int i=2; i<=n-1; i++){
    arr[i] = arr[i-1] + arr[i-2];
  }

  cout << arr[n-1];
  
}



/* 
Output:
-------
Enter the Nth term of the array: 5
Nth Term of the Fibbonacci Series: 3

*/



// ---------------------------------------



/*  
Method 2. Fibonacci series Nth term using the Function,


*/

/*  
#include<iostream>
using namespace std;
int NthTermOfFibbonacciSeries(int n){
  int arr[1000];

  if(n < 2){
    cout << "You have to enter atleast two number.";
    return -1;
  }

  // Function to find out the Nth Term of the Fibbonacci series:
  // 0, 1, 1, 2, 3, 5, 8, 13, 21, ...  

  // arr[0] = 0
  // arr[1] = 1

  
  arr[0] = 0;
  arr[1] = 1;

  for(int i=2; i<=n-1; i++){
    arr[i] = arr[i-1] + arr[i-2];
  }

  return arr[n-1];
  
}
int main() {

  int size;
  cout << "Enter the Nth term of the array: ";
  cin >> size;


  // Function to Print the Nth Fibbonacci Series

  int NthTerm = NthTermOfFibbonacciSeries(size);

  cout << size << "th Term of the Fibbonacci Series: " << NthTerm << endl; 
}
*/


/* 
Output:-
--------
Enter the Nth term of the array: 7
7th Term of the Fibbonacci Series: 8

Enter the Nth term of the array: 5
Nth Term of the Fibbonacci Series: 3

*/