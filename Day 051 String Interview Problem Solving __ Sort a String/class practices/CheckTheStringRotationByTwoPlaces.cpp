/*  
Question :- Check a String is rotated by two places - clockwise and anticlockwise.

Note: if Yes then return 1 otherwise return 0.


*/

/* Solution: 2 (Calling each clockwise and anticlockwise single time only , no need to call that function two time.) */


// #include<iostream>
// using namespace std;

// void rotateclockwise(string &s){
//   if(s.empty()) return;

//   char last1 = s[s.size()-1];
//   char last2 = s[s.size()-2];

//   for(int i = s.size()-1; i >= 2; i--){
//     s[i] = s[i-2];
//   }
//   s[0] = last2;
//   s[1] = last1;
// }

// void rotateanticlockwise(string &s){
//   if(s.empty()) return;

//   char first1 = s[0];
//   char first2 = s[1];

//   for(int i = 0; i < s.size()-2; i++){
//     s[i] = s[i+2];
//   }
//   s[s.size()-2] = first1;
//   s[s.size()-1] = first2;
// }

// int main() {
//   string str1, str2;

//   cout  << "Enter the string 1:";
//   cin >> str1;
//   cout  << "Enter the string 2:";
//   cin >> str2;


//   string clockwise = str1, anticlockwise = str1;

//   rotateclockwise(clockwise); // rotate clockwise
//   rotateanticlockwise(anticlockwise); // rotate anticlockwise

//   bool ans = false;
//   if(clockwise == str2 || anticlockwise == str2){
//     return ans = true;
//   }

  

//   return ans;

// }







/* Solution : 1 to check if the string is got rotated by two places. */

#include<iostream>
using namespace std;

void rotateclockwise(string &s){
  // Check if the string is initially empty, then
  if(s.empty()) return;

  char last = s[s.size()-1];

  for(int index = s.size()-1; index >= 1; index--){
    s[index] = s[index-1];
  }
  s[0] = last;
  
}

void rotateanticlockwise(string &s){
  // Check if the string is initially empty, then
  if(s.empty()) return;

  char first = s[0];

  for(int index = 1; index < s.size()-1; index++){
    s[index] = s[index+1];
  }
  s[s.size()-1] = first;
}


int main() {
  string str1, str2;

  cout  << "Enter the string 1:";
  cin >> str1;
  cout  << "Enter the string 2:";
  cin >> str2;


  string clockwise = str1, anticlockwise = str1;

  rotateclockwise(clockwise); // rotate clockwise
  rotateclockwise(clockwise); // rotate clockwise
  rotateanticlockwise(anticlockwise); // rotate anticlockwise
  rotateanticlockwise(anticlockwise); // rotate anticlockwise

  bool ans = false;
  if(clockwise == str2 || anticlockwise == str2){
    return ans = true;
  }

  

  return ans;

}










