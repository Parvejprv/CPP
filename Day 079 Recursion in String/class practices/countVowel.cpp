#include<iostream>
using namespace std;

// Here, let we are traversing from last\right to left
int countVowel(string str, int index){
  // Base case
  if(index == -1)
  return 0;

  
  // To Check if the str[index] is vowel or not
  if(
    str[index]=='a' ||
    str[index]=='e' ||
    str[index]=='i' ||
    str[index]=='o' ||
    str[index]=='u' 
  ){
    return  1 + countVowel(str, index-1);
  } else {
    return countVowel(str, index-1);
  }

}


int main() {

  // string str = "naman";
  string str;
  cout << "Enter the string str: ";
  cin >> str;

  int n = str.size();
  int index = n-1;

  cout << countVowel(str, index);
 
}



/*  
Output:-
---------
Enter the string str: rohit
2

Enter the string str: parvej
2


*/
