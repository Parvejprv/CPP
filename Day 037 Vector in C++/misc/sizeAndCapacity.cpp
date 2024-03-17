#include<iostream> 
#include<vector> 
#include<algorithm> 

using namespace std;

int main() {
  // // create  vector, declare
  // vector <int> v;
  // // size and capacity
  // cout << "Size of v:" << v.size() << endl;
  // cout << "Capacity of v:" << v.capacity() << endl;

  // // let insert single element to vector
  // v.push_back(2);
  // cout << "size of the vector: " << v.size() << endl;
  // cout << "Capacity of v:" << v.capacity() << endl;

  // // let insert more than one element into the vector
  // v.push_back(9);
  // v.push_back(5);
  // cout << "size of the vector: " << v.size() << endl;
  // cout << "Capacity of v:" << v.capacity() << endl;


  // // let insert more than one element into the vector
  // v.push_back(10);
  // v.push_back(11);
  // cout << "size of the vector: " << v.size() << endl;
  // cout << "Capacity of v:" << v.capacity() << endl;

  // //Update value
  // v[3] = 7;
  
  // // print out all elements in the vector
  // for (auto i : v) {
  //   cout << i << " ";
  // }
  // cout << '\n';
  // cout << "size of the vector: " << v.size() << endl;
  // cout << "Capacity of v:" << v.capacity() << endl;



  // // to initialize with the same element
  // // vector<int> w(5,2);
  // // or
  // vector<int> w;
  // w.assign(5,2);
  // cout<<"Vector W:\n";
  // for(auto x:w)
  //     cout<<x<<" ";
  // cout<<'\n';
  // cout << "Size of the vector w: " << w.size() << endl;
  // cout << "Capacity of w:" << w.capacity() << endl;

  // // Now let suppose I want to insert one more element into it,
  // w.push_back(10);
  // cout<<"After adding an element to Vector W\n";
  // for(auto x:w)
  //     cout<<x<<" ";
  // cout<<'\n'<<"Size of Vector W is now: "<<w.size();
  // cout<<'\n'<<"Capacity of Vector W is now: "<<w.capacity() << endl;


  // // to pop | delete an element from back
  // w.pop_back();//this will
  // for(auto x:w)
  // cout << x <<" ";
  // cout << "\nSize of Vector W after popping is: "<<w.size();
  // cout << "\nCapacity of Vector W after popping is: "<<w.capacity();

  // // let suppose I want to delete a particular element of a vector 
  // w.erase(w.begin()+3);// this will remove the element at index 3
  // cout <<"\nAfter deleting an element from Vector W \n";
  // for(auto x:w)
  //   cout << x <<" ";
  // cout << endl;
  //  cout << "\nSize of Vector W after popping is: "<<w.size() << endl;
  // cout << "\nCapacity of Vector W after popping is: "<<w.capacity() << endl << endl;


  // // Now, suppose I want to insert an element to the particular vector index
  // w.insert(w.begin()+2, 100);// this will remove the element at index 3
  // cout <<"\nAfter Inserting an element to the particular vector index into vector W:\n";
  // for(auto x:w)
  //   cout << x <<" ";
  // cout << endl;
  //  cout << "\nSize of Vector W after popping is: "<<w.size();
  // cout << "\nCapacity of Vector W after popping is: "<<w.capacity();
  // cout << endl;


  // // to clear() - it would remove all the elements from vector
  // cout << "Vector W after Clearing :";
  // w.clear();      // to clear the vector
  // cout << "\nSize of Vector W: "<<w.size();
  // cout << "\nCapacity of Vector W: "<<w.capacity() << endl;

  // // Create an vector
  // vector<int> arr;
  // arr.push_back(2);
  // arr.push_back(21);
  // arr.push_back(12);
  // arr.push_back(22);

  // // print element one to one | single at a time
  // cout << arr[0] << endl;
  // cout << arr[1] << endl;
  // cout << arr[2] << endl;

  // // print the vector element using a loop
  // for(int i=0; i<arr.size(); i++){
  //   cout << arr[i] << " ";
  // }

  // cout << "\n" << endl;
  // // Copy value of 1 vector to another
  // vector<int> res;
  // res = arr;
  // cout << arr.size() << endl;
  // cout << res.size() << endl;
  // // Print both vectors res & arr
  // // cout << "First Vector\n";
  // // for(auto x : arr){
  // //   cout << x << " ";
  // // }
  // cout << "\n" << endl;
  // cout << "Second Vector\n";
  // for(auto x : res){
  //   cout << x << " ";
  // }




  vector<int> ans;
  ans.push_back(5);
  ans.push_back(235);
  ans.push_back(15);
  ans.push_back(54);
  ans.push_back(54);
  ans.push_back(125);

  cout << "size = " << ans.size() << endl;
  cout << "capacity = " << ans.capacity() << endl;

  // sort vector element ascending order
  sort(ans.begin(), ans.end());
  // print the vector element after sorting
  for(int ele : ans)
  cout << ele << " ";
  cout << "\n" << endl;

  // sort vector element descending order
  sort(ans.begin(), ans.end(), greater<int>());
  // print the vector element after sorting
  for(int ele : ans)
  cout << ele << " ";
  cout  << endl;
  sort(ans.rbegin(), ans.rend());
  // print the vector element after sorting
  for(int ele : ans)
  cout << ele << " ";
  cout << "\n" << endl;

  // remove duplicates from sorted vector
  auto it = unique(ans.begin(), ans.end());
  ans.resize(it - ans.begin());

  int n = ans.size();
  cout << n << "";





  return 0;
}



/*  
Output:-
----------
Size of v:0
Capacity of v:0      
size of the vector: 1
Capacity of v:1      
size of the vector: 3
Capacity of v:4      
size of the vector: 5
Capacity of v:8
2 9 5 7 11
size of the vector: 5
Capacity of v:8
Vector W:
2 2 2 2 2
size of the vector w: 5
Capacity of w:5
After adding an element to Vector W
2 2 2 2 2 10
Size of Vector W is now: 6
Capacity of Vector W is now: 10
2 2 2 2 2
Size of Vector W after popping is: 5
Capacity of Vector W after popping is: 10

Vector after Clearing:
Size of Vector W: 0
Capacity of Vector W: 10
2
21
12
2 21 12 22


4
4


Second Vector
2 21 12 22







5 15 54 54 125 235

235 125 54 54 15 5

5
*/