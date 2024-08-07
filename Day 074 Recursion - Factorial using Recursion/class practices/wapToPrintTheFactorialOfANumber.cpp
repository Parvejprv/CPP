/*  
Topic:
---------
Recursion


Question : WAP a CPP to print return the factorial of a number using recursion.

*/

#include<iostream>
using namespace std;
int fact(int N){
  if (N == 1 || N == 0) return 1; 
  
  return N*fact(N-1);
}

int main() {
  int n;
  cout << "Enter the value of N: ";
  cin >> n;

  if(n < 0){
    cout << "Factorial is not possible!";
    return 0;
  }
  cout << fact(n) << endl;

}

/*  
Output:-
-----------
Enter the value of N: 5
120

Enter the value of N: 6
720


Enter the value of N: -6
Factorial is not possible!


Enter the value of N: 100
0

*/




