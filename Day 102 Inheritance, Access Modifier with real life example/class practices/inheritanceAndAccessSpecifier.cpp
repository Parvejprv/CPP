/*  
Topic:-
---------
Access Specifier in CPP

Base - protected      Derived - protected 


*/

#include<iostream>
using namespace std;
class Human
{
  string religion, color;
  public:
  string name;
  int age, weight;

};

class Student: protected Human 
{
  private:
  int roll_number, fees;

  public:
  Student(string name, int  age, int weight, int roll_number, int fees) 
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->roll_number = roll_number;
    this->fees = fees;
  }


  void fun(string n, int a, int w){
    name = n;
    age = a;
    weight = w;
  }

  void display() {
    cout << "Name = " << name << ", " << "Age = " << age << ", " << "Weight = " << weight << ", " << "Fees = " << fees << ", " << "Roll Number = " << roll_number << endl;
  }

};

class Teacher: public Human 
{
  int id, salary;
};

int main() {

  // Create an Obj of student
  // Student s1;

  // s1.fun("John", 20, 70);
  // s1.display();

  Student s2("Rohit", 12, 70, 81, 500);
  s2.display();



  // Create a teacher class object 
  Teacher t0;
  t0.name = "rohit";

  

  

  return 0;
}
