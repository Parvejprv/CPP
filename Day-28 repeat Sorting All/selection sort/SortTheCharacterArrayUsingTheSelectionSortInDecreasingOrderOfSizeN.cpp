/* 
Question: - Sort the given Character array using the selection sort in Decreasing order, With the help of the Function.
*/

#include<iostream>
using namespace std;

void SortTheArrayUsingSelectionSortDecreasingOrder(char arr[], int n) {
  
  for(int i=0; i<n-1; i++){
    int index = i;    
    for(int j=i+1; j<n; j++){
      if(arr[j] > arr[index])
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
  char arr[100];
  cout << "Input the elements into the Character array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Character Array After Sorting in Decreasing Order : " << endl;
  // Selection sort
  SortTheArrayUsingSelectionSortDecreasingOrder(arr, n);
  
}


/* 
Output 
*********

Enter the size n: 5
Input the elements into the Character array: p a r v e
Character Array After Sorting in Decreasing Order : 
v r p e a

Enter the size n: 5
Input the elements into the Character array: s a r a h
Character Array After Sorting in Decreasing Order :
s r h a a

 */
