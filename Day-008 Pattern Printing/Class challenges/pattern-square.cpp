/*  
Pattern 1. (Square Star Pattern)

*****
*****
*****
*****
*****


Pattern 2. (Square printing i Pattern)

11111
22222
33333
44444
55555

Pattern 3. (Square printing  j Pattern)

12345
12345
12345
12345
12345

Pattern 4. (Triangle printing i Pattern)

1
22
333
4444
55555

Pattern 5. (Triangle printing j Pattern)

1
12
123
1234
12345






*/


#include<iostream>
using namespace std;

int main() {
  

  /* 1. Square Star Pattern */
  // for(int i=1; i<=5; i++) {
  //   for(int j=1; j<=5; j++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  /* square printing i pattern */
  // for(int i=1; i<=5; i++) {
  //   for(int j=1; j<=5; j++) {
  //     cout << i;
  //   }
  //   cout << endl;
  // }

  /*Square Printing j pattern */
  // for(int i=1; i<=5; i++) {
  //   for(int j=1; j<=5; j++) {
  //     cout << j;
  //   }
  //   cout << endl;
  // }


  /*Triangle Printing i pattern */
  for(int i=1; i<=5; i++) {
    for(int j=1; j<=i; j++) {
      cout << i;
    }
    cout << endl;
  }

  /*Triangle Printing j pattern */
  for(int i=1; i<=5; i++) {
    for(int j=1; j<=i; j++) {
      cout << j;
    }
    cout << endl;
  }

}