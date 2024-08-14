#include<iostream>
using namespace std;
class test {
  char c;
  int a;
  char d;

};

int main() {

  test t;
  cout << sizeof(t) << endl;
  return 0;
}


/* 
Note:
The output of the above code will be 8 on a 64-bit system and 4 on a 32-bit system. This is because the size of an int is 4 bytes on a 32-bit system and 8 bytes on a 64-bit system. The size of a char is 1 byte, so it does not affect the total size of the struct.

1 byte = multiple of 1 
4 bytes = multiple of 4
8 bytes = multiple of 8


Output:
----------
(Noting inside it)
1

(int)
4

(int & char)
8       // it uses the segment to read the size in form of chunks and it uses padding here

(int & char & char)
8     // it also uses padding here


(char & int & char)
12    // multiple of 1 and takes padding , multiple of 4, multiple of 1 and take padding

*/


