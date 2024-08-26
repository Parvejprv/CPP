/*  
Topic:
----------
Operator Overloading
=======================
- Operator overloading 

Ex:
1. Overload the + operator to add two complex numbers.
2. Overload the << operator to print the complex number in the format (a + bj)
3. Overload the == operator to check if two complex numbers are equal.

*/

#include<iostream>
using namespace std;
class Complex{
  int real, img;

  public:
  Complex(){
    
  };
  // Create a constructor of the Complex class
  Complex(int real, int img){
    this->real = real;
    this->img = img;
  };

  void display(){
    cout << real <<" + i" << img ;
  }

  // We will declare the + Operator as a function
  Complex operator +(Complex &c){
    Complex ans;  // a temp ans 
    ans.real = real + c.real;
    ans.img = img + c.img;
    return ans;
  }

};


int main() {
  // Create a object of the Complex class
  Complex c1(3, 2);
  Complex c2(4, 6);
  Complex c3 = c1+c2;
  c3.display();

}




/*  
Output:-
----------
7 + i8

*/