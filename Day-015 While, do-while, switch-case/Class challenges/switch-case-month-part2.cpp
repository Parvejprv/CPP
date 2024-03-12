/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

  This Program belongs to do-while loop for CPP Learning.
*/

/* 
1). Print the months Number to Calculate weekday name Using the Switch case Statement. 

*/

#include<iostream>
using namespace std;

int main() {
  int month;
  cout << "Enter months (in integer b/w 1 to 12) : ";
  cin >> month;

  // check number between 1-12
  if(month > 0 && month <= 12){
    //Switch case
  switch(month) {
    case 1: 
    cout << "January";
    break;
    case 2: 
    cout << "February";
    break;
    case 3: 
    cout << "March";
    break;
    case 4: 
    cout << "April";
    break;
    case 5: 
    cout << "May";
    break;
    case 6: 
    cout << "June";
    break;
    case 7: 
    cout << "July";
    break;
    case 8: 
    cout << "August";
    break;
    case 9: 
    cout << "September";
    break;
    case 10: 
    cout << "October";
    break;
    case 11: 
    cout << "November";
    break;
    case 12: 
    cout << "December";
    break;
    default: 
    cout << "Invalid Choice.";
  }
  } else  {
    cout <<  "Month name is Out of range (1 to 12)!";
  }
  
}