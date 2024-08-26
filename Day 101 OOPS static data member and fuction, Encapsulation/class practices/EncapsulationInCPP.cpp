/*  
Topic:-
-----------
Encapsulation:-
----------------
- Wrapping up of data & information in a single unit|package while controlling access to them.
- Data hiding can be achieve using the encapsulation. we can use here properties method getter and setter method to achieve the data hiding.


*/

#include<iostream>
using namespace std;
class Customer {
  string name;
  int account_number, balance, age;
  

  public:
  Customer(string name, int account_number, int balance, int age) {
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
    this->age = age;
  }

  // 
  void deposit(int amount) {
    if(amount > 0) {
      balance += amount;
    }  else {
      cout << "Invalid amount!" << endl;
    }
  }

  void withdraw(int amount) {
    if(amount <= balance && amount > 0){
      balance -= amount;
    } else {
      cout << "Invalid amount" << endl;
    }
  }

  void updateAge(int age) {
    if(age>0 && age<100) {
      this->age = age;
    } else if(age>100 && age<=120){
      this->age = age;
    } else {
      cout << "You have entered a wrong age, please try another input of age." << endl;
    }
  }


  void display() {
    cout << name << " " << account_number << " " << age << " " << balance << endl;
  }


};
int main() {

  Customer A1 ("Rohit", 54, 1000, 25);
  A1.deposit(400);
  // A1.deposit(-900);

  // age
  A1.updateAge(0);
  A1.display();



}




/*  
Output:-
---------
Rohit 25 1400


Invalid amount!
Rohit 25 1400


Rohit 54 25 1400


You have entered a wrong age, please try another input of age.      
Rohit 54 25 1400
*/
