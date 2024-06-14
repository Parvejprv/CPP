/*  
Question : Defanging an IP address.
example : 
input :-
---------
address = 1.1.1.1
Expected Output:-
-----------------
ans = 1[.]1[.]1[.]1


input:-
---------
address = 255.100.25.60
Expected Output: -
----------------------
ans = 255[.]100[.]25[.]60
*/

#include<iostream>
using namespace std;
string defindgingAnIPAddress(string  address){
  int index = 0;    // initially index = 0
  string ans;       // string empty initially

  while(index < address.size()){
    // there are two cases will be there for that, if the address of index is not equals to the dot(.)
    if(address[index] != '.'){
      ans = ans + address[index];        // add the character in the answer string
    } 
    // else, address of index would be equals to the '.' character
    else {
      ans = ans + "[.]";                // add [ ] around the . character
    }
    index++;    // Increment index to move to the next character 
  }

  return ans;
}

int main() {

  string address;
  cout << "Enter the IP address (using the form 1.1.1.1) : ";
  cin >> address;

  // Defindging an ip address
  string result = defindgingAnIPAddress(address) ;
  cout << result << endl;

  return 0;
}


/*  
Ouptut:
------------
Enter the IP address (using the form 1.1.1.1) : 1.1.1.1
1[.]1[.]1[.]1

*/