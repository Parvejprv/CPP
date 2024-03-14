
/*  
Question:
---------
Write a  Program to find the Nth Term of the Factorial series and print the Nth term of the factorial series.

Hint: Here first and second term of the factorial series is given bellow-
arr[0] = 0, arr[1] = 1

*/




/* Solution 2. With the help of the Function.*/

using namespace std;
#include<iostream>
int NthTermOfFactorialSeries(int n){
  // Here we know that first two term of the factorial series are-
  // arr[0] = 0;
  // arr[1] = 1;

  int arr[1000];
  arr[0] = 0;
  arr[1] = 1;

  for(int i=2; i<=n-1; i++){
    //cout << "element within the loop\n" << arr[i] << endl;
    arr[i] = arr[i-1] + arr[i-2];
  }

  // cout << arr[n-1];
  int nthElement = arr[n-1];
}
int main() {
  int n;
  cout << "Enter the Nth term of the Factorial series:";
  cin >> n;

  /* Function call */
  // Now here we have to print the Nth element of the array
  int nthElement = NthTermOfFactorialSeries(n);
  cout << "Nth Factorial term of the factorial series is:: " << nthElement;
}

/* Output:-
-----------
Enter the Nth term of the Factorial series:8
Nth Factorial term of the factorial series is:: 13

Enter the Nth term of the Factorial series:9
Nth Factorial term of the factorial series is:: 21
*/










/* Solution 1. Without Function */

/*  
#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the Nth term of the Factorial series:";
  cin >> n;

  // Here we know that first two term of the factorial series are-
  // arr[0] = 0;
  // arr[1] = 1;

  int arr[1000];
  arr[0] = 0;
  arr[1] = 1;

  for(int i=2; i<=n-1; i++){
    arr[i] = arr[i-1] + arr[i-2];
    //cout << "element within the loop\n" << arr[i] << endl;
    arr[i] = arr[i-1] + arr[i-2];
  }

  // Now here we have to print the Nth element of the array
  cout << "Nth Factorial term of the factorial series is:";
  cout << arr[n-1];
}

*/


/*  
Output:
-------

Enter the Nth term of the Factorial series:7
Nth Factorial term of the factorial series is:8

*/

