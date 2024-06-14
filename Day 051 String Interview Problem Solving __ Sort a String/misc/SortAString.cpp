/*  
Question:- Sort a String 

*/




// Solution. 0 (Using a vector) - Tc: O(N), SC: O(1)
/*
#include<iostream>
#include<vector>
using namespace std;

// sort a String
string sortAString(string &s){

  // create a vector that will store the count of the character present into the string
  vector<int> alpha(26,0);

  // now, iterate over the string
  for(int i=0; i<s.size(); i++){
    int index = s[i] - 'a';
    alpha[index]++;

    // Or 

    // alpha[s[i] - 'a']++;
  }

  

  // // Now if I try to print the count of each character present into the string - alpha
  // // 2 0 0 0 0 0 0 1 0 0 0 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0
  // for(int ch : alpha){
  //   cout << ch << " ";
  // }

  


  // Now iterate over the vector
  string ans;
  for(int i=0; i<26; i++){
    // Now, I wanna find the character back from index, then need to add the 'a' to the index i
    char ch = 'a' + i;
    while(alpha[i]){
      ans += ch;
      alpha[i]--;
    }
  }

  return ans;
}

int main() {
  string str;
  cout << "Enter the string: ";
  cin >> str;


  // function call to sort the string 
  string result = sortAString(str);
  cout << "Result: " << result << endl;

  return 0;
}
*/

/*  
TC: O(N)
SC: O(N)

Output:-
----------------
Enter the string: alphasfdcian
Result: aaacdfhilnps

*/














// Solution. 1 (Using vector but without using any extra space)
/*
#include<iostream>
#include<vector>
using namespace std;

// sort a String
string sortAString(string &s){

  // create a vector that will store the count of the character present into the string
  vector<int> alpha(26,0);

  // now, iterate over the string
  for(int i=0; i<s.size(); i++){
    int index = s[i] - 'a';
    alpha[index]++;

    // Or 

    // alpha[s[i] - 'a']++;
  }

  // /***************************************************

  // // Now if I try to print the count of each character present into the string - alpha
  // // 2 0 0 0 0 0 0 1 0 0 0 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0
  // for(int ch : alpha){
  //   cout << ch << " ";
  // }

  // *****************************************************


  // Now iterate over the vector
  int index = 0;
  for(int i=0; i<26; i++){
    // Now, I wanna find the character back from index, then need to add the 'a' to the index i
    char ch = 'a' + i;
    while(alpha[i] > 0){
      s[index] = 'a' + i;
      index++;
      alpha[i]--;
    }
  }

  return s;
}

int main() {
  string str;
  cout << "Enter the string: ";
  cin >> str;


  // function call to sort the string 
  string result = sortAString(str);
  cout << "Result: " << result << endl;

  return 0;
}
*/




/*  
Note: here I didn't used any extra space so that the space compelxity will be O(1)/constant.

Time Complexity: O(N)
Space Complexity: O(1)

Output:-
-----------

Enter the string: abcdsfdcian
Result: aabccddfins

*/













// Solution. 3   Using Bubble Sort

// Bubble Sort (Bubble Sort repeatedely swaps the adjacent elements of they are in wrond order)
#include<iostream>
#include<string>
using namespace std;

void sortStringUsingBubbleSort(string &str){
  int n = str.size();   // size of the string

  for(int i = 0; i < n-1; i++){
    // cout << " i = " << i << " " << str[i] << endl;
    for(int j = 0; j < n-i-1; j++){
      // cout << " j = " << j << " " << str[j] << endl;

      // if str[j] is greater than atr[j+1], means its adjacent then swap these two
      if(str[j] > str[j+1]){
        //swap
        swap(str[j], str[j+1]);
      }
    }
  }
}

int main(){
  string s; 
  cout << "Enter the string: ";
  cin >> s;

  // function call to sort the String, using bubble sort
  sortStringUsingBubbleSort(s);
  cout << "Sorted string: " << s << endl;

  return 0;
}



/*  
TC: O(N^2)
SC: O(1)

Output:-
----------
Enter the string: abaccb
Sorted string: aabbcc

*/