/* 
  (1). Take a integer input from the user for checking weekdays and specify the weekday's lies between the week.
  hint : day = 1,2,3,4,5,6,7  (week-day between 1-7)

*/

#include<iostream>
using namespace std;

int main() {

  int day;
  cout << "Please, Enter an integer week-day between (1-7) : ";
  cin >> day;

  if(day > 0) {
      if(day == 1 || day == 2 || day == 3 || day == 4 || day == 5 || day == 6 || day == 7) {
      if(day == 1) {
        cout << "Sunday";
      } else if(day == 2) {
        cout << "Monday";
      } else if(day == 3) {
        cout << "Tuesday";
      } else if(day == 4) {
        cout << "Wednesday";
      } else if(day == 5) {
        cout << "Thursday";
      } else if(day == 6) {
        cout << "Friday";
      } else {
        cout << "Saturday";
      } 
    } else {
      cout << "Day You hav entered outside the week day range.";
      cout << "Please, Enter a valid number : ";
    }
  } else {
    cout << "Week day should not be zero or negative.";
  }
}