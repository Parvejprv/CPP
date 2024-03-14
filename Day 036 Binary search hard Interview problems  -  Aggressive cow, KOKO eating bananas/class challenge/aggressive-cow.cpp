/*  
Question:- Write a Program to arrange the cow at the given position, here is the below given stalls[] and size of the stalls, and total number of cow that I need to arrange.
*/

#include<iostream>
using namespace std;
int aggressiveCow(int arr[], int n, int k){
  int start = 1, end, mid, ans = -1;

  //Selection sort
  // sort the array | stalls[], if it is not sorted
  for (int i = 0; i < n-1; i++)
  {
    int index = i;
    for (int j = i+1; j < n; j++)
    {
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    swap(arr[i], arr[index]);
  }

  // // Display the integer array after sorting 
  // cout << "Array element after sorting"<< endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  
  
  end = arr[n-1] - arr[0];  
  while (start <= end) {
    mid = start + (end-start)/2;

    int count = 1, pos = arr[0];  // initially starting position, and count 1

    for (int i = 1; i < n; i++)
    {
      if(pos+mid <= arr[i]){
        count ++;
        pos = arr[i];
      }
    }

    // Check for count
    // if count  is more than equals too K then update answer and increase the search else reduce the search space.
    // if(count >= k){
    //   ans = mid;
    //   start = mid + 1;
    // } else {
    //   end = mid - 1;
    // }
    // Or
    if(count < k){
      end = mid - 1;
    } else {
      ans = mid;
      start =  mid + 1;
    }

  }
  return ans;
}
int main() {
  int arr[1000];

  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  cout << "Input the elements into the array:";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // enter the value of k
  int k;
  cout << "Enter the value of k(cow numbers to put on stalls):";
  cin >> k;
   
  // aggressiveCow
  int aggressiveCowRes = aggressiveCow(arr, n, k);
  cout <<"Minimum distance between any two of them is maximum:"<<aggressiveCowRes;

  return 0;
}


/*  
Output:-
TC :-  N log(n)
SC :- O(1)
---------
Enter the size of the array:5
Input the elements into the array:1 2 4 8 9
Enter the value of k(cow numbers to put on stalls:3
aggressiveCowRes:3



Output:-
----------- 

Enter the size of the array:5
Input the elements into the array:1 2 4 8 9
Enter the value of k(cow numbers to put on stalls):3
Minimum distance between any two of them is maximum:3
*/




























/*  
Solution 2: using the vector

-------------------------------------

int solve(int n, int k, vector<int> &stalls) {
    
        int start = 1, end, mid, ans = -1;
        // sort the vector
        sort(stalls.begin(),stalls.end());
        
        end = stalls[n-1] - stalls[0];
        
        while(start <= end){
            mid = start + (end-start)/2;
            
            int count = 1, pos = stalls[0];
            for(int i=1; i<n; i++){
                if((pos+mid) <= stalls[i]){
                    count ++;
                    pos = stalls[i];
                }
            }
            
            // Check if the count is greater than equals to the k
            if(count >= k){
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }


*/




/*  
Java
-------
public int maxDistance(int[] stalls, int k) {
        int n = stalls.length;
        int start = 1, end, mid, ans = -1;
        Arrays.sort(stalls);    // sort the array 10 1 2 7 5 --> 1 2 5 7 10
        
        end = stalls[n-1]-stalls[0];
        
        while(start <= end){
            mid = start + (end-start)/2;
            
            // initialize the count = 1, let suppose the first cow is going to put on stalls, at the first positions, i.e. stalls[0]
            int count = 1, pos = stalls[0];
            // run a loop till the n
            for(int i=1; i<n; i++){
                // check if pos-value + mid is less than equals to stalls[i], if yes then  increase the count value and set the pos value to stalls[i]
                if((pos+mid) <= stalls[i]){
                    count++;
                    pos = stalls[i];
                }
            }
            // check for valid cow placement
            if(count < k){
                end = mid - 1;
            } else {
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }

*/