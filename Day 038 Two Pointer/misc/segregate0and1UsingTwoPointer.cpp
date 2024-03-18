/*  
Question : Segregate 0 & 1 vector | array elements

*/
// Solution : 2  Pointers Approach | two pointer


#include<iostream>
#include<vector>
using namespace std;

void displayVectorElements(vector<int>& v){
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
}

// segregation of 0 and 1
void segregate0and1(vector<int>& arr){
  int n = arr.size();
  int start = 0, end = n-1;
  while(start < end){
    // check if arr[start] == 0, else arr[start] would be 1
    if(arr[start] == 0)
    {
      start++;
    }
    // else arr[start] would be 1 and check for arr[end], if it would be 0 then increase the loop counter both (start++, end--), else it would be already 1
    else 
    {
      // check for arr[end] == 0 or not, if yes then swap these two i.e. arr[start], arr[end] and perform loop counter as per needed, start++, end--
      if(arr[end] == 0){
        // swap
        swap(arr[start], arr[end]);
        start++;
        end--;
      } else {
        end--;
      }
    }
  }

  // display the vector elements 
  displayVectorElements(arr);
}

int main() {
  int n;
  cout << "Enter the size:";
  cin >> n;

  vector<int> arr(n); // create a vector of size n
  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  segregate0and1(arr);

  return 0;
}


/*  
Output:-
---------
Enter the size:5
Input the elements into the vector:1 0 1 0 1
0 0 1 1 1

Enter the size:7
Input the elements into the vector:1 1 1 0 0 0 1
0 0 0 1 1 1 1
*/





















/*  
// Solution 1. Without Function,

#include<iostream>
#include<vector>

using namespace std;

int main() {
  int n;
  cout << "Enter the size: ";
  cin >> n;

  vector<int> arr(n);

  // Input elements
  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int start = 0, end = n-1;
  // Check, run a loop while start is less than end
  while(start < end){
    // check if array of start is equals to zero then increase start pointer
    if(arr[start] == 0)
    {
      start++;
    }
    // else, arr[start] would be 1 then check arr[end], if it would be 0 then swap these two and perform loop counter both, (start++, end--)
    else 
    {
      if(arr[end] == 0){
        //swap(arr[end], arr[start]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
      } else {
        end--;
      }
    }
  }

  // Display the array element 
  cout << "Display vector element:" << endl;
  for(int x : arr){
    cout << x << " ";
  }

  return 0;
}



*/



/*  
Output:-
--------
Enter the size: 5
Input the elements into the vector:1 0 0 1 0
Display vector element:
0 0 0 1 1

*/
