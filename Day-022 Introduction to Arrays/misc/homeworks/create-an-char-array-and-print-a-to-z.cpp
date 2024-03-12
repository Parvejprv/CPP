//4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

#include<iostream>
using namespace std;

void fillArray(char arr[], char ch, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = ch;
        ch++;
    }
}


int main() {

  // Create an Array (char)
  char arr[26];
  char ch = 'a';

  // Without using function
  cout<<"Output (Without Function) elements of the array : \n";
  for (int i=0; i<26; i++) {
    arr[i] = ch;  //'a', 'b', 'c', 'd'
    ch++;
    cout << arr[i] << " ";
  }
  cout << endl;

  // Function call
  fillArray(arr, 'a', 26);
  cout << "Output (With Function) elements of the array : " << endl;
  for (int i = 0; i < 26; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;

}

/* 
Output:-
---------

Output (Without Function) elements of the array : 
a b c d e f g h i j k l m n o p q r s t u v w x y z
Output (With Function) elements of the array :
a b c d e f g h i j k l m n o p q r s t u v w x y z

*/