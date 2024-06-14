/*  
Question : Defanging an IP address.

Solution no. 2
================
*/

#include<iostream>
using namespace std;
string DefangingAnIPaddress(string address){
  int index = 0;    // initial index
  string ans;   // resultant string

  while(index < address.size()){
    // Check each address index, if the address of the any index is equals to '.'
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
  // Take an string from the keyboard
  string s;
  cout << "Enter the IP Address (like- 1.1.1.1):";
  cin >> s;

  cout << "Initial string = " << s << endl;

  // Now, Calling the function and storing the result into another variable of string type
  string ans = DefangingAnIPaddress(s);
  cout << "After, defanged IP address is : " << endl;
  cout << ans << endl;
  
  return  0;
}



/*  
Output:-
-----------
Enter the  IP Address (like 1.1.1.1  i.e. using the dot(.) seperator):10.0.0.0
Initial string = 10.0.0.0
After, defanged IP address is :
10[.]0[.]0[.]0

*/