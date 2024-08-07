/*  

Quesiton :- 
reference variable
*/



#include<iostream>
using namespace std;

int main() {
  int num = 100;
  int &temp = num;      // temp and num are same because they are pointing to the same var
  cout<<temp<<endl;     // 100
  temp++;
  cout<<num<<endl;  // prints 101

  // Now, How can we say that these two are pointing to the same
  // location in memory? Let verify and check
  cout<<&temp<<endl;  // prints the memory location of num
  cout<<&num<<endl;   // prints the memory location of num


}



/*  
Output:-
----------
100
101
0x61ff08
0x61ff08


// So, here we can say that they are pointing to same var

*/








