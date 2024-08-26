/*  
Topic:
-----------

Destructor in CPP



*/
#include<iostream>
using namespace std;
class Customer{
  string name;
  int *data;

  public:

  // Default Constructor
  Customer() {
    cout<<"Default Constructor Called"<<endl;
  }

  // Constructor parameterized 
  Customer(string name) {
    this->name = name;
    cout << "(invoked from constructor) : " << name << endl;
  }

  // Destructor
  ~Customer() {
    cout << "(invoked from destructor) : " << name << endl;
  }

};

int main() {

  // Customer c1("Rohit"), c2("Sam"), c3("John");


  Customer c1("1"), c2("2"), c3("3");


  Customer *c4 = new Customer();
  delete c4;

}


/*  
Output:-
----------
--------------------------------
Note:- Constructor invoked Order wise
--------------------------------
(invoked from constructor) : Rohit
(invoked from constructor) : Sam
(invoked from constructor) : John
(invoked from destructor) : John
(invoked from destructor) : Sam
(invoked from destructor) : Rohit



--------------------------------
Note:- Destructor invoked in reverse Order wise, because it hase dependency.
--------------------------------

(invoked from constructor) : 1
(invoked from constructor) : 2
(invoked from constructor) : 3
(invoked from destructor) : 3
(invoked from destructor) : 2
(invoked from destructor) : 1





// here it shown that Default constructor get called for the object c4, but desctructor does not get called

(invoked from constructor) : 1
(invoked from constructor) : 2
(invoked from constructor) : 3
Default Constructor Called
(invoked from destructor) : 3        
(invoked from destructor) : 2        
(invoked from destructor) : 1 


//Now, here destructor also got invoked here, To release the resources for c4, we can do it manually
(invoked from constructor) : 1
(invoked from constructor) : 2       
(invoked from constructor) : 3       
Default Constructor Called
(invoked from destructor) :
(invoked from destructor) : 3        
(invoked from destructor) : 2        
(invoked from destructor) : 1



*/




