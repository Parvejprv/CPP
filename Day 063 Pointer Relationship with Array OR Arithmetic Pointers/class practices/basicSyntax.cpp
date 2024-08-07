#include<iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  int *ptr = arr;

  // /* Printing the address of the elements using ptr */
  // // Print the address of first element
  // cout << arr << endl;    // 0x61fef8
  // cout << arr+0 << endl;    // 0x61fef8
  // cout << &arr[0] << endl;    // 0x61fef8
  // cout << ptr << endl;        // 0x61fef8 

  // // Print the address of the second element or 1st index
  // cout << arr+1 << endl;    // 0x61fefc
  // cout << &arr[1] << endl;  // 0x61fefc


  // /* Printing the value of 0 index,via different ways*/
  // // Print the value of first element
  // cout << *arr << endl;    // 1
  // cout << arr[0] << endl;    // 1
  // cout << *arr+0 << endl;    // 1
  // cout << *(arr+0) << endl;    // 1
  // cout << *ptr << endl;         // 1



  /* 
  Now, Let suppose we wanna print the total addresses of it. 
  */
cout << "Printing the address of the array element:";
 for (int i = 0; i < 5; i++){
  cout << ptr+i << endl;
  // cout << arr+i << endl;
  // cout << &arr[i] << endl ;
 }


  /* 
  Now, Let suppose we wanna print the total values of it. 
  */
cout << "Printing the value of the array elements:"<< endl;
 for (int i = 0; i < 5; i++){
  cout << *(ptr+i) << " ";
  // cout << *(arr+i) << endl;
  // cout << arr[i] << endl ;
 }
 


  cout << endl;
  for(int i=0; i<5; i++){
    cout << *ptr <<  " ";
    ptr++;
  }



  return 0;
}





/* 
Output:-
------------
0x61fef0
0x61fef0
0x61fef0
0x61fef0
0x61fef4
0x61fef4
1
1
1
1
1



Printing the address of the array element:0x61fef0
0x61fef4
0x61fef8
0x61fefc
0x61ff00
Printing the value of the array elements:
1 2 3 4 5
1 2 3 4 5
*/






