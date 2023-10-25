/* 
  Author    :     Parvej Alam
  Date      :     07-10-2k23

*/

// Question:-
#include<iostream>
using namespace std;
int Count1(int K) {

  if (K == 0 || K == 1) return 1;

  int ans = 0, rem, mul = 1, count = 0;
  while(K) {
    rem = K % 10;
    if( rem == 1){
      count ++;
    }
    K = K/10;
  }
  return count;
}
int Bin(int N) {
  int ans = 0, rem, mul = 1;
  while(N) {
    rem = N % 2;
    N = N / 2;
    ans = rem * mul + ans;
    mul *= 10;
  }
  return ans;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  // to Binary
  int Binary = Bin(num);

  // Count1
  int one_count = Count1(Binary);
  cout<<"The binary representation of the given decimal is: "<<Binary<<endl;
  cout<<"Count of ones in the binary representation of the given decimal is: "<<one_count<<endl;

}