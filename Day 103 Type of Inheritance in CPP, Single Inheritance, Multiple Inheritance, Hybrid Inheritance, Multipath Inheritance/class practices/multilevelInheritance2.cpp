/*  
Topic
========

Type of Inheritance
=====================
- Single Inheritance 
- Multilevel Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance




Question: 

*/

#include<iostream>
using namespace std;
class Person {
  protected:
  string name;
  
  public:
  void introduce() {
    cout << "Hello My name is : " << name << endl;
  }

};

class Employee: public Person
{
  protected:
  int salary;

  public:
  void monthlySalary() {
    cout << "My monthly salary is : " << salary << endl;
  }

};

class Manager: public Employee
{
  public:
  string dept;

  public:
  Manager(string name, int salary, string dept) {
    this->name=name;
    this->dept=dept;
    this->salary=salary;
  }


  void workDetails() {
    cout << "I am " << name << " leading the " << dept << " department at XYZ." << " And my current salary is about " << salary << "."<< endl; 
  }

};

int main() {
  // create a object of the Manager 
  Manager m("Rohit", 200, "IT");
  m.workDetails();


  // Another object of the same Manager
  Manager m2("Rehan", 8100, "Devlopement");
  m2.workDetails();
}


/*  
Output:-
----------
I am leading the IT department at XYZ.


I am Rohit leading the IT department at XYZ. And my current salary is about 200.
I am Rehan leading the Devlopement department at XYZ. And my current salary is about 8100.

*/