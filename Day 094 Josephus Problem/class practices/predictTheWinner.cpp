/*  
Topic
========

Josephus Problem | Predict the winner
=======================================

Question: WAP to predict the winner from a given array of integer type data, having the a kth number to kill the person at a ratio.

*/

#include<iostream>
#include<vector>
using namespace std;
int winner(vector<bool>&person, int index, int n, int person_left, int k){ 
  // Base case
  if(person_left == 1){
    // run a loop over the person vector
    for(int i=0; i<n; i++){
      if(person[i] == 0){
        return i;
      }
    }
  }

  // find the position to kill
  int kill = (k-1)%person_left;
  
  while(kill--){
    // increase the index
    index = (index+1)%n;  // index increased
    // Let suppose, when a person index is already 1, i.e. he already assigned 1 as of the person vector 
    while(person[index] == 1) {
      index = (index+1)%n;    // increase index to kill the next person
    }
  }
  // outside loop, the first work to kill that person that's pointed by previosly by index
  person[index] = 1;
  // Next alive person
  while(person[index] == 1){
    index = (index+1)%n;
  }
  // if found the next alive person call the same function
  return winner(person, index, n, person_left-1, k);
}

int main() {

  int n = 5;
  int k = 4;  // Kth 
  vector<bool> person(n, 0);
  int index = 0, person_left = n;

  // create a vector of boolean type so that indicate if the person is killed or not
  int ans = 
  winner(person, index, n, person_left, k);

  return 0;
}


/*  
Output:-
----------


*/
