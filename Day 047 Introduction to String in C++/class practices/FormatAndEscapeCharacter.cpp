#include<iostream> 
using namespace std;

int main() {

  // Let suppose I wanna print the given string as of given,

/*   string s = "Rohit negi is a "good" boy."; // it does not directly print the given string
  
  cout << s << endl; */


  //  And It could not print directly as of given here, we need to use the escape character here, to print the string as we needed





  string s = "Rohit negi is a \"good\" boy";      // it avoids the escape charater and print the character after escape character

  cout << s << endl;
  cout << s.size() << endl;


  // Now, let suppose I want to print the escape character same, then how may I do it

  string s2 = "\\";
  cout << s2 << endl;



  return 0;
}

/*  
Output:-
----------
Rohit negi is a "good" boy
26

\
*/