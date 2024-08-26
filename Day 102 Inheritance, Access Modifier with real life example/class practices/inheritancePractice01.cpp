/*  


*/

#include<iostream>
using namespace std;

class Human
{ 
  // private - when we don't write any access specifier by default it is private
  string religion, color;
  protected:
  string name;
  int age, weight;

};

class Student: protected Human 
{
  private:
  string roll_number, fees;
  public:
  
  void fun(string n, int a, int w){
    name = n;
    age = a;
    weight = w;
  }

  void display() {
    cout << "Name = " << name << ", " << "Age = " << age << ", " << "Weight = " << weight << ", " << "Fees = " << fees << ", " << "Roll Number = " << roll_number << endl;
  }
  // Note:- here roll_number and fees are private so that it is accessible within the class only
};

int main() {
  Student s1;
  s1.fun("Rahul", 20, 70);
  s1.display();

  return 0;
}


/*  
Output:-
----------
Name = Rahul, Age = 20, Weight = 70, Fees = , Roll Number = 

*/