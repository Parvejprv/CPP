/*  
Introduction:-
--------------
- What is vector?
- How to initialize a vector in CPP?
- How to insert a value invector?
- How to access the elements of a vector.
- How to display all the elements of a vector
*/

#include<iostream>
#include<vector>

using namespace std;
int main() {
  // create and initialize an integer vector
  vector<int> a;
  cout << "Size before inserting any element: " << a.size() << endl;    // size = 0

  // note: vectors are dynamic data structures, they can grow as, push_back(value) is used to add the element into the vector in the back side of vector
  a.push_back(2);
  a.push_back(7);
  a.push_back(9);
  a.push_back(11);

  // displaying the vector element 
  for(int x : a){
    cout << x << " ";      // output -> 2 7 9 11
  }






  return 0;
}