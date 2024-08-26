/*  
Topic: 
==========
Mutlitple inheritance
-----------------------------
- 


*/

#include<iostream>
using namespace std;
class Engineer 
{
  public:
  // Engineer() {
  //   cout << "Constructor call from Engineer." << endl;
  // }
  string specialization;

  void workSpecialization() {
    cout << "I have specialization in " << specialization << endl;
  }

};
class Youtuber
{
  public:
  // Youtuber() {
  //   cout << "Constructor call from Youtuber." << endl;
  // }
  int subscribers;

  void contentCreator() {
    cout << "I have a base subscribers of " << subscribers << endl;
  }
};
class CodeTeacher: public Engineer, public Youtuber 
{
  public:
  string name;

  CodeTeacher() {
    cout << "Constructor call from CodeTeacher." << endl;
  }

  CodeTeacher(string name, string specialization, int subscribers) {
    this->name=name;
    this->specialization=specialization;
    this->subscribers=subscribers;
  }
  

  void showcase() {
    cout << "My name is " << name << endl;
    workSpecialization();   // pblc
    contentCreator();     // pblc
  }

};

int main() {
  // Create a Object of CodeTeacher class
  // CodeTeacher ct1;


  CodeTeacher ct2("Parvej Alam", "CSE", 81000);
  ct2.showcase();


  return 0;
}


/*  
Output:-
-----------
- Which constructor will called first
---------------------------------------
Constructor call from Engineer.
Constructor call from Youtuber.
Constructor call from CodeTeacher.



My name is Parvej Alam
I have specialization in CSE      
I have a base subscribers of 81000

*/
