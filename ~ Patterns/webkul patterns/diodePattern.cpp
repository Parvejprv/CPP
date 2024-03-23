#include<iostream>
using namespace std;
int input(){
  String num;
  cout << "Enter the num:";
  cin >> num;

  for(int i=0; i<num.length; i++){
    if(!isdigit(num[i]))
    {
      cout << "Enter a valid odd Integer::";
      return input();
    }
  }
  int n = stoi(num);
  if(n%2 == 0 || n <= 1)
  {
    cout << "Enter odd numbers and not 1::";
    return  input();
  } else 
  return n
}

int main() {
  cout << "It is the Symbol like diode:";
  

  return 0;
}