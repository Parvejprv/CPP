/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  This Program belongs to while loop for CPP Learning.
*/

// 2). Here we need to print the table using the while loop, in cpp

#include<iostream>
using namespace std;

int main() {

  int n, i=1;
  cout << "Enter no. ";
  cin >> n;
  
  cout << "Table of number" << n << " is " << endl;
  while(i <= 10) {
    cout << n << " * " << i << " = " << n*i << endl;
    i++;
  }
  
}

/* 
Output:

Enter no. 8
Table of number8 is
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
8 * 9 = 72
8 * 10 = 80

*/