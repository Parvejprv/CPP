/*  
Topic
========

Static Data Memeber
======================
- They are attribute of classes or class member
- It is declared using static keyword
- Only one copy of that member is created for entire class & is shared by all the object. Or It can be used to store data that is common to all objects of a class.
- It is initialize before any object of this class is created.
- It can be accessed using class name or object name



*/

#include<iostream>
using namespace std;
class Customer{
  string name;
  int acc_num, balance;
  static int totalCustomer;

  public:
  Customer(string name, int acc_num, int balance){
    this->name = name;
    this->acc_num = acc_num;
    this->balance = balance;
    totalCustomer++;  
  }

};

int Customer::totalCustomer = 0;  
int main() {

  // Create an object of the customer class
  Customer c1("John", 1234, 1000);
  Customer c2("Rohit", 5678, 1010);

  return 0;
}


/*  
Output:-
----------


*/
