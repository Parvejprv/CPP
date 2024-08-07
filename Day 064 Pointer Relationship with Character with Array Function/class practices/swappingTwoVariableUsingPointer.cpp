/*  

Question : swapping of two number using pointer
i.e. using "Pass by pointer".

*/



#include<iostream>
using namespace std;


/*

20        10      // value
first    second        // var name
500       1000        // address


500   1000      // value
p1    p2        // var name
10    20        // address

*/

void swapping(int *p1, int *p2) // Pass by pointer
{ 
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;

  // Check if the addresses of p1, p2
  cout<<p1<<endl;
  cout<<p2<<endl;
  cout<<&p1<<endl;
  cout<<&p2<<endl; 
  
}

int main() {
  int first = 10, second  = 40;
  cout<<"Before : "<<first<<", "<<second<<endl;
  cout<<&first<<endl;
  cout<<&second<<endl;

  // swapping, and send the addresses of them
  swapping(&first, &second);
  cout << "After : " <<  first << ", " << second << endl;

}


/*  
Output:-
-----------
Before : 10, 40
After : 40, 10


Before : 10, 40
0x61fefc
0x61fef8
0x61fefc
0x61fef8
After : 40, 10


note: so that we can change the value at that particular

// ============================================
Note:- If we have address of any data, we can change the value directly with the help of the pointer.
// ============================================

*/