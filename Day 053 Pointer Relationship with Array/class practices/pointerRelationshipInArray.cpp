#include<iostream>
using namespace std;
int main() {

  // create an array of integer type 
  int arr[5] = {2, 3, 4, 5, 6};

  // Let print the seperate each of the element address and print the it's value
  int *ptr1 = &arr[0];
  cout << "ptr1 = " << ptr1 << endl;
  cout << "ptr1 value = " << *ptr1 << endl;
  int *ptr2 = &arr[1];
  cout << "ptr2 = " << ptr2 << endl;
  cout << "ptr2 value = " << *ptr2 << endl;
  int *ptr3 = &arr[2];
  cout << "ptr3 = " << ptr3 << endl;
  cout << "ptr3 value = " << *ptr3 << endl;
  int *ptr4 = &arr[3];
  cout << "ptr4 = " << ptr4 << endl;
  cout << "ptr4 value = " << *ptr4 << endl;
  int *ptr5 = &arr[4];
  cout << "ptr5 = " << ptr5 << endl;
  cout << "ptr5 value = " << *ptr5 << endl;


  // Now, let suppose I want to print the next address with the help of 
  cout << arr << endl;
  cout << arr+1 << endl;
  cout << arr+2 << endl;
  cout << arr+3 << endl;
  cout << arr+4 << endl;

  



  return 0;
}

/*  
Output:-
--------
ptr1 = 0x61fee8
ptr1 value = 2
ptr2 = 0x61feec
ptr2 value = 3
ptr3 = 0x61fef0
ptr3 value = 4
ptr4 = 0x61fef4
ptr4 value = 5
ptr5 = 0x61fef8
ptr5 value = 6

*/