/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  This Program belongs to do-while loop for CPP Learning.
*/
// 1). print the number from 1 to n using do-while

#include<iostream>
using namespace std;
int main() {
  int n, i=1;
  cout << "Enter number : ";
  cin >> n;

  do{
    cout << i << endl;
    i++;
  }while(i <= n);
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
6
7
8
9
10
*/