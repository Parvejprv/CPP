/*  
Question:- Add the string.

str1 = "2568"
str2 = "698"

output: "3266"

num1 = "26583"
num2 = "698"

output: "27281"



*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string add(string num1, string num2){
  //here let suppose num1 length|size is greater than num2
    string ans;

    // index1 point last character of the string num1, and index2 points for last character of num2
    int index1 = num1.size()-1, index2 = num2.size()-1;

    int carry = 0, sum;     // take sum variable for sum of these two character and a carry variable if there any carry obtain from that

    

    // now, check while index2 is greater than equals to zero
    while(index2 >= 0){
      sum = ((num1[index1] - '0') + (num2[index2] - '0')  + carry);
      carry = sum / 10;
      char c = '0' + sum % 10;  // it would be converted
      ans += c;   // add it to the answer
      index1--;
      index2--; 
    }
    
    // index1 abhi bacha hai, means num1 bacha hai ...
    while(index1 >= 0){
      sum = (num1[index1] - '0') + carry;
      carry = sum / 10;   // to obtain the carry
      char ch = '0' + sum % 10;  // it would be converted into character
      ans += ch;   // add it to tha answer
      index1--;
    }

    // a case where carry still remain 1
    if(carry)
    ans += '1';

    // reverse the string
    reverse(ans.begin(), ans.end());
    return ans;
}

string addString(string num1, string num2){
    
  // Check for size of the num1 string and num2 string
  if(num1.size() < num2.size())
  return add(num2, num1);
  else
  return add(num1, num2);

}

int main() {
  string num1, num2;
  cout << "Enter the num1(as string): ";
  cin >> num1;
  cout << "Enter the num2(as string): ";
  cin >> num2;

  // function call to add the string a number
  string sum = addString(num1, num2);
  cout << "Result: " << sum << endl;

  return 0;
}


/*  
TC: O(N)
SC: O(N)

Output:-
-----------
Enter the num1(as string): 99589
Enter the num2(as string): 698
Result: 100287


*/