
/* 
  (1). Take a package input through the user and check if the package is greater than 10 Lakh, then Print the "ACCEPTED" otherwise Print "REJECTED".

#include<iostream>
using namespace std;

int main() {
  // your code goes here
  int package;

  cout <<  "Enter Package in Lakh : ";
  cin>>package;

  if(package > 10) {
    cout<<"YES | ACCEPTED ";
  } else {
    cout << "NO | REJECTED ";
  }
}
*/




/* 
  (2). Take a Mark as input through the user and check if the Mark is greater than 33 marks, then Print the "PASS" otherwise Print "FAIL".

#include<iostream>
using namespace std;

int main() {
  // your code goes here
  int marks;

  cout <<  "Enter Marks : ";
  cin>>marks;

  if(marks > 33) {
    cout<<"PASS ";
  } else {
    cout << "FAIL ";
  }
}
*/




/* 
  (3). Take a Two numbers as input through the user and check if firstNumber is greater than secondNumber, then Print the "YES" otherwise Print "NO".

#include<iostream>
using namespace std;

int main() {
  // your code goes here
  int num1, num2;

  cout <<  "Enter number 1 : ";
  cin>>num1;
  cout <<  "Enter number 2 : ";
  cin>>num2;

  if(num1 > num2) {
    cout<<"YES";
  } else {
    cout << "NO ";
  }
}
*/



/* 
  (4). Take a number as input through the user and check if the given number is Even OR Odd.

#include<iostream>
using namespace std;

int main() {
  // your code goes here
  int number;

  cout <<  "Enter number : ";
  cin>>number;
  

  if(number % 2 == 0) {
    cout<<"EVEN";
  } else {
    cout << "ODD";
  }
}
*/


/* 
  (5). Take an age as input through the user and check if adult or teeneger.

#include<iostream>
using namespace std;

int main() {
  // your code goes here
  int age;

  cout <<  "Enter age : ";
  cin>>age;
  

  if(age >= 18) {
    cout<<"Adult";
  } else {
    cout << "Teeneger";
  }
}
*/



/* 
  (6). Take a integer number input from the user and, check if the given number is positive, zero or negative.
*/
#include<iostream>
using namespace std;
int main() {
  int num;

  cout << "Enter a Number : ";
  cin >> num;

  // Using if-else (conditional statement)
  // if(num > 0) {
  //   cout << "Positive";
  // } else {
  //   if(num == 0) {
  //     cout << "Zero";
  //   } else {
  //     cout << "Negative";
  //   }
  // }

  // Using if else-if
  if(num>0) {
    cout << "Positive";
  } else if(num < 0) {
    cout << "Negative";
  } else {
    cout <<  "Zero";
  }
}