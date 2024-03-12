#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size: " ;
  cin >> n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=(i*i); j++){
      cout << "0" << " ";
    }
    cout << endl;
  }
}



/*  
Output:
--------
Enter the size: 5
0
0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0


Note:- Yha inner loop outer loop pr depend nhi kar rha hai, iss prakar se Time Complexity => 

here TC:
Sum of natural number of n*n (n^2) = n*(n+1)*(2n+1)/n! Or n*(n+1)*(2n+1)/6

    n*(n+1)/2 
    (n^3 + ....
=>  O(n^3)
*/