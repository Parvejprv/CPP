/*  
Note:- this is the Solution using the single time function call, for checking if it is rotated by two places or not.
------------------------------------------------------------

Question :- Check if a String is rotated by two places, clockwise and anticlockwise rotation.
*/

/*
*/

#include<iostream>
using namespace std;
void rotateclockwise(string &s){
  // hold the last character into a var
  char last = s[s.size()-1];
  int index = s.size()-2;

  while(index >= 0){
    s[index+1] = s[index];
    index--;
  }
  s[0] = last;
}

void rotateanticlockwise(string &s){
  char first = s[0];
  int index = 1;

  while(index < s.size()-1){
    s[index] = s[index+1];
    index++;
  }
  s[s.size()-1] = first;
}

int main() {
  // take two string input from the user
  string str1, str2;
  cout << "Enter the string str1 : ";
  cin >> str1;
  cout << "Enter the string str2 : ";
  cin >> str2;

  // Function call to rotate the string 

  string clockwise = str1, anticlockwise = str1;
  rotateclockwise(clockwise);
  rotateclockwise(clockwise);


  // check if rotated string clockwise is equals to the str2 or not
  if(clockwise == str2){
    return 1;
  }

  rotateanticlockwise(anticlockwise);
  rotateanticlockwise(anticlockwise);

  // check if rotated string anticlockwise is equals to the str2 or not
  if(anticlockwise == str2){
    return 1;
  }
  return 0;

}


































/*  



#include<iostream>
using namespace std;

// rotate clock wise
void rotateclockwise(string &s){
  // last character
  char last = s[s.size()-1];
  int index = s.size()-2;

  while(index >= 0){
    s[index+1] = s[index];
    index--;
  }
  s[0] = last;
}

// rotate anti clockwise
void rotateanticlockwise(string &s){
  // first character
  char first = s[0];
  int index = 1;

  while(index < s.size()){
    s[index-1] = s[index];
    index++;
  }
  s[s.size()-1] = first;
}

int main() {

  string str1, str2;

  cout << "Enter the string str1: ";
  cin >> str1;
  cout << "Enter the string str2: ";
  cin >> str2;


  // assing these as clockwise and anticlockwise direction
  string clockwise = str1, anticlockwise = str1;

  
  // function call to check the string rotation
  rotateclockwise(clockwise);
  rotateclockwise(clockwise);

  // Now, check if the anticlockwise string is equals to the str2
  if(clockwise == str2){
    return 1;
  }

  rotateanticlockwise(anticlockwise);
  rotateanticlockwise(anticlockwise);

  if(anticlockwise == str2){
    return 1;
  }

  return 0;

}




 */




