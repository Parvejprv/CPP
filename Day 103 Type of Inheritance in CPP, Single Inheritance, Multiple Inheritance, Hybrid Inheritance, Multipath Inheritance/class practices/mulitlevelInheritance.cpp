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
class Human 
{
  protected:
  string name;
  int age;

  public:
  // Non-parameterized
  Human() {
    cout << "Non-Param Constructor of 'Super class'" << endl;
  }
  // Constractor with 2 param
  Human(string name, int age) {
    this->name = name;
    this->age = age;
  }
  // function 
  void work()
  {
    cout << "I am working!" << endl;
  }


  // Destructor
  // ~ Human()
  // {
  //   cout << "Destructor of 'Super class'" << endl;
  // }
};

class Student: public Human
{
  int roll_number, fees;

  public: 
  // Create a default constructor | Non-parameterized constructor
  Student()
  {
    cout << "Non-Param Constructor of 'Sub class'" << endl;
  }

  // Parameterized constructor
  // Student(string name, int age, int roll_number, int fees) 
  // {
  //   this->name = name;
  //   this->age = age;
  //   this->roll_number = roll_number;
  //   this->fees = fees;
  // }

  Student(string name, int age, int roll_number, int fees): Human(name, age) 
  {
    this->roll_number = roll_number;
    this->fees = fees;
  }

  void display () {
    cout << "Name: " << name <<  ", " << "Age: "<< age << ", " << "Roll Number: " << roll_number << ", Fees: " << fees << endl;
  }



  // Destructor
  // ~ Student()
  // {
  //   cout << "Destructor of 'Sub class'" << endl;
  // }

};

int main() {
  // // Default constructor
  // Student s1;
  // s1.work();


  
  // create an object with parameter,
  Student A2("Rohit", 25, 12, 99);
  A2.work();
  A2.display();

  return 0;
}


/*  
Output:-
----------
I am working!






Non-Param Constructor of 'Super class'
Non-Param Constructor of 'Sub class'
I am working!







// Constructor and destructor both simultaneously
Non-Param Constructor of 'Super class'
Non-Param Constructor of 'Sub class'
I am working!
Destructor of 'Sub class'
Destructor of 'Super class'






I am working!
Name: Rohit, Age: 25, Roll Number: 12, Fees: 99

*/
