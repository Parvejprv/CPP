/* 
Question: - Sort the given Character array using the selection sort in increasing order, With the help of the Function.
*/

#include<iostream>
using namespace std;

void SortTheArrayUsingSelectionSort(char arr[], int n) {
  
  for(int i=0; i<n; i++){
    int index = i;    
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[index])
      index = j;    
    } 
    // swap
    swap(arr[index], arr[i]);
  }

  // display Character Array
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int main() {
  int n; 
  cout << "Enter the size n: ";
  cin >> n;

  // Character Array
  char arr[n];
  cout << "Input the elements into the Character array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Character Array After Sorting in Increasing Order : " << endl;
  // Selection sort
  SortTheArrayUsingSelectionSort(arr, n);
  
}


/* 
Output 
*********

Enter the size n: 5
Input the elements into the Character array: p a r v e
Character Array After Sorting in Increasing Order :
a e p r v

Input the elements into the Character array: n a m a n
Character Array After Sorting in Increasing Order :
a a m n n

Enter the size n: 5
Input the elements into the Character array: s a r a h
Character Array After Sorting in Increasing Order :
a a h r s

 */
