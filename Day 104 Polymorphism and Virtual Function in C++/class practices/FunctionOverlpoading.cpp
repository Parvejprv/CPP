/*  
Topic
========

Polymorphism
=================
- Polymorphism is a fundamental concept in object-oriented programming (OOP) that allows objects of different classes to be treated as objects of a common superclass. This means that objects of different classes can be used interchangeably where the common superclass is expected.


Question: WAP to print the polymorphism with example. 
// Function Overlaoding:-
-------------------------
public class Animal {
public void sound() {
System.out.println("The animal makes a sound");
}
}
public class Dog extends Animal {
public void sound() {
System.out.println("The dog barks");
}
public class Cat extends Animal {
public void sound() {
System.out.println("The cat meows");
}


*/

#include<iostream>
using namespace std;
// 
class Area{
  public:
  // Let suppose here I want to calculate the area of a circle
  int area(int r) {
    return 3.14*r*r;
  }
  
  // Rectangle
  int area(int l, int b) {
    return l*b;
  }
};


int main() {
  Area a;
  cout << a.area(5) << endl; // Output: 78
  // cout << a.area(5, 6) << endl; // Output: 30

  Area a2;
  cout << a2.area(5, 6) << endl; // Output: 30


  return 0;
}


/*  
Output:-
----------


*/
