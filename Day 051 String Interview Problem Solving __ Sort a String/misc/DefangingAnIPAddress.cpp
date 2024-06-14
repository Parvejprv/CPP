/*  
Question :- Write a Program to defanging an IP address.
*/

/* Solution 1.  */

#include<iostream>
using namespace std;
string defangingAnIPAddress(string address){
  string ans;   // resultant string initially
  int index = 0;

  while(index < address.size()){
    if(address[index] == '.'){
      ans = ans + "[.]";
    } else {
      ans = ans + address[index];
    }
    index++;
  }

  return ans;
}
int main() {
  // take a string input from the user/keyboard
  string ip;

  cout << "Enter the IP address:";
  cin >> ip;

  // function call
  string resStr = defangingAnIPAddress(ip);
  cout << "IP Address after defanging it : " << resStr << endl;
  
  return 0;
}


/*  
Output:-
------------
Enter the IP address:10.0.0.0
IP Address after defanging it : 10[.]0[.]0[.]0


Enter the IP address:1.1.1.1
IP Address after defanging it : 1[.]1[.]1[.]1

*/