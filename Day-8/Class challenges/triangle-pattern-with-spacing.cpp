/* 
Pattern 1. Triangle pattern with spacing

    1
   22
  333
 4444
55555




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  for(int i=1; i<=n; i++){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=1; j<=i; j++) {
      cout << i;
    }
    cout << endl;
  }
}
*/






/* 
Pattern 2. Triangle pattern with spacing

    1
   12
  123
 1234
12345




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  for(int i=1; i<=n; i++){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=1; j<=i; j++) {
      cout << j;
    }
    cout << endl;
  }
}
*/



/* 
Pattern 3. Triangle pattern with spacing

    A
   AB
  ABC
 ABCD
ABCDE




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  char ans;

  for(int i=1; i<=n; i++){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=1; j<=i; j++) {
      ans = 'A'+j-1;
      cout << ans;
    }
    cout << endl;
  }
}
*/








/* 
Pattern 4. Triangle pattern with spacing

    A
   BA
  CBA
 DCBA
EDCBA




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  char ans;

  for(int i=1; i<=n; i++){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=i; j>=1; j--) {
      ans = 'A'+j-1;
      cout << ans;
    }
    cout << endl;
  }
}
*/



/* 
Pattern 5. Triangle pattern with spacing

    A
   BB
  CCC
 DDDD
EEEEE




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  char ans;

  for(int i=1; i<=n; i++){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=i; j>=1; j--) {
      ans = 'A'+i-1;
      cout << ans;
    }
    cout << endl;
  }
}
*/




/* 
Pattern 6. Triangle pattern with spacing

    1
   21
  321
 4321
54321



*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  for(int i=1; i<=n; i++){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=i; j>=1; j--) {
      cout <<  j;
    }
    cout << endl;
  }
  return 0;
}