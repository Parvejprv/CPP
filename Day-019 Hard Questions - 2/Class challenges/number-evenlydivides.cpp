
/* 
  Author    :     Parvej Alam
  Date      :     07-10-2k23

*/

// Question:-
#include<iostream>
using namespace std;


int evenlyDivides(int N)
{
  int temp = N;
  int count = 0, rem;
  while (temp)
  {
    rem = temp % 10;
    if (rem != 0 && N % rem == 0)
    {
      count += 1;
    }
    temp = temp / 10;
  }
  return count;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  // Evenly Divisible
  int res = evenlyDivides(num);
  cout << res; 
}


/* 
Output:-
--------


Enter a number: 23
0

Enter a number: 13
1
*/