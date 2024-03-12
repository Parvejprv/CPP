/*  
Question: Find the Size of the array elements using the sizeof() of character type.
*/

#include<iostream>
using namespace std;
int main() {
  char charArray[5] = {'a', 'b', 'c', 'd', 'e'};
  cout << "Size of array is:" << sizeof(charArray)/sizeof(charArray[0]) << endl;
  cout << "sizeof(arr): " << sizeof(charArray) << endl;
  cout << "sizeof(arr[0]): " << sizeof(charArray[0]) << endl;

  float flArray[4] = {3.5, 6.5, 10.3, 100.2};
  cout << "\nSize of float Array:\n";
  sizeof(flArray)/sizeof(flArray[0]);
   cout << "sizeof(arr): " << sizeof(flArray) << endl;
  cout << "sizeof(arr[0]): " << sizeof(flArray[0]) << endl;

}


/*  
Output:
---------

Size of array is:5
sizeof(arr): 5
sizeof(arr[0]): 1

Size of float Array:
sizeof(arr): 16
sizeof(arr[0]): 4 

*/