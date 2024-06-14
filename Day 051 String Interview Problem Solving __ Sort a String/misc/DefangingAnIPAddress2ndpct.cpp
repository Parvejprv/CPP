/*  
Question:-
------------
Defanging an IP address with the given particular IP address of 32-bit.

Example, Let suppose an IP address is given in the form of 32-bit IP address 10.0.0.255

then output result may be as,
10[.]0[.]0[.]255

that mean here symbol "." and it get replaced with.

*/



#include<iostream>
using namespace std;

// Function for defangin an IP address
string defangingAnIPAddress(string address){
  string ans;
  int index = 0;    // starting index initially


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
  // take a string input from the keyboard | user
  string str;
  cout << "Enter an IP address(IPv4 | 32-bit) : ";
  cin >> str;

  // call the function that is responsible for IP address defanging it.
  string defandingIPResult = defangingAnIPAddress(str);
  cout << "Defangin IP address result : " << defandingIPResult << endl;


  return 0;
}

/*  
TC : O(N)
Space complexity : O(N), Because I used here an extra variable as ans.

Output:-
-----------
Enter an IP address(IPv4 | 32-bit) : 10.1.1.0
Defangin IP address result : 10[.]1[.]1[.]0


Enter an IP address(IPv4 | 32-bit) : 0.0.0.255
Defangin IP address result : 0[.]0[.]0[.]255

*/