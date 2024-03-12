/* 
  (1). Take a character input from the user and specify the given character is vowel or consonant.
  hint : ch = 'a' | 'e' | 'i' | 'o' | 'u'     (character between these are vowel)

  remaining character lies in consonant.

*/

#include<iostream>
using namespace std;

int main() {

  char ch;
  cout << "Please, Enter a Character : ";
  cin >> ch;

  if(ch >= 65 && ch <=90 || ch >=97 && ch <=122) {
    if(ch == 'a' || ch == 'A') {
      cout << "vowel";
    } else if(ch == 'e' ||ch == 'E') {
      cout << "vowel";
    } else if(ch == 'i' || ch == 'I') {
      cout << "vowel";
    } else if(ch == 'o' || ch == 'O') {
      cout << "vowel";
    } else if(ch == 'u' || ch == 'U') {
      cout << "vowel";
    } else {
      cout << "consonant";
    }
  } else {
    cout << "Character not specified | Not a Character.";
  }
}
