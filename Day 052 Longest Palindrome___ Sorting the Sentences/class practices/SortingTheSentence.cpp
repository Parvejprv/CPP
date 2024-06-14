/*  
Question : Sorting the Sentence of a given string(sentence between 1-9) here each word consist the number between 1-9 at the end of the word.

Example:-
----------
Input: is2 sentence4 This1 a3
Ouput: This is a sentence

*/





// Solution. 0
/*
#include<iostream>
#include<vector>
using namespace std; 

vector<string> sortString (string &sentence){
  string temp;    // temporary string
  int count = 0, index = 0;   // count and index
  
  // Resultant vector
  vector<string> ans;

  // run a loop over the sentence size
  while (index < sentence.size())
  {  
    if(sentence[index] == ' '){
      // last character of each word
      int pos = temp[index-1] - '0';
      // cout << "Position = " << pos << endl;
      temp.pop_back();
      // cout << "Temp = " << temp << endl;
      ans[pos] = temp;
      temp.clear();
      count++;
      // cout << "Count = " << count << endl;
    } else {
      temp += sentence[index];
    }
    index++;
  }

  // when it goes to last word, then it holds some values yet,
  // last character of each word
    int pos = temp[index-1] - '0';
    // cout << "Position = " << pos << endl;
    temp.pop_back();
    // cout << "Temp = " << temp << endl;
    ans[pos] = temp;
    temp.clear();
    count++;
    // cout << "Count = " << count << endl;

  return ans;
}
int main() {
  string s;
  cout << "Enter a string (sentence) : ";
  getline(cin, s);

  vector<string> resultant;

  // function call
  resultant = sortString(s);
  cout << "Resultant String = ";
  for(string str : resultant){
    cout << str << " ";
  }


  return 0;
}
*/



/*  
Output:-
-----------

Enter a string (sentence) : is2 sentence4 this1 a3

*/















// Solution. 1 
#include<iostream>
#include<vector>
using namespace std;
vector<string> sortString(string &sentence){
  string temp;    // temporary string
  int index = 0;

  vector<string> ans(9); // resultant vector with initial size 9 (as digit 1-9)

  // run a loop over the sentence size
  while(index < sentence.size()){
    if(sentence[index] == ' '){
      // last character of each word
      int pos = temp.back() - '0';
      // cout << "pos : " <<pos << endl;
      temp.pop_back();    // remove the last digit from each word
      // now store that word into the ans at pos-1 index
      ans[pos - 1] = temp;
      temp.clear();   // after assigning word clear the temp
    } else {
      temp += sentence[index];
    }
    index++;
  }

  // handle the last word
  if(!temp.empty()){
    int pos = temp.back() - '0';
    temp.pop_back();
    ans[pos - 1] = temp;
  }


  // remove empty string from resultant vector
  vector<string> finalAns;
  for(auto &str : ans){
    if(!str.empty())
    finalAns.push_back(str);
  }

  return finalAns;

}

int main() {
  string sentence;
  cout << "Enter the sentence: ";
  getline(cin, sentence);

  // function call 
  vector<string> resultant = sortString(sentence);
  cout << "Resultant String: ";
  for(string str : resultant){
    cout << str << " ";
  }
  cout << endl;

  return 0;
}



/* 
Output:-
-----------
Enter the sentence: is2 sentence4 This1 a3

Resultant String: This is a sentence

*/





























/*  
Solution. 3 (Java)
=====================


*/




/*  
class Solution {
    public String sortSentence(String s) {
      StringBuilder temp = new StringBuilder();
      int index = 0;
      
      List<String> ans = new ArrayList<>(9);
      for(int i=0; i<9; i++){
        ans.add("");
      }
      
      
      // Run a loop over the sentence size
      while(index < s.length()){
        // Check if the string has any spaces, then find its position
        if(s.charAt(index) == ' '){
          int pos = temp.charAt(temp.length()-1) - '0';
          temp.setLength(temp.length() - 1);  // Remove the digit after finding pos
          ans.set(pos - 1, temp.toString());  // Now, assign that word to ans list
          temp.setLength(0);    // clear the temp string     
        } else {
          temp.append(s.charAt(index));
        }
        index++;
      }
      
      // Handle the last word
      if(temp.length() > 0)
      {
        int pos = temp.charAt(temp.length()-1) - '0';
        temp.setLength(temp.length()-1);  // Remove
        ans.set(pos - 1, temp.toString());
      }
      
      
      // Remove the empty string from the resultant list and join then into a single string
      StringBuilder  result = new StringBuilder();
      for(String str :  ans){
        if(!str.isEmpty()) {
          if(result.length() > 0){
            result.append(" ");
          }
          result.append(str);
        }
      }
      
      return result.toString();
      
    }
}

*/





