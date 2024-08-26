
/*  
Topic:-
---------
Access Specifier in CPP


*/

#include<iostream>
using namespace std;
class Human
{
  string religion, color;
  protected:
  string name;
  int age, weight;

};

class Student: private Human 
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

int main() {

  // Create an Obj of student
  // Student s1;

  // s1.fun("John", 20, 70);
  // s1.display();


  Student s2("Rohit", 12, 70, 81, 500);
  s2.display(); 

  return 0;
}




/*  
Output:-
---------
John 20 70


Name = Rohit, Age = 12, Weight = 70, Fees = 500, Roll Number = 81

*/