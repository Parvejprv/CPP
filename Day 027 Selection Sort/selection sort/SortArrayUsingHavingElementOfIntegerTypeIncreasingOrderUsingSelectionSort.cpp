/* 
5. Sort the Array using the Selection sort of Integer array which has the Elements as already into it. 

******* Selection Sort *******

*/



/* Method:- 1 */

/*
#include<iostream>
using namespace std;

int main() {

  int arr[6] = {10, 4, 1, 3, 2, 7};

  for(int i=0; i<5; i++){
    int index = i;
    for(int j=i+1; j<6; j++) {
      if(arr[j] < arr[index]) 
      index = j;
    }

    swap(arr[i], arr[index]);
  }

  // print the array
  cout << "Display the Output in the Sorted Order : " << endl;
  for(int i=0; i<6; i++){
    cout << arr[i] << " ";
  }
}
*/

/* 
Display the Output in the Sorted Order : 
1 2 3 4 7 10
*/






/* Method:- 02  (Let's take the user input into the array) 

******* Selection Sort Ascending Order ******


*/

/*
#include<iostream>
using namespace std;

int main() {

  int arr[1000];
  int n;
  cout << "Enter the size of the array : " << endl;
  cin >> n;

  // take the elements input from the user
  cout << "Input the elements into the array : ";
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[index]) 
      index = j;
    }

    swap(arr[i], arr[index]);
  }

  // print the array
  cout << "Display the Output in the Sorted Order : " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
*/


/* 

Output:-
--------

Enter the size of the array : 
6
Input the elements into the array : 10 3 2 4 5 9
Display the Output in the Sorted Order :
2 3 4 5 9 10


*/









/* 

****** Selection Sort Descending Order ******

*/

/* Method:- 03  (Let's take the user input into the array) */

#include<iostream>
using namespace std;

int main() {

  int arr[1000];
  int n;
  cout << "Enter the size of the array : " << endl;
  cin >> n;

  // take the elements input from the user
  cout << "Input the elements into the array : ";
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] > arr[index]) 
      index = j;
    }

    swap(arr[i], arr[index]);
  }

  // print the sorted array in descending Order
  cout << "Sorted Array in Descending Order Using Selection Sort : " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}



/* 
Output:-
--------

Enter the size of the array : 
7
Input the elements into the array : 10 2 90 3 1 8 4
Sorted Array in Descending Order Using Selection Sort :   
90 10 8 4 3 2 1

*/