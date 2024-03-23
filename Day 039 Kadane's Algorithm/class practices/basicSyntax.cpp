#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of the vector:";
  cin >> n;

  vector<int> v(n); // creating a dynamic

  cout << "Enter the element into the vector:";
  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  //

  return 0;
}