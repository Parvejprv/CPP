/*  
Question: Here two string is given. Str1 and Str2, we need to rotate the any of the one string 2 times and need to check if the another string is same or not. If it is same then return 1 otherwise return 0.

*/

#include<iostream>
using namespace std;

// Function to rotate a string clockwise by one
void rotateClockwise(string s){

  // // size of the string
  // int n = s.size();    // size of the string
  // cout << "length = " << n << endl;

  char c = s[s.size()-1];     // last character  
  // cout << "character = " << c << endl;
  // Now, we have to start the rotating from next element from last
  int index = s.size()-2;
  while(index >= 0){
    s[index+1] = s[index];
    index--;
  }
  s[0] = c;
}

// Rotate anticlockwise
void rotateAntiClockwise(string s){
  char c = s[0];
  int index = 1;

  while(index < s.size()){
    s[index] = s[index+1];
    index++;
  }
  s[s.size()-1] = c;
}

int main() {

  // take 2 string as input from the user
  string str1,str2;

  cout << "Enter the String 1: ";
  cin>>str1;
  cout << "Enter the String 2: ";
  cin>>str2;

  rotateClockwise(str1);
  rotateClockwise(str1);
  if(str1 == str2){
    cout << 1 << endl;
  }

 
  rotateAntiClockwise(str1);
  rotateAntiClockwise(str1);
  if(str1 == str2){
    cout << 1 << endl;
    return 0;
  }

  return 0;
}