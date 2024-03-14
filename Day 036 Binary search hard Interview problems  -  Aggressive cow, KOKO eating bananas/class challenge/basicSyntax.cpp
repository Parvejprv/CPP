#include<iostream>
using namespace std;

int aggressiveCow(int arr[], int n, int k){
  int start = arr[0], end = 0, mid, ans = -1;

  for(int i=0; i<n; i++){
    if(arr[i] < start){
      start = arr[i];   //start
    }
    end = max(end, arr[i])-start;   // end
  }

  cout << " min " << start << "," <<end;

  while(start <= end){
    mid = start + (end-start)/2;
    
    int pos = arr[0], count = 1;
    for(int i=1; i<n; i++){
      if(pos+mid <= arr[mid]){
        count ++;
        pos = arr[i];
      }
    }
    // cout << "Distance min: " << dist << endl;
    if(count < k) {
      end = mid - 1;
    } else {
      ans = mid;
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  int arr[1000];

  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  // Input the elements into the array
  cout << "Input the elements into the array:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int k;
  cout << "Enter the value of the k:";
  cin >> k;
  
  // Function call for aggressiveCow
  int aggressiveCowRes = aggressiveCow(arr, n, k);
  cout << "The minimum distance of any two of them is maximum is = " << aggressiveCowRes << endl;
  
  return 0;
}
























//*********************************************************************************************************************************************************************************

/*  
******************************************
Let's Discuss the solution of it,
******************************************

arr[n] = {1, 2, 4, 8, 9}
k = 3

 1. let suppose I am trying to make a knot at the first position for the 1st cow, so I will put another after the just difference of 1, and so on.....

 that's why first knot will be on 1, second on 2, and 3 on 4 and their differences will be 1, 2 and here,

  So we need to find out the minimum possible value = 1 (for min distance 1)




 2. let suppose now, I am trying to make a knot at the first position for the 1st cow, so I will put another after making the large knot of previous one thus, here we use the step of 2 for each, and so on.....

 that's why 1st knot will be tie on 1 and  next one will on 4, and another will be on 8 and differences will be 
for min distance 2

  So we need to find out the minimum possible value = 1


  3. for min distance 3

  4. for min distance 4 is not possible in this Question



-----------------------------------------
Here we are given an array 'arr[]' containing information about cows. Each element in this array represents a cow and its position in the
Approach #2: 
-----------------------------------------









*/
//*********************************************************************************************************************************************************************************