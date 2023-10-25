/* 
Pattern 7. Triangle pattern with spacing

    *
   ***
  *****
 *******
*********




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
    for(int j=1; j<=(2*i)-1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
*/








/* 
Pattern 8. Triangle pattern with spacing

    1
   123
  12345
 1234567
123456789




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
    for(int j=1; j<=(2*i)-1; j++) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
*/


/* 
Pattern 9. Triangle pattern with spacing

    1
   222
  33333
 4444444
555555555




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
    for(int j=1; j<=(2*i)-1; j++) {
      cout << i;
    }
    cout << endl;
  }
  return 0;
}
*/



/* 
Pattern 10. Triangle pattern with spacing

555555555
 4444444
  33333
   222
    1




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  for(int i=n; i>=1; i--){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=1; j<=(2*i)-1; j++) {
      cout << i;
    }
    cout << endl;
  }
  return 0;
}
*/


/* 
Pattern 11. Triangle pattern with spacing

123456789
 1234567
  12345
   123
    1




#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  for(int i=n; i>=1; i--){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=1; j<=(2*i)-1; j++) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
*/


/* 
Pattern 12. Triangle pattern with spacing

*********
 *******
  *****
   ***
    *



*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  for(int i=n; i>=1; i--){
    // space
    for(int k=1; k<=n-i; k++) {
      cout << " ";
    }
    // pattern
    for(int j=1; j<=(2*i)-1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}