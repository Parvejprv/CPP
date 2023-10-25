/* 
1). Print the Weekday Number to Calculate weekday name Using the Switch case Statement. 

*/

#include<iostream>
using namespace std;

int main() {
  int day;
  cout << "Enter Weekday (in integer b/w 1 to 7) : ";
  cin >> day;

  // check number between 1-7
  if(day > 0 && day <= 7){
    //Switch case
  switch(day) {
    case 1: 
    cout << "Monday";
    break;
    case 2: 
    cout << "Tuesday";
    break;
    case 3: 
    cout << "Wednesday";
    break;
    case 4: 
    cout << "Thursday";
    break;
    case 5: 
    cout << "Friday";
    break;
    case 6: 
    cout << "Saturday";
    break;
    case 7: 
    cout << "Sunday";
    break;
    default: 
    cout << "Invalid Choice.";
  }
  } else  {
    cout <<  "Day is Out of range (1 to 7)!";
  }
  
}