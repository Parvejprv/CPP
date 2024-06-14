/*  
Question : Sorting the Sentence of a given sentence

*/

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


