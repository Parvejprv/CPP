/*  
2. Leap year

Solution :
1). If number(Date) is divided by 400 then 100% number is 'Leap Year'.
2). if number(Date) is not divisible by 400 then,
  2.1). It must be divided by 4 & not by 100, then it is 'Leap Year'.
3). Rest of the years are 'Not a Leap Year'.

-----------

Example,
1600 -> (Leap Year  => 1600/400 = True)
1700 -> (Not a Leap Year, Because Number is not divisible by 400 but number is divided by 4 & 100).
1800 -> Not a Leap Year.  ,,
204 -> Leap Year.
*/


#include<iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter Year: ";
  cin >> year ;

  // Logic 1
  // if( year % 400 == 0 ) {
  //   cout << "Leap Year";
  // } else if(year % 100 == 0) {
  //   cout << "Not a Leap Year";
  // } else if(year % 4 == 0) {
  //   cout << "Leap Year";
  // }
  // else {
  //   cout << "Not a Leap Year";
  // }

  // Logic 2
  // if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
  //   cout << "Leap year";
  // } else {
  //   cout << "Year is not a Leap year.";
  // }



  if(year%400 == 0) {
      cout << "Leap Year.";
    } else if (year%4 == 0 && year%100 != 0) {
      cout << "Leap Year.";
    } else {
      cout << "Not a Leap Year.";
    }
}


/*  
Output:-
--------

Enter Year: 2019
Year is not a Leap year.


Enter Year: 2016
Leap year


Enter Year: 2022
Year is not a Leap year.
*/