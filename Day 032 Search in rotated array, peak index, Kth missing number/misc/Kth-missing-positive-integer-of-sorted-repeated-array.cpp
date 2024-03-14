/*  
  Question:- Find the Kth Missing positive integer of the sorted integer array using the vector.

*/


#include<iostream>
#include<vector>
using namespace std;

int KthMissingPostiveInteger(vector<int>& A, int k) {
  int  n = A.size();
  int prev = 0;

  for(int i=0; i<n; i++){
    int missing = A[i]-prev-1;
    cout << "Missing between " << prev << " and " << A[i] << " is " << missing << endl;
    if(missing >= k){
      return  prev+k;
    }
    k -= missing;
    prev=A[i];
    cout << "Previous = " << prev << endl;
  }
  cout << "The " << k << "th missing positive integer is " << A[n-1] + k << endl;
  return A[n-1] + k;
}
int main() {
  vector<int> nums;
  
  int n;
  cout << "Enter the size of the vector: ";
  cin >> n;

  cout << "Input the elements into the vector arr: ";
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    nums.push_back(num);
  }

  int k;
  cout << "Enter the Kth value: " << endl;
  cin >> k;

  int KthMissing =  KthMissingPostiveInteger(nums, k);
  cout << "The " << k << " th missing positive integer number is = " << KthMissing << endl;
  

  return 0;
}


/*  
Output:-
-----------
Enter the size of the vector: 5
Input the elements into the vector arr: 2 3 4 7 11
Enter the Kth value:
4
Missing between 0 and 2 is 1
Missing between 2 and 3 is 0
Missing between 3 and 4 is 0
Missing between 4 and 7 is 2
Missing between 7 and 11 is 3
The 4 th missing positive integer number is = 8


Enter the size of the vector: 5
Input the elements into the vector arr: 2 3 4 7 11 
Enter the Kth value:
5
Missing between 0 and 2 is 1
Previous = 2
Missing between 2 and 3 is 0
Previous = 3
Missing between 3 and 4 is 0
Previous = 4
Missing between 4 and 7 is 2
Previous = 7
Missing between 7 and 11 is 3
The 5 th missing positive integer number is = 9


Enter the size of the vector: 7
Input the elements into the vector arr: 2 3 4 7 11 13 18
Enter the Kth value:
10
Missing between 0 and 2 is 1
Previous = 2
Missing between 2 and 3 is 0
Previous = 3
Missing between 3 and 4 is 0
Previous = 4
Missing between 4 and 7 is 2
Previous = 7
Missing between 7 and 11 is 3
Previous = 11
Missing between 11 and 13 is 1
Previous = 13
Missing between 13 and 18 is 4
The 10 th missing positive integer number is = 16
*/