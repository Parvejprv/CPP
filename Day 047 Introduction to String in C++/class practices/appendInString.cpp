#include<iostream>
using namespace std;

int main() {
  string s1 = "rohit", s2 = "mohit";
  // string s3 = s1.append(s2);
  // cout << s3 << endl;        // rohitmohit


  // string s3 = s1 + s2;
  // cout << s3 << endl;           // rohitmohit
  // cout << s3.size() << endl;


  s1.push_back('p');
  cout << s1 << endl;
  cout << endl;

  s1.pop_back();
  cout << s1 << endl;
  s1.pop_back();
  cout << s1 << endl;


  return 0;
}

/*  
Output:
--------
rohitmohit

rohitmohit
10


rohitp

rohit
rohi
*/