#include<iostream>
using namespace std;

int main() {




  // (i). power of a number 
  // int n, ans;
  // int pow;

  // cout << "Enter n, pow : ";
  // cin >> n >> pow; ans = 1;   // 3, 3
  // for(int i = 1; i <= pow; i++) {
  //   ans =  ans * n;   // 3 => 3*3 => 3*3*3
  // }
  // cout << ans << endl;      // result



  int n, ans;
  int pow, num;

  cout << "Enter n, pow : ";
  cin >> n >> pow; 
  num = n;
  for(int i = 1; i < pow; i++) {
    num *= n;
  }
  cout << num << endl;      // result

}