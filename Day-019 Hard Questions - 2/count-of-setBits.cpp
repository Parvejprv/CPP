#include<iostream>
using namespace std;

int SetBits(int n) {
  int count = 0;
  while (n)
  {
    n &= (n-1);       // Using this operation we remove the right most setBit and increment the count var
    // cout << "bit " << n << endl;  
    count++;
  }
  return count;
}

int main() {
  int num;
  cout << "Enter number : ";
  cin >> num;

  // Set Bits
  int res = SetBits(num);
  cout << res;
  return 0;
}