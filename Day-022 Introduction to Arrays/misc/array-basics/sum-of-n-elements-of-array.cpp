/*  
  Question 3. Print the sum of n elements of the array.
*/

#include<iostream>
using namespace std;
int main(){
  int n, sum = 0;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[1000];

  cout << "Input the elements into the array: ";
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // sum of n number 
  cout << "Sum of n elements of the array: " << endl;
  for (size_t i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  cout << "Result: " << sum << endl;
}


/*  
Output:
-------
Enter the size of the array: 5 
Input the elements into the array: 10 20 30 40 50
Sum of n elements of the array:
Result: 150


Enter the size of the array: 5
Input the elements into the array: 90 3 4 222 4
Sum of n elements of the array:
Result: 323
*/