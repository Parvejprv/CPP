/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

*/

// Print all the Capital letters And Small letter of A to Z , Using the while loop. i.e. A-Z and a-z

#include<iostream>
using namespace std;

int main() {

  // For A-Z
  char chCapital = 'A';
  cout << "All Capital letters from A-Z : " << endl;
  while(chCapital <= 'Z') {
    cout << chCapital << " ";
    chCapital++;
  }

  // For a-z
  char chSmall = 'a';
  cout << endl << "All Small letters from a-z : " << endl;
  while(chSmall <= 'z') {
    cout << chSmall << " " ;
    chSmall++;
  }
}



/* 
Output:-
--------

All Capital letters from A-Z : 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z


All Small letters from a-z :
a b c d e f g h i j k l m n o p q r s t u v w x y z

*/