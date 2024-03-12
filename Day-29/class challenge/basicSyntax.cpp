/* 
          Binary Search
        =================


*/

#include<iostream>
using namespace std;
int main() {
  int arr[5] = {2, 4, 6, 8, 10};
  int key = 10;

  // Binary Search
  int start = 0, end = 4, mid;

  while(start <= end){
    mid =  (start + end) / 2;
    cout << "Mid = " << mid << endl;
    if(arr[mid] == key){
      cout << "Got it!";
      break;
    } else if(arr[mid] < key){
      start = (mid+1);
    } else {
      end = (mid-1);
    }
  }

}

/*  
Output:-
---------
Mid =2
Mid =3
Mid =4
Got it!

*/