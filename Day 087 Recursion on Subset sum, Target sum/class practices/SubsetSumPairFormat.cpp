/*  
Topic
========

Recursion
==========

Question: Subset Sum (pair)

Explanation here a number given in the form of array, your task is to print all the subset sum.

explanation: like jitne bhi subset honge unke sum ko hee output mein print karane hain,

num = 345
{3}   ->  3
{4}   ->  4
{5}   ->  5
{3, 4}   ->  7
{3, 5}   ->  8
{4, 5}   ->  9
{3, 4, 5}   ->  12
{}   ->  0

*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 
// subset|subsequences with subset sum
void subsetSum(int arr[], int index, int n, vector<pair<int, vector<int>>>&ans, vector<int>& temp, int sum) {
  if(index == n){
    ans.push_back({sum, temp});
    return ;
  }

  // Not included
  subsetSum(arr, index+1, n, ans, temp, sum);
  // Included
  temp.push_back(arr[index]);
  subsetSum(arr, index+1, n, ans, temp, sum+arr[index]);
  temp.pop_back();
}

int main() {
  int arr[] = {3, 4, 5};

  int n = sizeof(arr)/sizeof(arr[0]);   // size of the arr
  int sum = 0;
  int index = 0;

  // create a vector that contains pair of int and a vector of int type
  vector<pair<int, vector<int>>> ans; 
  vector<int> temp; 
  subsetSum(arr, index, n, ans, temp, sum);



  // Display the element from a vector that consist of and integer sum and a vector that gonna store that subsets those addition will be equals to the sum
  for(int i=0; i<ans.size(); i++){
    cout << ans[i].first << " - ";
    for(int j=0; j<ans[i].second.size(); j++){
      cout << ans[i].second[j] << " ";
    }
    cout << endl;
  }

  return 0;
}


/*  
Output:-
----------
0 - 
5 - 5
4 - 4
9 - 4 5
3 - 3
8 - 3 5
7 - 3 4
12 - 3 4 5

*/
