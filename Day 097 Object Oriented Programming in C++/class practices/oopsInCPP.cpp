/*  
Topic
========

OOPS in CPP
===============

OOPS Introduction:
---------------------
OOPS stands for Object Oriented Programming System. It is a programming paradigm that revolves around the concept of objects and classes. It is a way of designing and organizing code that is easy to understand, maintain and modify.

 
Class
--------
A class is a blueprint or a template that defines the properties and behavior of an object. It is a collection of data members (variables) and member functions (methods) that operate on that data.

Object
----------
An object is an instance of a class. It has its own set of attributes (data members) and methods (functions) that are defined in the class.



Attributes | Properties
---------------------------
- Attributes are the members or properties that is got declared inside the class.
- Inside a class atributes or members are have the access modifier as private by default.
- But we can have the access modifier as public to access it from outside the class also.
- Member functions are the functions that is got declared inside the class.


Data Hiding
------------
While having the access modifier as private, to access the data from the another class we need to use the propety method or setter and getter method(function). So that data is visible/accessible to outside the function but inside the class only.


*/


#include<iostream>
using namespace std;
class Student
{
  string name;
  int age, roll_number;
  string grade;

  public:

  // Setter
  void setName(string n){
    name = n;
  }
  void setAge(int x){
    // Validation
    if(age < 0 || age > 100){
       cout<<"Invalid age!";
       return;
    }
    age = x;
  }
  void setRollNumber(int roll){
    roll_number = roll;
  }
  void setGrade(string grade){
    this->grade = grade;
  }
  // Getter
  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }
  int getRollNumber(){
    return roll_number;
  }
  string getGrade(){
    return grade;
  }

};

int main() {
  
  /* Let suppose I wanna to print the details of a student */
  /*  

  string name;
  int age, roll_number;
  string grade;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your roll number: ";
  cin >> roll_number;
  cout << "Enter your grade: ";
  cin >> grade;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Roll Number: " << roll_number << endl;
  cout << "Grade: " << grade << endl;

  string name2;
  int age2, roll_number2;
  string grade2;
  cout << "Enter your name: ";
  cin >> name2;
  cout << "Enter your age: ";
  cin >> age2;
  cout << "Enter your roll number: ";
  cin >> roll_number2;
  cout << "Enter your grade: ";
  cin >> grade2;
  cout << "Name: " << name2 << endl;
  cout << "Age: " << age2 << endl;
  cout << "Roll Number: " << roll_number2 << endl;
  cout << "Grade: " << grade2 << endl;
  
  */

  

  /*  
  
  // Now let's do it with class
  Student student1;
  student1.name = "John";
  student1.age = 20;
  student1.roll_number = 1;
  student1.grade = "A";
  cout << "Name: " << student1.name << endl;
  cout << "Age: " << student1.age << endl;
  cout << "Roll Number: " << student1.roll_number << endl;
  cout << "Grade: " << student1.grade << endl;


  // Now let's create another student
  Student student2;
  student2.name = "Jane";
  student2.age = 21;
  student2.roll_number = 2;
  student2.grade = "B";
  cout << "Name: " << student2.name << endl;
  cout << "Age: " << student2.age << endl;
  cout << "Roll Number: " << student2.roll_number << endl;
  cout << "Grade: " << student2.grade << endl;
  
  */



  // Data accessing using propeties method
  Student s1;
  s1.setName("Samrat");
  s1.setAge(-125);
  s1.setRollNumber(81);
  s1.setGrade("A+");

  // to display the data
  cout << s1.getName() << endl;
  cout << s1.getAge() << endl;
  cout << s1.getRollNumber() << endl;
  cout << s1.getGrade() << endl;


  return 0;
}

/*  
Output:-
----------
Enter your name: sam
Enter your age: 22
Enter your roll number: 21
Enter your grade: A+
Name: sam
Age: 22
Roll Number: 21
Grade: A+





Enter your name: Sam
Enter your age: 21
Enter your roll number: 0081
Enter your grade: A+
Name: Sam
Age: 21
Roll Number: 81
Grade: A+
Enter your name: Amive
Enter your age: 20
Enter your roll number: 14
Enter your grade: A
Name: Amive
Age: 20
Roll Number: 14
Grade: A






// Using a class and object
Name: John
Age: 20
Roll Number: 1
Grade: A
Name: Jane
Age: 21
Roll Number: 2
Grade: B




// Using property method | Getter and Setter method

Samrat
25
81
A+


*/
