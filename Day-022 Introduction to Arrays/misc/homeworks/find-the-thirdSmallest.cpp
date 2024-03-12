/*  
//5: Find the second smallest element in an array of unique elements of size n. Where n>3.
*/


/*  
Solution : 2nd
*/

#include<iostream>
#include<climits>
using namespace std;

int thirdSmallest(int arr[], int n){
  int firstSmallest = INT_MAX;
  int secondSmallest = INT_MAX;
  int thirdSmallest = INT_MAX;

  for(int i=0; i<n; i++){
    if(arr[i] < firstSmallest){
      thirdSmallest = secondSmallest;
      secondSmallest = firstSmallest;
      firstSmallest = arr[i];
    } else if(arr[i] != firstSmallest && arr[i] < secondSmallest) {
      thirdSmallest = secondSmallest;
      secondSmallest = arr[i];
    } else if(arr[i] != firstSmallest && arr[i] != secondSmallest) {
      firstSmallest = arr[i];
    }
  }


  // for(int i=0; i<n; i++){
  //   if(arr[i] < firstSmallest){
  //     firstSmallest = arr[i];
  //   }
  // }

  // for(int i=0; i<n; i++){
  //   if(arr[i] != firstSmallest && arr[i] < secondSmallest){
  //     secondSmallest = min(secondSmallest, arr[i]);
  //   }
  // }

  // for(int i=0; i<n; i++){
  //   if(arr[i] != firstSmallest && arr[i] != secondSmallest){
  //     thirdSmallest = min(thirdSmallest, arr[i]);
  //   }
  // }


  return thirdSmallest;
}

int main() {
  int n; 
  cout << "Enter the size of the array : ";
  cin >> n;

  int arr[n];
  cout << "Input the elements into the array : ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int thrdSmallest = thirdSmallest(arr, n);
  cout << "Third Smallest = " << thrdSmallest;
}












/*  

Solution No. 1 (Not Optimize and having much time)
---------------------------------------------------

#include<iostream>
#include<climits>
using namespace std;

int thirdSmallest(int arr[], int n){
  int firstSmallest = INT_MAX;
  int secondSmallest = INT_MAX;
  int thirdSmallest = INT_MAX;

  for(int i=0; i<n; i++){
    if(arr[i] < firstSmallest){
      firstSmallest = arr[i];
    }
  }

  for(int i=0; i<n; i++){
    if(arr[i] != firstSmallest && arr[i] < secondSmallest){
      secondSmallest = min(secondSmallest, arr[i]);
    }
  }

  for(int i=0; i<n; i++){
    if(arr[i] != firstSmallest && arr[i] != secondSmallest){
      thirdSmallest = min(thirdSmallest, arr[i]);
    }
  }


  return thirdSmallest;
}

int main() {
  int n; 
  cout << "Enter the size of the array : ";
  cin >> n;

  int arr[n];
  cout << "Input the elements into the array : ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int thrdSmallest = thirdSmallest(arr, n);
  cout << "Third Smallest = " << thrdSmallest;
}


*/