#include<iostream> 
#include<vector> 
// #include<algorithm> 

using namespace std;

int main() {
  // create  vector, declare
  vector <int> v;
  // size and capacity
  cout << "Size of v:" << v.size() << endl;
  cout << "Capacity of v:" << v.capacity() << endl;

  // let insert single element to vector
  v.push_back(2);
  cout << "size of the vector: " << v.size() << endl;
  cout << "Capacity of v:" << v.capacity() << endl;

  // let insert more than one element into the vector
  v.push_back(9);
  v.push_back(5);
  cout << "size of the vector: " << v.size() << endl;
  cout << "Capacity of v:" << v.capacity() << endl;


  // let insert more than one element into the vector
  v.push_back(10);
  v.push_back(11);
  cout << "size of the vector: " << v.size() << endl;
  cout << "Capacity of v:" << v.capacity() << endl;

  //Update value
  v[3] = 7;
  
  // print out all elements in the vector
  for (auto i : v) {
    cout << i << " ";
  }
  cout << '\n';
  cout << "size of the vector: " << v.size() << endl;
  cout << "Capacity of v:" << v.capacity() << endl;



  // to initialize with the same element
  // vector<int> w(5,2);
  // or
  vector<int> w;
  w.assign(5,2);
  cout<<"Vector W:\n";
  for(auto x:w)
      cout<<x<<" ";
  cout<<'\n';
  cout << "Size of the vector w: " << w.size() << endl;
  cout << "Capacity of w:" << w.capacity() << endl;

  // Now let suppose I want to insert one more element into it,
  w.push_back(10);
  cout<<"After adding an element to Vector W\n";
  for(auto x:w)
      cout<<x<<" ";
  cout<<'\n'<<"Size of Vector W is now: "<<w.size();
  cout<<'\n'<<"Capacity of Vector W is now: "<<w.capacity() << endl;


  // to pop | delete an element from back
  w.pop_back();//this will
  for(auto x:w)
  cout << x <<" ";
  cout << "\nSize of Vector W after popping is: "<<w.size();
  cout << "\nCapacity of Vector W after popping is: "<<w.capacity();

  // let suppose I want to delete a particular element of a vector 
  w.erase(w.begin()+3);// this will remove the element at index 3
  cout <<"\nAfter deleting an element from Vector W \n";
  for(auto x:w)
    cout << x <<" ";
  cout << endl;
   cout << "\nSize of Vector W after popping is: "<<w.size() << endl;
  cout << "\nCapacity of Vector W after popping is: "<<w.capacity() << endl << endl;


  // Now, suppose I want to insert an element to the particular vector index
  w.insert(w.begin()+2, 100);// this will remove the element at index 3
  cout <<"\nAfter Inserting an element to the particular vector index into vector W:\n";
  for(auto x:w)
    cout << x <<" ";
  cout << endl;
   cout << "\nSize of Vector W after popping is: "<<w.size();
  cout << "\nCapacity of Vector W after popping is: "<<w.capacity();


  // to clear() - it would remove all the elements from vector
  w.clear()
  cout << "\nSize of Vector W after popping is: "<<w.size();
  cout << "\nCapacity of Vector W after popping is: "<<w.capacity();

  
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
*/