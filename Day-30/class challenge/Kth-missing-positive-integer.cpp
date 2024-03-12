/*  
Question: - Write a Program to find out the Kth Missing element of the integer array.

*/

// Solution 3. (Most Optimized approach -Binary search)
#include<iostream>
#include<vector>
using namespace std;
int KthMissingElement(vector<int>& a, int k){
  int start = 0, end = a.size()-1;

  while (start <= end)
  {
    int mid = start + (end-start)/2;
    int missing = a[mid] - mid -1;     // Calculate the number of missing elements

    if(missing < k){
      start = mid + 1;
    } else {
      end = mid - 1;
      k = k - missing;
    }
  }

  return a[start - 1] + k;
}
int main() {
  vector<int> arr;
  int size, k, temp;
  cout << "Enter the size of the array: ";
  cin >> size;

  cout << "Input the elements into the array (in ascending order): ";
  for (int i = 0; i < size; i++){
    cin >> temp;
    arr.push_back(temp);
  }

  cout << "Enter the Kth Position: ";
  cin >> k;

  // Function call
  int result = KthMissingElement(arr,k);
  cout << "Result: " << result;

  return 0;
}




















/* 
// Solution 2. Using an Vector of integer type


#include<iostream>
#include<vector>
using namespace std;

int KthMissingElement(vector<int>& a, int k){
  int size = a.size();    // size of the vector

  int missingCount = 0;
  int lastSeen = a[0];  // initially first element of the vector

  for(int i = 1; i < size; i++){  
    int num = a[i];
    // check if missing element is present in the array, between lastSeen & num
    while(lastSeen < num-1){
      // increase the count of the missing element
      missingCount++;
      if(missingCount == k){
        return lastSeen + 1;
      }
      lastSeen++;
    }
    lastSeen = num;
  }
}
int main() {
  vector<int> arr;
  int size, k, temp;
  cout << "Enter the size of the array: ";
  cin >> size;

  cout << "Input the elements into the array (in ascending order): ";
  for (int i = 0; i < size; i++){
    cin >> temp;
    arr.push_back(temp);
  }

  cout << "Enter the Kth Position: ";
  cin >> k;

  // Function call
  int result = KthMissingElement(arr,k);
  cout << "Result: " << result;

  return 0;
}
*/


/*  
Output:- TC (O(N2))
----------

Enter the size of the array: 6
Input the elements into the array (in ascending order): 1 2 3 5 7 8
Enter the Kth Position: 2
Result: 6


Enter the size of the array: 5
Input the elements into the array (in ascending order): 1 2 6 7 8
Enter the Kth Position: 4
Result: 5
*/















/*

// Solution 1. Using an Array
#include<iostream>
using namespace std;

int KthMissingPositiveInteger(int arr[],int size, int k){
  // Let say the first index has the missingElement value
  int missingCount = 0;
  int lastSeen = arr[0];    // initially

  cout << "missingCount = " << missingCount << endl;
  cout << "lastSeen = " << lastSeen << endl << endl;

  // run a loop from 1 to less than size of the array
  for(int i=1; i<size; i++){
    int num = arr[i];
    cout << "num : " << num << " when i " << i << endl; 
    // For each element num in the array, it checks if there are any missing integers between lastSeen and num.
    while(lastSeen < num-1){
      cout << "missingCount: " << missingCount << endl;
      missingCount++;
      cout << "missingCount: " << missingCount << endl;
      if(missingCount == k){
        return lastSeen + 1;
      }
      cout << "lastSeen: " << lastSeen << endl;
      lastSeen++;
    }
    lastSeen = num;
  }
}
int main() {
  int arr[1000];
  int size, k; 
  cout << "Enter the size of the array: ";
  cin >> size;
  
  cout << "Input the elements into the array (in ascending order): ";
  for (int i = 0; i < size; i++){
    cin >> arr[i];
  }
  
  cout << "Enter the Kth position: ";
  cin >> k;
  
  // Function call
  int  result = KthMissingPositiveInteger(arr, size, k);
  cout << "\nThe "<<k<<"th Missing Positive Integer is : "<<result<<endl;

  return 0;
}

*/


/*  
Input the elements into the array (in ascending order): 1 3 4 5 10
Enter the Kth position: 5

The 5th Missing Positive Integer is : 9
*/