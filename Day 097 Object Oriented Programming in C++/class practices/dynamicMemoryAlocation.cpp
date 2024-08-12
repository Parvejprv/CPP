/*  
Topic:-
---------- 

Dynamic Memory Allocation in OOPS

*/





#include<iostream>
using namespace std;
class Student {
  public:
  string name;
  int age;
  string grade;

};

int main() {

  Student *S = new Student;
  (*S).name = "Sam";
  (*S).age = 20;
  (*S).grade = "A+";

  cout << S->name << endl;
  cout << S->age << endl;
  cout << S->grade << endl;


  return 0;
}


/*  
Output:-
---------
Sam
20
A+



*/