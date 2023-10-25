/*  
      Author    :     Parvej Alam
      Date      :     09-10-2023

*/



/* 
Question:-
-----------
WAP to reverse the elements of the array. 
*/

/* 
  Method (1). With the help of an extra array.

  #include<iostream>
  using namespace std;

  int main() {
    int arr[6] = {6, 11, 8, 9, 0, 3};

    // By Taking an extra Array, to reverse the array elements, we need to take an array and copy the first array value from last into the second array
    int temp[6];
    int i = 5, j = 0;
    while (i>=0) {
      temp[j] = arr[i];
      j++;
      i--;
    }

    // Now, print the temp array
    int p=0, q=0;
    while(p <= 5) {
      arr[p] = temp[q];
      cout << arr[p] << endl;
      p++;
      q++;
    }
    
  }

*/


/*  
Method (2). Swapping the starting number with the last number,.
then second number with the second last number and so on..



#include<iostream>
using namespace std;

int main() {
  int arr[6] = {6, 11, 8, 9, 0, 3};

  
  int left = 0, right = 5;
  while (left < right) {
    // swap
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
  }

  // Now, print the array
  for (int i=0; i<=5; i++) {
    cout << arr[i] << " ";
  }
  
}


OR Using in-build function -> swap()


#include<iostream>
using namespace std;

int main() {
  int arr[6] = {6, 11, 8, 9, 0, 3};

  
  int left = 0, right = 5;
  while (left < right) {
    // swap
    // int temp = arr[left];
    // arr[left] = arr[right];
    // arr[right] = temp;

    // swap()
    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  // Now, print the array
  for (int i=0; i<=5; i++) {
    cout << arr[i] << " ";
  }
  
}


*/







/*  
Without function:-
------------------


// Using swapping, for the reverse printing the number of the array.

#include<iostream>
using namespace std;

int main() {
  int arr[6] = {6, 11, 8, 9, 0, 3};

  
  // Function for swapping the elements of the array
  int start = 0, end = 5;
  while (start < end) {
    // swap
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // // swap()
    // swap(arr[start], arr[end]);
    start++;
    end--;
  }

  // Now, print the array
  for (int i=0; i<=5; i++) {
    cout << arr[i] << " ";
  }
  
}

*/




/*  
Here is the code with no return i.e. void,


// with the help of the Function:-

#include<iostream>
using namespace std;
void Swap(int arr[6]) {
  // Function for swapping the elements of the array
  int start = 0, end = 5;
  while (start < end) {
    // swap
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // // swap()
    // swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {
  int arr[6] = {6, 11, 8, 9, 0, 3};

  Swap(arr);      // Call the function to reverse the array
  // Now, print the array
  for (int i=0; i<=5; i++) {
    cout << arr[i] << " ";
  }
  
}


*/




/* 
// with the help of the Function (int arr[] as return type):-

#include<iostream>
using namespace std;
int* Swap(int arr[6]) {
  // Function for swapping the elements of the array
  int start = 0, end = 5;
  while (start < end) {
    // swap
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // // swap()
    // swap(arr[start], arr[end]);
    start++;
    end--;
  }
  return arr;
}

int main() {
  int arr[6] = {6, 11, 8, 9, 0, 3};

  int* reversedArr = Swap(arr);      // Call the function to reverse the array
  // Now, print the array
  for (int i=0; i<=5; i++) {
    cout << reversedArr[i] << " ";
  }
  
} 

*/


/* 
Output:-
-----------

3 0 9 8 11 6
*/








#include <iostream>
using namespace std;

int Swap(int arr[], int size) {

    // Function for swapping the elements of the array
    if (size <= 0) {
        return -1; // Error: Invalid array size
    }

    int start = 0, end = size - 1;
    while (start < end) {
        // swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0; // Success
}

int main() {
    int size;

    // taking size input
    cout << "Enter the size of the array : ";
    cin >> size;

    if(size <= 0){
      cout << "Invalid array size." << endl;
      return 1;
    }

    int arr[size];            // create an integer array of size
    // taking array element input
    cout << "enter the elements into the array : ";
    for(int i = 0; i < size; i++){
      cin >> arr[i];
    }


    int result = Swap(arr, size); // Call the function to reverse the array

    if (result == 0) {
        // Now, print the reversed array
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Error occurred while reversing the array." << endl;
    }

    return 0;
}
