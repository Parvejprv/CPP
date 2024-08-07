/*  
Topic: Pass by pointer

Let suppose a function for increment is created and, I am try to call that from  main() and wanna increment a integer value and print same into the main().

- Can we do it? 
Ans:- No, we can not do it direct





// ================================================

Note:-
1. Here Passing the pointer as a parameter is same as passing an array.

Ex:
I mean while passing a pointer we already seen in above examples,

in pointer
------------
void doubleArray(int *ptr){
  for(int i=0; i<5; i++){
    ptr[i] = ptr[i]*2;
  }
}


in array
---------
void doubleArray(int arr[]){
  for(int i=0; i<5; i++){
    arr[i] = arr[i]*2;
  }
}


// ================================================

*/




/*  

#include<iostream>
using namespace std;

void incr(int n){
  n++;
}

int main() {
  int num = 10;
  int temp = num;

  incr(num);
  cout << num << endl;

}

*/



// Note:- Then How may I solve this problem, can we solve it ?
// Ans:- Yes, we can with the help of the pointer that is called "Pass by pointer".

#include<iostream>
using namespace std;

// here we pass an address into incr() so need to hold it here as a pointer
void incr(int *ptr){
  *ptr = *ptr+1;
}

// create a function that would gonna double the array elements value
void doubleArray(int *ptr){
  for(int i=0; i<5; i++){
    ptr[i] = ptr[i]*2;
  }
}



int main() {
  int num = 10;
  int temp = num;

  // don't pass the direct value to incr() pass the address of it
  incr(&num);
  cout << num << endl;


  // or
  int a = 5;
  int *p = &a;
  *p = *p + 1;
  cout << *p << endl;


  int  arr[5] = {1, 2, 3, 4, 5};
  // Print elements before doubleArray() function call
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

  cout << endl;
  // print the memory locaton | address, before function call
  for(int i=0; i<5; i++){
    cout << arr+i << endl;
  }

  doubleArray(arr);

  // Print elements after doubleArray() function call
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

  cout << endl;
  // print the memory locaton | address after function get called
  for(int i=0; i<5; i++){
    cout << &arr[i] << endl;
  }


}



/*  
Note:-
1. Here Passing the pointer as a parameter is same as passing an array.

Ex:
I mean while passing a pointer we already seen in above examples,

in pointer
------------
void doubleArray(int *ptr){
  for(int i=0; i<5; i++){
    ptr[i] = ptr[i]*2;
  }
}


in array
---------
void doubleArray(int arr[]){
  for(int i=0; i<5; i++){
    arr[i] = arr[i]*2;
  }
}






Output:-
------------

earlier
------------
10



after (via Pass by pointer)
-------
11






Output:-
------------
11
6
1 2 3 4 5 
0x61fedc
0x61fee0
0x61fee4
0x61fee8
0x61feec
2 4 6 8 10
0x61fedc
0x61fee0
0x61fee4
0x61fee8
0x61feec






*/




