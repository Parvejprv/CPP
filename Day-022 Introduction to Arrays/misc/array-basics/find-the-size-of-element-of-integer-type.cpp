/*  
Question: Find the Size of the elements using the sizeOf().
*/

#include<iostream>
using namespace std;
int main() {
  int arr[5] = {8, 0, 2, 4, 5};
  cout << "Size of array is:" << sizeof(arr)/sizeof(arr[0]) << endl;
  cout << "sizeof(arr): " << sizeof(arr) << endl;
  cout << "sizeof(arr[0]): " << sizeof(arr[0]) << endl;
}


/*  
Output:
---------

Size of array is:5
sizeof(arr): 20
sizeof(arr[0]): 4

*/