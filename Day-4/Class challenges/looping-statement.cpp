/* 
        Author    :     Parvej Alam
        Date      :     01-10-2023


        Description : Looping statements 
*/



/* 
What are the Loops:-
--------------------
Loops in Programming is used to repeatation or iterate the statement at a specified number of times. It is also known as iterative statement.


There are Three types of Looping statement:-
 (i). For loop
 (ii). While loop
 (iii). do-while loop

 (1). For Loop:-
      -----------
      For loop is used to iterate the loop till the fixed number of time. It consist initialization, condition and updation in it. It makes our code easier as per the iteration

      Syntax:-
      --------
      for(int i=0; i<=5; i++) {
        // statement1 goes here
        // statement2 goes here
      }

*/


// (1). Let say here I want to repeat the "hello world!" 5 time.

#include<iostream>
using namespace std;

int main() {

  // // By the  simple way repeat 5 times to print 5 times "hello world!", but it would be difficult if I am saying do it 1L, 2L, etc It would be difficult (Without loop)
  // cout << "Hello World!";
  // cout << "Hello World!";
  // cout << "Hello World!";
  // cout << "Hello World!";
  // cout << "Hello World!";



  // With the help of loop, we can do it more easily
  // for(int i=0; i<5; i++){
  //   cout <<  "Hello Learner!" << endl;
  // }



  // Also, we can take input the size, how many times I want to repeat.
  int size;
  cout << "Enter the Size : ";
  cin >> size;

  for(int i=1; i<=size; i++){
    cout <<  "Hello World!" << endl;
  }
}