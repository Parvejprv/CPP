/* 
G H I J K 
G H I J K
G H I J K
G H I J K
G H I J K
*/



#include<iostream>
using namespace std;

int main() {
  for(int i=1; i<=5; i++) {
    for(int j=1; j<=5; j++) {
      cout <<(char)('F'+j)<<" ";
    }
    cout << endl;
  }
  return 0;
}