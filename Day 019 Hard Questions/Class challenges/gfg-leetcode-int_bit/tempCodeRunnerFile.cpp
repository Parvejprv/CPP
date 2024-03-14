#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int temp = n;
    int count = 0;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    return count;
}


bool isArmstrong(int num) {
    int tempNum = num;
    int power = countDigits(num);
    int sum = 0;
    while (tempNum) {
        int digit = tempNum % 10;
        tempNum /= 10;
        sum += pow(digit, power);
    }
    return sum == num;
}

int main() {
  int num;
  cout << "Enter any three digit number: ";
  cin >> num;
  
  if (isArmstrong(num)) {
    cout<< "Armstrong Number." << endl;
  }
  else {
    cout<<"Not an Armstrong Number." << endl;
  }
}