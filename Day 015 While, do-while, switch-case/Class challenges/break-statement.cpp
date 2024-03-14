/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  Description:  This Pseudo-code belongs to break statement in CPP.
*/
// 1). break statement
/* let suppose we are printing a number from 1 to 10, and check a condition to find out 5, if we got 5 then need to jump out from the loop. (as we get i==5 then loop will get terminated) */

#include<iostream>
using namespace std;
int main() {
  int n, i;
  cout << "Enter number : ";
  cin >> n;

  /*  
  // Using do-while loop
  i=1
  do{
    cout << i << " " << endl;
    if(i == 5)
      break;
    i++;
  }while(i <= n);
  */

  /*  
  // Using while loop
  i=1
  while(i <= n) {
    cout << i << " " << endl;
    if(i == 5)
      break;
    i++;
  }
  */

  // Using for loop
  for(i=1; i<=10; i++) {
    cout <<  i << " " << endl;
    if(i==5) {
      break;
    }
  }
  
}

/* 
Output:-
--------
Enter number : 10
1
2
3
4
5
*/