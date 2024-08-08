/*  

Question: Count the total number of vowel present into the given string.

Input:
string s = "rohit"

Output:
2


Input:
string s = "Maria"

Output:
3


*/




#include<iostream>
using namespace std;

// Here, let we are traversing from first \ left to right
int countVowel(string str, int index, int n){
  // Base case
  if(index == n)
  return 0;

  
  // To Check if the str[index] is vowel or not
  if(
    str[index]=='a' ||
    str[index]=='e' ||
    str[index]=='i' ||
    str[index]=='o' ||
    str[index]=='u' 
  ){
    return  1 + countVowel(str, index+1, n);
  } else {
    return countVowel(str, index+1, n);
  }

}


int main() {

  // string str = "naman";
  string str;
  cout << "Enter the string str: ";
  cin >> str;

  int n = str.size();
  int index = 0;

  cout << countVowel(str, index, n);
 
}



/*  
Output:-
---------
Enter the string str: maria
3

Enter the string str: parvej
2

Enter the string str: Sania
3

*/
