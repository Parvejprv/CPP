/*  
Question:-
-----------

Topic Covered:-
================
- Double Pointer 
- Triple Pointer
- Fourth Pointer
- Multiple Pointer



- Double Pointer 
==================
int n = 10;
int *p = &n;    // single Pointer
int **q = &p;    // double Pointer

- Triple Pointer
==================
int n = 10;
int *p = &n;
int **ptr = &p;
int ***p1 = &ptr;

- Fourth Pointer
==================
int n = 10;
int *p = &n;
int **ptr = &p;
int ***p1 = &ptr;
int ****p2 = &p1;



And so on we can create multiple pointer as well as ...


int *xn pn = *xn + value

=========================================================
Note: 
- always a pointer will contains the address of its previous pointer only.
- Yes, we can change the value that is present initial in variable, 
- but we can not change the address of that variable.
=========================================================
*/


#include<iostream>
using namespace std;
void fun(int *p)
{
  *p = *p+10;   // 20
}

// void changeAddress(int *p1)
// {
//   p1++;
// }

void changeAddress(int **p1)
{
  *p1 = *p1+1;  
}
 
int main()
{

  int n = 10;
  int *p = &n;    // single Pointer
  int **p2 = &p;  // Double pointer
  int ***p3 = &p2; // Tripple ointer

  // cout<<p<<endl;
  // cout<<&p<<endl;
  // cout<<p2<<endl;
  // cout<<&p2<<endl;
  // cout<<p3<<endl;


  // Can we modify the value - value ko modify karna ho, jo n mein rakhi hai..
  // *p = *p+n;        // 20
  // cout<<n<<endl;  

  // Kya mai double pointer ko use karke vlaue ko badal sakta hu,
  // **p2 = **p2+5;      // 15
  // cout << n << endl; 

  // Kya mai Triple pointer ko use karke vlaue ko badal sakta hu,
  // ***p3 = ***p3+8;      // 18
  // cout << n << endl;  


  // fun(p);     // 20
  // // cout<<n<<endl;   // 20 - value of 
  // cout<<*p<<endl;   // 20



  // Again a questions comes to mind, can we change the address of this pointer - uding pointer p1
  // cout << &p << endl;       // address before function call - 0x61ff04
  // changeAddress(p);
  // cout << &p << endl;       // address after function call - 0x61ff04

  // using pointer p2
  cout<<p<<endl;      // address before function call - 0x61
  changeAddress(p2);
  cout<<p<<endl;      // address after function call - 0x61


}



/*  
Output:-
------------
20
15
18

20
0x61ff04    // same address
0x61ff04    // same address


*/











