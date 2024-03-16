#include<iostream>
#include<vector>

using namespace std;
int main() {
  // Initialization of vector  with size and elements.
  vector<int> v = {2, 4, 6, 8, 10};

  // Displaying the vector elements
  cout << "Printing element of a vector:";
  for(int x:v){
    cout << x << " ";
  }
  cout << endl;


  v.pop_back();       // TC: O(1), because after removal of pop_back() element no need to shift the element any more
  cout << "Printing element of a vector after removing:";
  for(int x:v){
    cout << x << " ";
  }
  cout << endl;



  // entering n number of element 
  int n;
  cout << "Enter the size of the vector using the keyboard:";
  cin >> n;

  vector<int> arr(n);

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // to clear the element from a vector but it does not release the memory
  v.clear();      // TC: O(n), because need to clear each element atmost
  for(int x:v){
    cout << x << " ";
  }

  cout << endl;

  v.push_back(3);       // TC: O(n)
  v.push_back(4);
  v.push_back(9);
  for(int x:v){
    cout << x << " ";
  }
  cout << endl;

  // to erase a particular value from a vector
  v.erase(v.begin()+2);        // tc: O(n), because after removal of element we shift element upto n
  for(int x:v){
    cout << x << " ";
  }




  // size and capacity
  /* size indicates the total elements presents into the vector but capacity is the how many number of the element could be present in the vector too */


  // Iterator in a vector
  /* 
  v.begin():- it is pointing to the element start from the first element
  v.end():- this will be the index after the last element

  // ek aur hota hai, jo ki same issi ke ulta hota hai,
  v.rbegin():- it would start from the last element of the vector element
  v.rend():- this index is the just before of the starting element
  */





  return 0;
}

/*  
Output:-
--------

Printing element of a vector:2 4 6 8 10 
Printing element of a vector after removing:2 4 6 8       
Enter the size of the vector using the keyboard:5
1 2 3 4 5

3 4 9
3 4
*/