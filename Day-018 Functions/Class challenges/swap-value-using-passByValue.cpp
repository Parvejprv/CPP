// Swap two number using the 'Pass by value reference'


#include<iostream>
using namespace std;

// This is the Pass by value
// void Swap(int a, int b){
//   int c;
//   c = a;
//   a = b;
//   b = c;
// }

// Pass by reference (int)
void Swap(int &p, int &q){
  int r;
  r = p;
  p = q;
  q = r;
}

// Pass by reference (float)
void Swap(float &p, float &q){
  float r;
  r = p;
  p = q;
  q = r;
}

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  
  // Call the method
  Swap(a, b);
  cout << a << endl << b << endl;

  float f1, f2;
  cout << "Enter two floating point numbers: ";
  cin >> f1 >> f2;
  // Call the method
  Swap(f1, f2);
  cout << f1 << endl << f2 << endl;
}