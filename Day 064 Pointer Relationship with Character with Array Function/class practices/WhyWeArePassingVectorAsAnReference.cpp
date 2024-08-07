/*  

Question:- Now, Here a question comes to mind? Why we are passing the vector as a reference.

Ans: Because we wanna that changes would be urgently would be reflected there.

*/







#include<iostream>
#include<vector>
using namespace std;
void pass(vector<int>&v1){
  for (int i = 0; i < 5; i++)
  {
    v1[i] = 20;
  }
}



void doubleVal(int p[]){
  for(int i=0; i<5; i++){
    p[i] = p[i]*2;
  }
}

int main() {

  int arr[5] = {10, 20, 30, 40, 50};
  doubleVal(arr);

  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  // create a vector that is initially filled with 0
  vector<int> v(5, 0);

  // use a function and pass the reference varaible so that changes would be made immidiately,
  // otherwise changes would be made in the copy of the vector and not in the original vector

  pass(v);
  
  // Now, we wanna display the vector elements
  for(int i=0; i<5; i++)
    cout << v[i] << " ";

  return 0;
}



/*  
Output:-
---------
20 40 60 80 100 
20 20 20 20 20

*/









