/*  
Topic:
----------
Pure Virtual Function | Abstract class
=======================================
- A pure virtual function is a virtual function that has no definition in the base class. It is declared using the = 0 syntax at the end of the function declaration. The derived class must provide a definition for the pure virtual function.


- An Abstract class abstract function must be overided by the derived class.
- This function does not have definition in the base class means deos not need of curly braces. And it is declared using the  = 0 syntax at the end of the function declaration.

*/
#include<iostream>
#include<vector>
using namespace std;
class Animal {
  public:
  virtual void sound()=0;   // pure virtual function

};
class Dog: public Animal {
  public:
  void sound() {
    cout << "Barks" << endl;
  }

};
class Cat: public Animal {
  public:
  void sound() {
    cout << "Meow" << endl;
  }

};

int main() {
  Animal *p;
  vector<Animal*> animals;
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Dog());
  animals.push_back(new Cat());

  // How to display this statements
  for (int i = 0; i < animals.size(); i++) {
    p = animals[i];
    p->sound();
    // animals[i]->sound();
  }
  
}



/*  

Output:-
---------
Barks
Meow
Barks
Meow

  

*/