#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size:";
  cin >> n;

  // int k = n, x1 = n;
  // for(int i=x1; i>=1; i-=2){
  //   for(int j=0; j<k; k++){
  //     cout << " ";
  //   }

  //   for(int j=0; j<k; j++){
  //     cout << "*";
  //   }
  //   x1-=2;
  //   cout << endl;

  // }

  int x = (n+n+n)-2;

  int k = n;
  int x1 = n;

  // Top part of the pattern
  // for(int i=x1; i>=1; i-=2){
  //   for(int j=0; j<k; j++){
  //     cout << " ";
  //   }
  //   k++;
  //   for(int j=0; j<x1; j++){
  //     cout << "*";
  //   }
  //   x1-=2;
  //   cout << endl;
  // }
  

  // middle part of the pattern
  for(int i=0; i<x/2; i++){
    for(int j=0; j<x/2; j++){
      cout << "*";
    }
    for(int j=0; j<x/2; j++){
      cout << "@";
    }
    cout << endl;
  }

  // Print the bottom part of the pattern
    int stars = n;
    int ats = 0;
    for(int i = 0; i < n / 2; i++) {
        for(int j = 0; j < stars; j++) {
            cout << "*";
        }
        for(int j = 0; j < ats; j++) {
            cout << "@";
        }
        cout << endl;
        stars -= 2;
        ats++;
    }


  return 0;
}