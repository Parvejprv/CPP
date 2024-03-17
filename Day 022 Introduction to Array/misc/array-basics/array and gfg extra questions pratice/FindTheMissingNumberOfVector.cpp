#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> array, int n) {
  int sum = 0;
  // Sum of the elements that presents into the array
  for(int i=0; i<n-1; i++){
    sum += array[i];
  }

  cout << "sum : " << sum << endl;
  
  // Sum of the n Numbers
  int sumOfN = n*(n+1)/2;
  cout << "sumOfN : " << sumOfN << endl;

  // Now, Missing number
  int missingElement = sumOfN - sum;
  return missingElement;
}

int main() {
  int size;
  cout << "Enter the Size: ";
  cin >> size;

  vector<int> numbers(size-1);      // declared a vector of size n-1

  // Input the n-1 elements into the vector
  cout << "Input " << size-1 << " numbers seperated by space: ";
  for(int i=0; i<size-1; i++){
    cin >> numbers[i];
  }

  // Function call
  int result = missingNumber(numbers, size);

  cout << "The missing number is: "<< result <<endl;
}

/*  
Output:-
-------
Enter the Size: 5
Input 4 numbers seperated by space: 1 2 4 5
sum : 12
sumOfN : 15
The missing number is: 3
*/






/* *** Method 1. (Statically inputed elements) ***

#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> array, int n) {
  int sum = 0;
  // Sum of the elements that presents into the array
  for(int i=0; i<n-1; i++){
    sum += array[i];
  }

  cout << "sum : " << sum << endl;
  
  // Sum of the n Numbers
  int sumOfN = n*(n+1)/2;
  cout << "sumOfN : " << sumOfN << endl;

  // Now, Missing number
  int missingElement = sumOfN - sum;
  return missingElement;
}

int main() {
  vector<int> numbers = {1,2,3,4,6};    // assuming one number is missing
  int n = numbers.size() + 1;     // n is total number of elements including the missing element
  
  int result = missingNumber(numbers, n);
  cout << "The missing number is: "<< result <<endl;
}

*/



/*  
Output:
--------
sum : 16
sumOfN : 21
The missing number is: 5


*/