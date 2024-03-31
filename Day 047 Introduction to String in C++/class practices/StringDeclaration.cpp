/*  
Topic : String Declaration in CPP

*/

#include<iostream>
using namespace std;
int main(){

  // String introduction
  /*  
  String is a group/set of characters & data types which are enclosed within double quotes.

  - It can hold upto 256 characters including spaces and special symbols as well.
  - In C++, a string is declared using the following syntax:
    dataType stringName = "String Value";
  */

  

  // Now, Here a queston comes in mind, then sir we can also do the same thing using the char[], so what is the need of string , why it comes. (Yes, that's right but there is some reason behind it. here it is :- each time we need to give the size of the array and we need to write it as a character i.e. single quotes.)

  // char str[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};

  // for(int i = 0;  i < 11; i++)
  // cout << str[i];

  // cout << endl;











  // // String Declaration
  // string str1 = "Hello";
  // cout << str1;               // Hello

  // // size of the string
  // cout << "\n" << str1.size() << endl;          // 5

  // // a paragraph  with multiple lines
  // string str2 = "Samrat is a good boy.";                         // Empty string
  // cout << str2 << endl;




  // Now let suppose I want to take a line  input from user, then how do we declare it. (for example:- Enter the string str3: Parvej is a "good" boy. then it would only results : Parvej )

  // string str3;

  // cout << "Enter the string str3: " << endl;
  // cin >> str3;
  // cout << str3 << endl;           // Parvej





  // Now to read the complete line of input from the user we need to take input using the getline(cin, stringName)
  string str4;
  cout << "Enter the string str4 : " << endl;
  getline(cin, str4);

  cout << str4 << endl;




  return 0;
}



/*  
Output:-
---------
Enter the string str4 : 
Parvej is a "good" boy!
Parvej is a "good" boy!



*/