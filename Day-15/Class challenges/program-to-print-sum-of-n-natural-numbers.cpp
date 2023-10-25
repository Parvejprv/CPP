/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  This Program belongs to do-while loop for CPP Learning.
*/
// 1). print the sum of n natural number using do-while

#include<iostream>
using namespace std;
int main() {
  int n, i=1, sum = 0;
  cout << "Enter number : ";
  cin >> n;

  cout << "Sum of 'n' natural numbers " << endl;
  do{
    sum += i;
    i++;
  }while(i <= n);
  cout << "Sum = " << sum;
}

/* 
Output:-
--------
Enter number : 10
Sum of 'n' natural numbers
Sum = 55
*/