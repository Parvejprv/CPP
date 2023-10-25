 /* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

*/

// Question :-  Write a program to print all the number that are not divisible by 3 or 5 (Use continue here). 

#include<iostream>
using namespace std;

int main() {
  int i, n; 
  cout << "enter number n : ";
  cin >> n;

  // // Using for Loop
  // for(i = 1 ; i <= n ; ++i) {
  //   if(i%3 == 0 || i%5 == 0) {
  //     continue;
  //   }
  //   cout << i << " ";
  // }


  // Using while loop
  i = 1;
  while (i <= n) {
    if(i%3==0 || i%5 == 0) {
      i++;
      continue;
    }
    cout << i << " ";
    i++;
  }

}


/* 
Output-
-------

1 2 4 7 8 11 13 14 16 17 19 

*/