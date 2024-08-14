/*  
Topic Name :-
--------------- 
Constructor and Destructor
----------------------------
- A constructor is a special method of a class that is used to initialize objects. It has the same name as the class and does not have a return type, not even void.
- A constructor is called when an object of the class is created.



Construtor Overloading:-
-------------------------
A constructor can be overloaded in a class. This means that a class can have multiple constructors with different
parameters.





*/


#include<iostream>
using namespace std;
class Customer{
  string name;
  int account_number;
  int balance;

  public:
  // Default Constructor | Non-parameterized
  Customer() {
    name = "Rohit",
    account_number = 81,
    balance = 100;
  }

  // Parameterized constructor with 2 param
  Customer(string name, int account_number) {
    this->name = name;
    this->account_number = account_number;
    balance = 0;
  }
  
  // // Parameterized Constructor
  // Customer(string name, int account_number, int balance) {
  //   this->name = name;
  //   this->account_number = account_number;
  //   this->balance = balance;
  // }

  // Inline Cosntrutor
  inline Customer(string a, int b, int c): name(a), account_number(b), balance(c) {
    // cout << "Inline Constructor Called" << endl;
  }


  // Copy Constructor
  Customer(Customer &B){
    name = B.name;
    account_number = B.account_number;
    balance = B.balance;
  }


  void display(){
    cout<<"Name: "<<name<<", "<<"Account Number: "<<account_number<<", "<<"Balance: "<<balance<<endl;
  }

};

int main() {

  // Customer A1, A2, A3;

  // This will give the same output, because it called the default constructor
  /*  
  A1.display();
  A2.display();
  A3.display();
  */


  Customer c1("Samrat", 52, 1000);
  Customer c2("Rohit", 53, 1001);
  Customer c3("Kaif", 54, 1002);
  Customer c4("Kaifiyat", 55);  // having 2 params


  c1.display();
  c2.display();
  c3.display();
  c4.display();

  // Create an instance of a Copy constructor
  Customer c5(c3);
  c5.display();

  Customer c6;
  c6 = c5;
  c6.display();


  return 0;
}



/*  
Output:-
---------

// Using parameterized constructor call, while passing parameter when object is created

Name: Samrat, Account Number: 52, Balance: 1000
Name: Rohit, Account Number: 53, Balance: 1001
Name: Kaif, Account Number: 54, Balance: 1002




Name: Samrat, Account Number: 52, Balance: 1000
Name: Rohit, Account Number: 53, Balance: 1001
Name: Kaif, Account Number: 54, Balance: 1002
Name: Kaifiyat, Account Number: 55, Balance: 0



// After Creating a copy constructor of c3

Name: Samrat, Account Number: 52, Balance: 1000
Name: Rohit, Account Number: 53, Balance: 1001
Name: Kaif, Account Number: 54, Balance: 1002
Name: Kaifiyat, Account Number: 55, Balance: 0
Name: Kaif, Account Number: 54, Balance: 1002

*/




