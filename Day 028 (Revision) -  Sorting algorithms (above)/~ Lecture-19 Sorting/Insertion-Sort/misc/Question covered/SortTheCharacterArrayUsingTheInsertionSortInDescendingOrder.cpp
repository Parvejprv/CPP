/*  
Question:- Write a CPP Program to sort and print the Character array using the Insertion Sort techniques (Descending Order).
*/

#include<iostream>
using namespace std;
int main() {
  char arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the character elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Insertion Sort Descending Order, So that we need to search for the largest element
  for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
      if(arr[j] > arr[j-1]){
        //swap(arr[j], arr[j-1]);

        // Or Swap Manualy
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      } else {
        break;
      }
    }
  }

  // Display the array elements after Insertion Sort
  cout << "Display the Character array In Descending Order After Insertion Sort: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}

/*  
Output:-
--------
Enter the size of the array: 5
Input the character elements into the array: p a r v e
Display the Character array In Descending Order After Insertion Sort: v r p e a

Enter the size of the array: 5
Input the character elements into the array: n a z u k
Display the Character array In Descending Order After Insertion Sort: z u n k a 

*/