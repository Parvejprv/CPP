/*  
Question: Write the CPP code for Integer to Roman.

Input: 1248
1000 + 200 + 40 + 8
Output: MCCXLVIII

Input: 542
500 + 40 + 2
Output: DXLII


*/


#include<iostream>
using namespace std;
string intToRoman(int num){
  string result = "";
  while(num >= 1000){
    result += "M";
    num -= 1000;
  }
  if(num >= 900){
    result += "CM";
    num -= 900;
  }
  if(num >= 500){
    result += "D";
    num -= 500;
  }
  if(num >= 400){
    result += "CD";
    num -= 400;
  }
  while(num >= 100){
    result += "C";
    num -= 100;
  }
  if(num >= 90){
    result += "XC";
    num -= 90;
  }
  if(num >= 50){
    result += "L";
    num -= 50;
  }
  if(num >= 40){
    result += "XL";
    num -= 40;
  }

  while(num >= 10){
    result += "X";
    num -= 10;
  }
  if(num >= 9){
    result += "IX";
    num -= 9;
  }
  if(num >= 5){
    result += "V";
    num -= 5;
  }
  if(num >= 4){
    result += "IV";
    num -= 4;
  }

  while(num >= 1){
    result += "I";
    num -= 1;
  }

  return result;
}

int main() {
  int num;
  cout << "Enter the number n: ";
  cin >> num;

  // function call
  string roman = intToRoman(num);
  cout << "Integer to Roman: " << roman << endl;

  return 0;
}


/*  
TC: O(N)
SC: O(N)

Output:-
----------
Enter the number n: 523
Integer to Roman: DXXIII
*/
