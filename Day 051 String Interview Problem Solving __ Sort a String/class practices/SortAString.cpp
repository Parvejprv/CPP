/*  
Question : Sort a String in ascending order.

*/



// Solution : Using a vector

// Sort a stirng within O(N) time complexity and SC: O(N)

#include<iostream>
#include<vector>
using namespace std;

string sortAString(string &s){

  // Create a vector that will store the count of the character present into the string
  vector<int> alpha(26, 0);
  // Traverse the string and store the count of each character
  for(int i = 0; i < s.size(); i++){
    int index = s[i]-'a';   // this will gives me the count 
    alpha[index]++;

    // Or
    // alpha[s[i]-'a']++;
  }

  // Now, The count of the present character are store into the vector, Now Iterate over it
  string ans;
  for(int i=0; i<26; i++){
    char ch = 'a' + i;
    while(alpha[i]){
      ans += ch;
      alpha[i]--;
    }
  }
  return ans;
}

int main() {
  string s;
  cout << "Enter a string : ";
  cin >> s;

  // Function call to sort the string 
  string result = sortAString(s);
  cout << "Result = " << result << endl;

  return 0;
}

/*  
TC: O(N)
SC: O(N), because here I used one extra variable ans as a string that only take extra space.

Output:-
-----------
Enter a string : cba
Result = abc
*/












// Solution 6:  Using simple compare with indeces  Without using any extra space.

/*  

#include<iostream>
using namespace std;
void sortStringSMP(string &str){
  int n = str.length();   // length of the string
  int count[26] = {0};    // Array to store the count of each character assuming only lower case
  
    for(int i=0; i<n; i++){
      int index = str[i] - 'a';
      cout << "index = " << index << endl;
      cout << "Character = " << str[index] << endl;
      count[index]++;
      // Or
      // count[str[i] - 'a'];
    }

    // Sorting the array using the ascii
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
      while (count[i] > 0){
        // convert to character
        str[index] = i + 'a';
        index++;
        count[i]--;
      }
    }
}

int main(){
  string str;
  cout << "Enter the string : ";
  cin >> str;

  // Call the function
  sortStringSMP(str);
  cout << "Sorted String : " << str << endl;

  return 0;
}

*/

/*  
Output:-
-----------
Enter the string : cba
Sorted String : abc

*/



















// solution : Selection sort


// #include<iostream>
// using namespace std;
// void sortStringUsingSelectionSort(string &str){
//   int n = str.length();
//   for(int i=0; i<n-1; i++){
//     int minIndex = i;
//     for(int j=i+1; j<n; j++){
//       if(str[j] < str[minIndex]){
//         swap(str[j], str[minIndex]);
//       }
//     }
//   }
// }
// int main() {
//   string str;
//   cout << "Enter the string : ";
//   cin >> str;

//   // Call the function
//   sortStringUsingSelectionSort(str);
//   cout << "Sorted String : " << str << endl;

//   return 0;
// }


/*  
TC : O(n^2)
SC: O(1)

Output:-
----------
Enter the string : name
Sorted String : aemn

*/





















/*  
// Solution 2. Using Insertion sort


#include<iostream>
using namespace std;
void sortStringUsingInsertionSort(string &str){
  int n = str.length();
  for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
      if(str[j] < str[j-1]){
        swap(str[j], str[j-1]);
      }
    }
  }
}
int main() {
  string str;
  cout << "Enter the string : ";
  cin >> str;

  // Call the function
  sortStringUsingInsertionSort(str);
  cout << "Sorted String : " << str << endl;

  return 0;
}


*/



/*  
Output:-
----------
Enter the string : name
Sorted String : aemn

*/
















/*
Solution 1: Using the Bubble Sort

// Bubble Sort (Bubble Sort repeatedely swaps the adjacent elements if they are in wrong order)
#include<iostream>
#include<string>
using namespace std;

void sortStringUsingBubbleSort(string &str){
  int n = str.length();
  for(int i=0; i<n-1; i++){
    // cout << " i = " << i << " " << str[i] << endl;
    for(int j=0; j<n-i-1; j++){
      // cout << "j  = " << j <<  " " << str[j] << endl;
      if(str[j] > str[j+1]){
        swap(str[j], str[j+1]);
      }
    }
  }

}

int main() {
  string s;
  cout << "Enter the string : ";
  cin >> s;

  // Call the function to sort the string using the bubble sort technique
  sortStringUsingBubbleSort(s);
  cout << "Sorted String : " << s << endl;

  return 0;
}
*/

/*  
Output:-
-----------
Enter the string : name
Sorted String : aemn

*/