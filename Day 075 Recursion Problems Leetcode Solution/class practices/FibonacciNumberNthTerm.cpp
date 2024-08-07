/* 
Topic:- Recursion

Question 509 (Leetcode): Fibonacci series using recursive function.

Also draw a recursive tree to debug the exact answer.

*/


/******************************************************
 
f(0) = 0
f(1) = 1
f(2) = f(1) + f(0)
f(3) = f(2) + f(1)
f(4) = f(3) + f(2)
f(5) = f(4) + f(3)
f(6) = f(5) + f(4)

..
...
------------------------------
f(n) = f(n-1) + f(n-2)
------------------------------

Or
nth  = (n-1)th + (n-2)th      --> n
f(n-1)th  = f(n-2)th + f(n-3)th      --> n-1
f(n-2)th  = f(n-3)th + f(n-4)th      --> n-2


 *****************************************************/



#include<iostream>
using namespace std;
int nthFibonacciTerm(int n){
  // Base cases
  if(n <= 1){
    return n;
  }

  // or
  // if(n == 0) return 0;
  // if(n == 1) return 1;

  
  return nthFibonacciTerm(n-1) + nthFibonacciTerm(n-2);
}

int main() {
  int n;
  cout << "Enter the Nth term: ";
  cin >> n;

  int nthTerm = nthFibonacciTerm(n);
  cout << nthTerm << endl;


  return 0;
}



/*  
Output:-
---------
Enter the Nth term: 8
21

*/





















/* get the nth fibonacci term */ 


/*  


#include<iostream>
using namespace std;
long long getNthfibonacciTerm(int n){
  // Nth term can not be negative
  if(n <= 0) {
    cout << "Invalid input! Please enter a valid positive integer." << endl;
    return -1;
  }

  if (n == 1) { return 0; }
  if (n == 2) { return 1; }

  long long first = 0, second = 1;
  long long nthTerm = 0;

  for(int i=2; i<=n; i++){
    nthTerm = first + second;
    first = second;
    second = nthTerm;
  }
  return second;
}

int main() {
  int n;
  cout << "Enter term of nth number of term in the Fibonacci series: " << endl;
  cin >> n;

  long long nthTerm = getNthfibonacciTerm(n);     // get nth fibbonacci

  if(nthTerm != -1){
    cout << nthTerm << endl;
  }

  return 0;
}

*/

























/* Fibonacci series iterative way solution */
/*  


#include<iostream>
using namespace std;
void fibonacciSeries(int n){
  // Nth term can not be negative
  if(n <= 0) {
    cout << "Invalid input! Please enter a valid positive integer." << endl;
    return;
  }

  long long first = 0, second = 1;
  if(n == 1){
    cout << first << endl;
    return;
  }

  for(int i=2; i<=n; i++){
    long long next = first + second;
    cout << next << " ";
    first = second;
    second = next;
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter term of nth number of term in the Fibonacci series: " << endl;
  cin >> n;

  fibonacciSeries(n);     // print fibonacci series

  return 0;
}


*/


/*  
Ouput:-
---------
Enter term of nth number of term in the Fibonacci series: 
10
1 2 3 5 8 13 21 34 55




*/







