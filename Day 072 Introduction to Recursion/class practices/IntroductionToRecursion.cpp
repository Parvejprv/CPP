/*  
Topic:-
============


============
Recursion:-
============
- A Function which calls itself again and again is known as recursive function, and that process called recursion.
- Untill the specific condition met.


Note:- Iterative approach does not used in it. It uses a function call.


Recusion said that,
===================
- If you have a large | huge problem then break them into sub-problems.
- If you are able to solve one of them then remaining problem will gonna solve itself.


*/






// 02. Single function call to main
#include<iostream>
using namespace std;

// void fun0(int n){
//   cout << "Happy Birthday!" << endl;
// }
// void fun1(int n){
//   cout << n << " days left for Birthday." << endl;
//   fun0(n-1);
// }
// void fun2(int n){
//   cout << n << " days left for Birthday." << endl;
//   fun1(n-1);
// }
// void fun3(int n){
//   cout << n << " days left for Birthday." << endl;
//   fun2(n-1);
// }

void fun3(int n){
  // Check specified condition
  if(n == 0){
    cout << "Happy Birthday!";
    return;
  }

  cout << n << " days left for Birthday." << endl;
  fun3(n-1);  // calls itself with n-1 value
}

// Iterative approach
void bdayIt(int n){
  for(int i=n; i>0; i--)
  {
    cout << i << " days left for birthday\n";
  }

  cout << "Happy Birthday!";
}

int main() {
  int n;
  cout << "enter the value of n: " ;
  cin >> n;

  // Iterative approach fun() call
  // bdayIt(n);

  cout << endl;
  // recursive function calls
  fun3(n);
  
  return 0;
}



/* 

Output:-
-----------
enter the value of n: 3
3 days left for Birthday.
2 days left for Birthday.
1 days left for Birthday.
Happy Birthday!


 

*/























/*  

// 02. Single function call to main
#include<iostream>
using namespace std;

void fun0(int n){
  cout << "Happy Birthday!" << endl;
}
void fun1(int n){
  cout << n << " days left for Birthday." << endl;
  fun0(n-1);
}
void fun2(int n){
  cout << n << " days left for Birthday." << endl;
  fun1(n-1);
}
void fun3(int n){
  cout << n << " days left for Birthday." << endl;
  fun2(n-1);
}

int main() {
  fun3(3);
  
  return 0;
}

*/


/*  
Output:-
----------
3 days left for Birthday.
2 days left for Birthday.
1 days left for Birthday.
Happy Birthday!

*/





























/************ Let suppose we want to print the countdown of birthday ... lets try to explain using the below code, ***********/


// 01.
/*  

#include<iostream>
using namespace std;

void fun3(int n){
  cout << n << " days left for Birthday." << endl;
}
void fun2(int n){
  cout << n << " days left for Birthday." << endl;
}
void fun1(int n){
  cout << n << " days left for Birthday." << endl;
}
void fun0(int n){
  cout << "Happy Birthday!" << endl;
}

int main() {
  fun3(3);
  fun2(2);
  fun1(1);
  fun0(0);

  return 0;
}

*/




/*  
Output:-
----------
3 days left for Birthday.
2 days left for Birthday.
1 days left for Birthday.
Happy Birthday!

*/
