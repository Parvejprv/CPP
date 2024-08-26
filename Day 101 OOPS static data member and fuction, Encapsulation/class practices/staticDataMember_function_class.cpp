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
  static int totalBalance;

  public:
  // static int totalCustomer;  // static data member


  Customer(string name, int acc_num, int balance){
    this->name = name;
    this->acc_num = acc_num;
    this->balance = balance;
    totalCustomer++; 
    totalBalance += balance; 
  }

  // static member function, it is the part of the class and it can access the static data member only, it cannot access non-static data member
  static void displayTotalCustomerAndTheriBalance() {
    cout << "Total number of customer: " << totalCustomer << endl;
    cout << "Total balance: " << totalBalance << endl;
  }

  void deposit(int amount){
    if(amount > 0) {
      balance += amount;
      totalBalance += amount;
    }
  }
  void withdraw(int amount){
    if(amount < balance && amount > 0) {
      balance -= amount;
      totalBalance -= amount;
    }
  }

  void display() {
   cout << name << " " << acc_num << " " << balance <<  " " << totalCustomer << endl;
  }

  void dispaly_total(){
    cout << totalCustomer << endl;
  }



};

int Customer::totalCustomer = 0;    // scope resolution operator used here
int Customer::totalBalance = 0;


int main() {

  // Create an object of the customer class
  Customer c1("John", 1234, 1000);
  Customer c2("Rohit", 5678, 1010);
  c1.display();
  c2.display();
  Customer c3("Mohan", 54, 2000);
  c3.display();
  
  // How to change the value of the totalCustomer, we will access using the class and scope resolution operator, these only when static data member is public
  // Customer::totalCustomer = 10;
  // c1.dispaly_total();


  // if static data member is private then we can not acess these data member using class and scope resolution operator.
  // Customer::dispaly_total();  
  // c1.dispaly_total(); 



  // Let suppose customer c1 wants to deposit amount of 5000
  c1.deposit(5000);

  // c2 want to withdraw
  c2.withdraw(500);



  // call the static member function called
  Customer::displayTotalCustomerAndTheriBalance();


  

  return 0;
}


/*  
Output:-
----------
John 1234 1000 2
Rohit 5678 1010 2



Name: John
Account Number: 1234
Balance: 1000
Total Customers: 2
Name: Rohit
Account Number: 5678
Balance: 1010
Total Customers: 2


// Total Balance using static member function
John 1234 1000 2
Rohit 5678 1010 2
Mohan 54 2000 3
Total number of customer: 3       
Total balance: 4010



// deposited 5000 by c1
John 1234 1000 2
Rohit 5678 1010 2
Mohan 54 2000 3
Total number of customer: 3       
Total balance: 9010


// withdraw 500 by c2
John 1234 1000 2
Rohit 5678 1010 2
Mohan 54 2000 3
Total number of customer: 3       
Total balance: 8510

*/
