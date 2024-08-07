/*  

Quesiton :- Swapping using reference varaible

*/



#include<iostream>
using namespace std;
void swapping(int &p1, int &p2){
  int temp = p1;
  p1 = p2;
  p2 = temp;

  cout<<&p1<<endl;
  cout<<&p2<<endl;
}

int main() {
  int num = 100, num2 = 200;
  swapping(num, num2);
  cout<<&num<<endl;  // prints the memory location of num
  cout<<&num2<<endl;   // prints the memory location of num
  cout << num << " " << num2 << endl;
}



/*  
Output:-
----------
0x61ff0c
0x61ff08
0x61ff0c
0x61ff08
200 100


// So, here we can say that they are pointing to same var

*/








