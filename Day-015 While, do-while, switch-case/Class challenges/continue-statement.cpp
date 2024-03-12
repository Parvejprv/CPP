/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  Description:  This Pseudo-code belongs to continue statement in CPP.
*/
// 1). continue statement
/* let suppose we are printing a number from 1 to 10, and check a condition to find out 5, if we got 5 then need to skip that and the loop will goes continue. (as we get i==5 then number get skipped and loop goes till the specifies condition of the loop) */

#include<iostream>
using namespace std;
int main() {
  int n, i;
  cout << "Enter number : ";
  cin >> n;

  /*  
  */
  // Using do-while loop
  i=1;
  do{
    if(i == 5)
    {
      i++;
      continue;
    }
    cout << i << " " << endl;
    i++;
  }while(i <= n);

  /* 
  // Using while loop
  i = 1; // Initialize i to 1

  while (i <= n) {
    if (i == 5) {
      i++; // Increment i to skip 5
      continue; // Skip the rest of the loop body for 5
    }
    cout << i << endl;
    i++; // Increment i for the next iteration
  }
  */
  
  // Using for loop
  // for(i=1; i<=10; i++) {
  //   if(i==5) {
  //     continue;
  //   }
  //   cout <<  i << " " << endl;
  // }
  
  
}

/* 
Enter number : 10
1
2
3
4
6
7
8
9
10
*/