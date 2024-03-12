/*  
Question 3. Sort the Character array in Decreasing order using the Selection Sort Algorithm in CPP.


*/


#include<iostream>
using namespace std;
int main() {
  // int arr[1000];
  char arr[1000];
  int n, index;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  } 

  for(int i=0; i<n-1; i++){
    index = i;
    for(int j=i+1; j<=n-1; j++){
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    
    swap(arr[i], arr[index]);
  }

  // Display the array after selection sort
  cout << "Display the Array After Sorting: " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

/*  
Output:-
---------

Enter the size of the array: 5
Input the elements into the array: 100 32 90 4 54

max index 3
100 32 90 4 54
max index 1
4 32 90 100 54
max index 4
4 32 90 100 54
max index 4
4 32 54 100 90

4 32 54 90 100



// Integer array
Enter the size of the array: 5
Input the elements into the array: 100 32 90 54 4
Display the Array After Sorting:
4 32 54 90 100


// Charater array
Enter the size of the array: 5
Input the elements into the array: a p c z m
Display the Array After Sorting:
a c m p z

*/