#include<iostream>
#include<vector>
using namespace std;

int smallestDistinctString(string &str){

  vector<int> counts (256,0);
  int first = 0, second = 0, len = str.length(), diff = 0;

  // find the all the unique character
  while(first < str.size()){
    if(counts[str[first]] == 0){
      diff++;
      counts[str[first]]++;
      first++;
    }
  }

  // Now, clear the counts
  for(int i = 0; i < 256; i++){
    counts[i] =  0;
  }
  first = 0;


  
  while(second < str.size())
  {
    // untill diff exist karta hai
    while(diff && second < str.size())
    {
      if(counts[str[second]] == 0)
      diff--;

      counts[str[second]]++;
      second++;
    }
    len = min(len, second-first);

    // diff ki value 1 na ban jaye
    while(diff != 1){
      len = min(len, second-first);
      counts[str[first]]--;  

      // Check a condition if counts[str[first]] == 0 , if yes then increase the first pointer
      if(counts[str[first]] == 0)
      diff++;

      first++;
    }

  }


  return len;
}

int main() {
  string s;
  cout << "Enter the String: " << endl;
  cin >> s;

  // function call
  int result = smallestDistinctString(s) ;
  cout << "Smallest Distinct string is: " << result << endl;


  return 0;
}