//1: Take 20 elements from user input and find its sum with the help of an array.


#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // create an empty array
  int arr[n];

  // input elements into the array
  cout<<"Input the elements into the array : ";
  for (int i=0;i<n;i++) {
    cin>>arr[i];
  }

  int sum = 0;
  for (int i=0;i<n;i++) {
    sum += arr[i];
  }
  cout << sum;
}


/* 
 Output:-
 ---------

Enter a number: 20
Input the elements into the array : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
210

*/


