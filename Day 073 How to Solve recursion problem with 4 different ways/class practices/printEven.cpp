/*  
Question:-
-----------
Print the even number from 1 to N using recursion,

*/





/* Solution: 2. Passing with single parameter inside the recursive function, printing in reverse order. */


/*************************************
print(2) = 2
print(4) = print(2), 4
print(6) = print(4), 6
print(8) = print(6), 8
..
...
print(N) = print(N-2), N

**************************************/

/*  

#include<iostream>
using namespace std;
void printEven(int N){
  // Base case
  if(N == 2){
    cout << N << " ";
    return;
  }

  printEven(N-2);
  cout << N << " ";
}

int main() {
  int N;
  cout << "Enter the Number N: ";
  cin >> N;

  // Check for if N is even
  if (N % 2 == 1){
    N--;
  }
  
  // recursive function calls
  printEven(N);

  return 0;
}

*/

/*  
Output:-
----------
Enter the Number N: 11
2 4 6 8 10

Enter the Number N: 11
2 4 6 8 10

*/














/* Solution: 1. By passing two parameter to the recursive function, from (front) */


/*  

#include<iostream>
using namespace std;
void printEven(int num, int N){
  // Base case
  // if(num > N)
  //   return;

  // if(num == N){
  //   cout << num;
  //   return;
  // }

  if(num > N){
    return;
  }

  cout << num << " ";
  printEven(num+2, N);
}
int main() {
  int N;
  cout << "enter the value of N: ";
  cin >> N;

  if(N % 2 == 1)
  N--;

  // printEven()
  printEven(2, N);

}

*/

/*  
Output:-
---------
enter the value of N: 13
2 4 6 8 10 12

enter the value of N: 14
2 4 6 8 10 12 14

enter the value of N: 13
2 4 6 8 10 12

*/









/*  
Solution 2. print even from reverse order, using recursion.

*/


#include<iostream>
using namespace std;
void printEven(int N){
  // Base case
  if(N == 2){
    cout << N << " ";
    return;
  }

  printEven(N-2);
  cout << N << " ";
}
int main() {
  int N;
  cout << "enter the value of N: ";
  cin >> N;

  if(N % 2 == 1)
  N--;

  // printEven()
  printEven(N);

}

/*  
Output:-
----------
enter the value of N: 13
2 4 6 8 10 12

enter the value of N: 14
2 4 6 8 10 12 14

enter the value of N: 19
2 4 6 8 10 12 14 16 18

*/















/*  

#include<iostream>
using namespace std;
void printEven(int num, int N){
  // Base case
  if(num > N)
    return;

  cout << num << " ";
  printEven(num+2, N);
}
int main() {
  int num=2, n;
  cout << "enter the value of N : ";
  cin >> n;
  printEven(num, n);

}

*/



/*  
Output:-
----------
enter the value of N : 11
2 4 6 8 10

*/

