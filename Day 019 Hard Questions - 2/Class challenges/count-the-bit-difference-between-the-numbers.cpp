/* 
  Author    :     Parvej Alam
  Date      :     07-10-2k23

*/

// Question:- You are given two numbers A and B. the task is to count the number of bits needed to flipped to convert A to B.

#include<iostream>
using namespace std;

int countSetBits(int num){
  int count = 0;
  while(num) {
    num &= (num - 1);
    count++;
  }
  return count;
}

int CountFlippedBits(int O, int P) {
  int XOR = O ^ P;  // Get the bits that are different
  return countSetBits(XOR);    
}

int main() {
  int A, B;
  cout<<"Enter two numbers: ";
  cin>>A >>B;
  
  // CountFlippedBits
  int result = CountFlippedBits(A, B);
  cout << result;
}