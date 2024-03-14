#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size: " ;
  cin >> n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout << "Chamka" << " ";
    }
    cout << endl;
  }
}



/*  
Output:
--------
Enter the size: 5
Chamka Chamka Chamka Chamka Chamka 
Chamka Chamka Chamka Chamka Chamka 
Chamka Chamka Chamka Chamka Chamka 
Chamka Chamka Chamka Chamka Chamka
Chamka Chamka Chamka Chamka Chamka


Note:- Yha inner loop outer loop pr depend nhi kar rha hai, iss prakar se Time Complexity =>  O(n^2)
*/