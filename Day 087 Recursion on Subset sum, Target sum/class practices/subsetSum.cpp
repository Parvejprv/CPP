/*  
Question. WAP to print the subset sum of the given array elements.

Input:
arr[3] = {3, 4, 5}
Output:-
---------
0
5
4
9
3
8
7
12

*/


/* 

// Subset sum

#include<iostream>
using namespace std;

 
// Subset sum
void print(int arr[], int index, int n, int sum){
  if(index == n){
    cout << sum << endl;
    return;
  }

  // No
  print(arr, index+1, n, sum);
  // Yes, included to sum 
  print(arr, index+1, n, sum+arr[index]);

}
int main() {
  // int arr[] = {3, 4, 5};
  int arr[] = {1, 2, 3};
  int n = sizeof(arr)/sizeof(arr[0]); 
  int index = 0, sum = 0;
  print(arr, index, n, sum);
}


*/


/*  
Output:-
---------
arr = {3, 4, 5}
0
5
4
9
3
8
7
12


arr = {1, 2, 3}
0
3
2
5
1
4
3
6
*/




























// Now let suppose, I wanna to add the variation a bit more, and I want to print the sum from the main, then need to create a vector and push these into that vector


#include<iostream>
#include<vector>
using namespace std;
 
// Subset sum
void print(int arr[], int index, int n, vector<int>&ans, int sum){
  if(index == n){
    ans.push_back(sum);
    return;
  }

  // No
  print(arr, index+1, n, ans, sum);
  // Yes, included to sum 
  print(arr, index+1, n, ans, sum+arr[index]);

}
int main() {
  int arr[] = {3, 4, 5};
  // int arr[] = {1, 2, 3};
  int n = sizeof(arr)/sizeof(arr[0]); 

  vector<int> ans;
  int index = 0, sum = 0;
  print(arr, index, n, ans, sum);

  // Display the elements after adding into it
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " " << endl;
  }
}


/*  
Output:-
---------
0 
5
4
9
3
8
7
12








0 
3
2
5
1
4
3
6



*/