/* 
OPTIMIZED Approach
-----------------------

Question:- 
875. KOKO eating bananas
*/

#include<iostream>
#include<vector>

using namespace std;

int kokoEatingBananas(vector<int>& piles, int n, int h){
  int start = 0, end = 0, mid, ans = -1;

  for(int i=0; i<n; i++){
    start += piles[i];    // sum of elements
    end = max(end, piles[i]);   // max ele
  }

  // cout << "end = " << end << endl;
  // cout << "start = " << start << endl;

  start /= h; 
  // cout << "start = " << start << endl;
  
  while (start <= end) {
    mid = start + (end-start)/2;

    int total_time = 0;
    for(int i=0; i<n; i++)
    {
      total_time += piles[i]/mid;
      if(piles[i]%mid)
      total_time++;
    }
    if(total_time > h){
      start = mid + 1;
    } else {
      ans = mid;
      end = mid - 1;
    }
  }
  return ans;
}
int main() {
  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  vector<int> piles(n);

  cout << "Input the elements into the array:";
  for (int i = 0; i < n; i++)
  {
    cin >> piles[i];
  }

  // enter the value of k
  int h;
  cout << "Enter the value of h(hours):";
  cin >> h;
   
  // KOKO eating Bananas
  int kokoEatingBananasResult = kokoEatingBananas(piles, n, h);
  cout << "kokoEatingBananasResult: " << kokoEatingBananasResult;

  return 0;
}


/*  
Output:-
----------
Enter the size of the array:4
Input the elements into the array:3 6 11 7
Enter the value of h(hours):8
kokoEatingBananasResult: 4


Enter the size of the array:5
Input the elements into the array:30 11 23 4 20
Enter the value of h(hours):5
kokoEatingBananasResult: 30


Enter the size of the array:5
Input the elements into the array:30 11 23 4 20
Enter the value of h(hours):6
kokoEatingBananasResult: 23
*/