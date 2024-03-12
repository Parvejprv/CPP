#include<iostream>
using namespace std;
int main() {
  int n, m;
  cout << "Enter the size n: " ;
  cin >> n;
  cout << "Enter the size m: " ;
  cin >> m;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      cout << "0" << " ";
    }
    cout << endl;
  }
}



/*  
Output:
--------
Enter the size n: 5
Enter the size m: 5
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

Note:- Yha inner loop outer loop pr depend nhi kar rha hai, iss prakar se Time Complexity => 

here TC:
  O(n*m)
  O(nm)
*/