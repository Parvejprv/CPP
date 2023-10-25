/*  

*/

#include<iostream>
using namespace std;

int countBitsFlip(int a, int b){
        
  int ans = 0;
  
  while(a != 0 || b != 0) {
      if((a&1) != (b&1))
      ans++;
      a = a >> 1;
      b = b >> 1;
  }
  return ans;
    
}

int main() {
  int a, b;
  cout << "enter a, b : ";
  cin >> a >> b;
  cout << "Number of bits to be flipped in binary representation of "<< a <<" and "<< b <<" is: "
  << countBitsFlip(a, b);
  
  return 0;
}