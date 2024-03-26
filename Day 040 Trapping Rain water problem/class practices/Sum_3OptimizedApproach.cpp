/*  
Question:- Write a Program to find out the Triplet sum of vectors elements.

*/



// Solution 2. Using the Two pointer approach


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Sum_3(vector<int>& arr, int X){
  int n = arr.size(); 

  // Sort the array
  sort(arr.begin(), arr.end());

  for(int i=0; i<n-2; i++){
    int left = i+1;
    int right = n-1;

    while(left < right){
      int sum = arr[i] + arr[left] + arr[right];
      if(sum == X){
        return true;
      } else if(sum < X){
        left++;
      } else {
        right--;
      }
    }
  }
  return false;
}
int main() {
  int n;

  cout << "Enter the size:";
  cin >> n;

  vector<int> arr(n);   // create a vector array

  cout << "Input the elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int X;
  cout << "Enter the target X:";
  cin >> X;

  // 3Sum
  bool Sum3Result = Sum_3(arr, X);
  cout << "Result (true/false) = " << Sum3Result << endl;

  return 0;
}



/*  
Here,

TC: O(n*log(n))
SC: O(1)


Output:- 
---------
Enter the size:6
Input the elements into the vector:1 4 6 8 10 45
Enter the target X:25
Result (true/false) = 0


Enter the size:6
Input the elements into the vector:1 4 6 8 10 45
Enter the target X:13
Result (true/false) = 1

*/












// Solution: 1 (Using a Binary search ), and Here Time Complexity would be, O(n^2*log n )

/*  
#include<iostream>
#include<vector>
using namespace std;
int SumOfThreeTripplets(vector<int>& arr, int X){
  int n = arr.size();

  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      int find = X - (arr[i]+arr[j]);
      int start = i+1, end = n-1, mid;

      while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid] == find)
          return 1;
        else if(arr[mid] < find)
          start = mid + 1;
        else 
          end = mid - 1;
      }
    }
  }
  return 0;
}
int main() {
  int n;
  cout << "Enter the size n:";
  cin >> n;

  // create a vector array
  vector<int> arr(n);

  cout << "Input the elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // Enter the value of X
  int X;
  cout << "Enter the target element X:";
  cin >> X;

  // 3Sum function call
  int Sum3Result = SumOfThreeTripplets(arr, X);
  cout << "Result : " << Sum3Result << endl;

  return 0;
}

*/




/*  
Output:- TC: O(n^2*log(n))
---------
Enter the size n:6
Input the elements into the vector:1 4 6 8 10 45
Enter the target element X:13
Result : 1

Enter the size n:6
Input the elements into the vector:1 4 6 8 10 45
Enter the target element X:25
Result : 0

Enter the size n:6
Input the elements into the vector:1 4 6 8 10 45
Enter the target element X:24
Result : 1

*/







/*  
Question: Triplet sum in Array (GFG)
link: https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

Approach: Binary Search


bool find3Numbers(int A[], int n, int X)
{
    sort(A, A + n); // Sorting the array first
    
    for(int i=0; i<n-2; i++){
        if (i == 0 || A[i] != A[i - 1]) {    // Ensure distinct first element
            for(int j=i+1; j<n-1; j++){
                if (j == i + 1 || A[j] != A[j - 1]) { // Ensure distinct second element
                    int find = X-(A[i]+A[j]);
                    
                    // Binary search for the third element
                    int start = j+1, end = n-1;
                    while(start <= end){
                        int mid = start + (end-start)/2;
                        
                        if(A[mid] == find)
                            return true;
                        else if(A[mid] < find)
                            start = mid + 1;
                        else 
                            end = mid - 1;
                    }
                }
            }
            
        }
    }
    return false;
}


*/