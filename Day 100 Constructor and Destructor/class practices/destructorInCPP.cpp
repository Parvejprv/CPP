/*  
Topic Name: 
--------------
Destructor in CPP
--------------------
- It is a instance member fundtion that is called automatically whenever an object is going to be destroyed.
- It is a last function that is going to be called before an object is going to be destroyed.
- It get automatically invoke by default by compiler if we not write our own destructor.
- It is used to release the memory alocation that I have been taken dynamically.
*/



#include<iostream>
using namespace std;
class Customer{
  string name;
  int *balance;

  public:
  Customer(string name, int bal) {
    this->name = name;
    balance = new int;    // allocation memory dynamically
    *balance = bal;
  }

  void display() {
    cout << "Name: " << name << ", Balance: " << *balance << endl;
  }

  // Destructor - to release the dynamic resources
  ~Customer() {
    delete balance;
  }

};

int main() {

  Customer c1("Rohit", 1000);
  c1.display();


  return 0;
}


/*  
Output:-
----------
Name: Rohit, Balance: 1000

*/




