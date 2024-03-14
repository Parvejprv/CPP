#include<iostream>
using namespace std;
int shipPackages(int weights[], int n, int days){
  int start = weights[0], end = 0, mid, ans = -1;

  for (int i = 0; i < n; i++)
  {
    if (weights[i] > start)
    {
      start = weights[i]; // maximum element of the array
    }
    end += weights[i]; // total sum of the elements
  }

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    int weight = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
      weight += weights[i];

      if (weight > mid)
      {
        count++;
        weight = weights[i];
      }
    }

    // Check for count to days
    if (count <= days)
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}

int main(){
  int arr[1000];

  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  // elements into the array
  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int days;
  cout << "Enter the number of days:";
  cin >> days;

  // shipPackages
  int shipPackagesRes = shipPackages(arr, n, days);
  cout << "shipPackagesRes:" << shipPackagesRes << endl;
  return 0;
}



/*  
Output:-
---------
Enter the size of the array:10
Input the elements into the array: 1 2 3 4 5 6 7 8 9 10
Enter the number of days:5
shipPackagesRes:15

*/











/*  
Leetcode Solution:-
---------------------

**********************************************************
int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();     // size of the vector
        int start = weights[0], end = 0, mid, ans = -1;
        
        for(int i=0; i<n; i++){
            if(weights[i] > start){
                start = weights[i];         // maximum element of the array
            }
            end += weights[i];          // total sum of the elements
        }
        
        while(start <= end){
            mid = start + (end-start)/2;
            
            int weight = 0, count = 1;
            for(int i=0; i<n; i++){
                weight += weights[i];
                
                if(weight > mid ){
                    count++;
                    weight = weights[i];
                }
            }
            
            // Check for count to days
            if(count <= days){
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
}

**********************************************************
*/