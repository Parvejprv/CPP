/*  
4. Swap the two number without using any extra variable.
*/




#include<iostream>
using namespace std;

// swapping of numbers without using an extra variable
void Swap(int a, int b) {
  cout << "before swap\n";
  cout <<a<< " " <<b<< endl;
  a = (a + b);
  b = (a - b);
  a = (a - b);

  cout << "after swap\n";
  cout <<a<< " " <<b<< endl;
}

int main() {
  int a, b;
  cout << "enter two numbers a, b : ";
  cin >> a >> b;
  
  // Function call
  Swap(a, b);
}







/*  
Solution: 1. (With the help of the function)
---------------------------------------------

#include<iostream>
using namespace std;


// swapping of numbers without using an extra variable
int Swap(int &a, int &b) {
  cout << "before swap\n";
  cout <<a<< " " <<b<< endl;
  a = (a + b);
  b = (a - b);
  a = (a - b);
}

int main() {
  int a, b;
  cout << "enter two numbers a, b : ";
  cin >> a >> b;
  
  // Function call
  Swap(a, b);

  cout << "after swap\n";
  cout <<a<< " " <<b<< endl;
  
}

*/






/* 
Solution: 2. (Without Function)
--------------------------------

#include<iostream>
using namespace std;
int main() {
  int a, b;
  cout << "enter two numbers a, b : ";
  cin >> a >> b;
  // swapping of numbers without using an extra variable
  cout << "before swap\n";
  cout <<a<< " " <<b<< endl;
  a = (a + b);
  b = (a - b);
  a = (a - b);

  cout << "after swap\n";
  cout <<a<< " " <<b<< endl;
  
}
*/