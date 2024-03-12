#include<iostream>
using namespace std;

long findFloor(int num){
  int i=1, res=0;

  // if here num == 0 || num == 1 then
  if(num == 0 || num == 1){
    return num;
  }

  while(res <= num){
    // i++;
    res = i*i;
    cout << "res: " << res <<" i " << i << endl;  
    i++;
    cout << endl;
    cout << i;
    cout << endl;
  }

  return  (i-2);
}
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  // find the floor sqrt of given number
  long result = findFloor(n);
  cout << "resutl is: "<< result ;
}

/* 
Output:-
---------
Enter the number: 16
resutl is: 4

*/