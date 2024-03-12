/* (1). take input from the User and check if your age is greater than 18 or not, also check for Eligiblity for vote or not. */

/*
#include<iostream>
using namespace std;
int main() {
  int age;

  cout << "Enter your age ? ";
  cin >> age;

  if(age >= 18 ) {
    cout << "Yes, You are eligible for Vote.";
  } else if (age < 18) {
    cout << "You are below 18, you are not eligible for vote";
  }
}
*/



/* (2). take input from the User and check if your age is greater than 18 or not, also check for Eligible for driving or not. */


#include<iostream>
#include<string>
using namespace std;
int main() {
  int age;
  string name;

  cout << "Enter Your Name ? ";
  cin >> name;
  cout << "Enter your age ? ";
  cin >> age;

  if(age >= 18 ) {
    cout <<"Hello "<<name<<", You are above 18, You Are Eligibel For Driving." ;
  } else if ( age < 18 ){
    cout << "Hello "<<name<<", Your age is "<<age<<"! You are below 18, you are not eligible for driving, Even don't thik to Drive!";
  }
}

