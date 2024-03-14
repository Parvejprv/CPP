/*  
Question 1. Aggressive Cow
*/

#include<iostream>
using namespace std;
int aggressiveCow(int stalls[], int n, int k){
  int start = 1, end, mid, ans = -1;

  // sort the array
  for(int i=0; i<n-1; i++){
    int index = i;
    for (int j = i+1; j < n; j++){
      if(stalls[j] < stalls[index]){
        index = j;
      }
    }
    // swap
    int temp = stalls[i];
    stalls[i] = stalls[index];
    stalls[index] = temp;
  }

  end = stalls[n-1] - stalls[0];

  while(start <= end){
    mid = start + (end - start)/2;

    int count = 1, pos = stalls[0];

    for(int i=1; i<n; i++){
      if (pos+mid <= stalls[i])
      {
        count++;
        pos = stalls[i];
      }
    }

    if(count < k){
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

  int n, k;
  cout << "Enter the size of the array:";
  cin >> n;

  cout << "Input the elements into the array:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  cout << "Enter the number of cow:";
  cin >> k;

  int aggressiveCowRes = aggressiveCow(arr, n, k);
  cout << "aggressiveCowRes : " << aggressiveCowRes;

  

  return 0;
}