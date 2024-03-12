/*  
Pattern 1. 
    1
   12
  123
 1234
12345



#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter size n : ";
  cin >> n;

  for(int row=1; row<=n; row++) {
    // spaces
    for(int sp=n-row; sp>=1; sp--) {
      cout << " ";
    }
    // pattern
    for(int col=1; col<=row; col++){
      cout << col;
    }
    cout << endl;
  }

}
*/



/*  
Pattern 2. 
    1
   21
  321
 4321
54321



#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter size n : ";
  cin >> n;

  for(int row=1; row<=n; row++) {
    // spaces
    for(int sp=n-row; sp>=1; sp--) {
      cout << " ";
    }
    // pattern
    for(int col=row; col>=1; col--){
      cout << col;
    }
    cout << endl;
  }

}
*/




/*  
Pattern 3. 
    A
   BA
  CBA
 DCBA
EDCBA



#include<iostream>
using namespace std;

char ans;
int main() {
  int n;
  cout << "enter size n : ";
  cin >> n;

  for(int row=1; row<=n; row++) {
    // spaces
    for(int sp=n-row; sp>=1; sp--) {
      cout << " ";
    }
    // pattern
    for(int col=row; col>=1; col--){
      ans = 'A'+col-1;
      cout << ans;
    }
    cout << endl;
  }

}
*/


/*  
Pattern 4. 
    A
   BB
  CCC
 DDDD
EEEEE



#include<iostream>
using namespace std;

char ans;
int main() {
  int n;
  cout << "enter size n : ";
  cin >> n;

  for(int row=1; row<=n; row++) {
    // spaces
    for(int sp=n-row; sp>=1; sp--) {
      cout << " ";
    }
    // pattern
    for(int col=row; col>=1; col--){
      ans = 'A'+row-1;
      cout << ans;
    }
    cout << endl;
  }

}
*/


/*  
Pattern 5. 
    5
   54
  543
 5432
54321



#include<iostream>
using namespace std;

char ans;
int main() {
  int num;
  cout << "enter size num : ";
  cin >> num;
  int row, col;
  for(row=1; row<=num; row++) {
    // spaces
    for(int sp=num; sp>row; sp--) {
      cout << " ";
    }

    // pattern
    int n = num;
    for(col=1; col<=row; col++){
      cout << n;
      n--;
    }
    cout << endl;
  }

}
*/





/*  
Pattern 5. 
    E
   ED
  EDC
 EDCB
EDCBA


*/

#include<iostream>
using namespace std;

char ans;
int main() {
  int num;
  cout << "enter size num : ";
  cin >> num;
  int row, col;
  char ch;

  for(row=1; row<=num; row++) {
    // spaces
    for(int sp=num; sp>row; sp--) {
      cout << " ";
    }

    // pattern
    int n = num;
    for(col=1; col<=row; col++){
      ch = (char)'A' + n-1;
      cout << ch;
      n--;
    }
    cout << endl;
  }

}