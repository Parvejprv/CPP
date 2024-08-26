/*  
Topic: 
==========
Mutlitple inheritance
-----------------------------
- 


*/

#include<iostream>
using namespace std;
class Human {
  public:
  string name;

  void display(){
    cout << "My name is " << name << endl;
  }
};
class Engineer : public virtual Human
{
  public:
  string specialization;

  void workSpecialization() {
    cout << "I have specialization in " << specialization << endl;
  }

};
class Youtuber : public virtual Human
{
  public:
  int subscribers;

  void contentCreator() {
    cout << "I have a base subscribers of " << subscribers << endl;
  }
};

class CodeTeacher: public Engineer, public Youtuber 
{
  public:
  int salary;

  CodeTeacher(string name, string specialization, int subscribers, int salary) {
    this->name=name;
    this->specialization=specialization;
    this->subscribers=subscribers;
    this->salary=salary;
  }
  

  void showcase() {
    cout << "My name is " << name << endl;
    workSpecialization();   // pblc
    contentCreator();     // pblc
    cout << "Salary : " << salary << endl;
  }

};

int main() {
  CodeTeacher ct2("Parvej Alam", "CSE", 81000, 50000);
  ct2.showcase();


}


/*  
Output:-
-----------
My name is Parvej Alam
I have specialization in CSE      
I have a base subscribers of 81000
Salary : 50000

*/
