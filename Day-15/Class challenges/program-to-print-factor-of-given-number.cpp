/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  This Program belongs to while loop for CPP Learning.
*/


// 3). Here we need to print the Factor of a given number using while loop, in cpp

#include<iostream>
using namespace std;
int main() {

  int n, k=1;
  cout << "Enter no. ";
  cin >> n;
  
  cout << "Factors of the number " << n << " are : " << endl;
  while(k <= n) {
    if(n%k == 0){
      cout << k << " " << endl;
    }
    k++;
  }
}


/* 
Output 
==========

Enter no. 20
Factors of the number 20 are : 
1 
2 
4 
5
10
20

*/