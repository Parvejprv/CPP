/* 
    Author    :   Parvej Alam
    Date      :    01-10-2k23 | 1:16 AM


  Type Casting:
  -------------
  The Process in which the compiler  automatically converts one data type to another one.

  Or 

  The Procee of converting one data type into another data type is known as type casting or type conversion, some we expelicietly forcefully do the type conversion.

 */ 


/* 
#include<iostream>
using namespace std;
int main() {


  // int a = 20.5;         // possible lossy conversion
  // cout << "The value of 'a' : " << a;




  // // here is the another example of type conversion
  // Let suppose here is the example,
  //     eg:-
  //     int a;  (32 bit)
  //     double d = 2387.6431;     (64 bit)

  //     What if we store 64 bit data in a 32 bit then it is sure that there will be dataloss.

  //      1      1     4     8
  //     bool -> char -> int -> double
}
*/





#include<iostream>
using namespace std;

int main() {

  // (i).
  // int a = 10;
  // char c = 'b';
  // a = c;
  // cout << a;
  
  // (ii).
  // int a = 66;
  // char c = 'd';
  // c = a;
  // cout << c;

  // (iii).
  int a = 121121;
  char c = 'd';
  c = a;
  cout << c;
}