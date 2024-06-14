/*  
Question : Check Pangram of a given string 
Note:- if it is then return 1, otherwise return 0

*/




// Solution 1. (with the help of vector and using, function but not using the set)

// #include<iostream>
// #include<vector>
// #include<cctype>


// using namespace std;

// bool checkIfPangram(string sentence){
//   // create a vector array of size 26 and filled with 0
//   vector<bool> alpha(26, 0);

//   for(int i=0; i<sentence.size(); i++){
//     if(isalpha(sentence[i])){
//       char ch = tolower(sentence[i]);
//       alpha[ch - 'a'] = 1;
//     }

//     //or

//     // alpha[sentence[i] - 'a'] = 1;
//   }

//   // Or

//   // for(int i=0; i<sentence.size(); i++){
//   //   // here if I, substract the char 'a' from each sentence string character then it would give me an index of each character, after that make 1 that means it is present in the bool vector/array
//   //   int index = sentence[i]-'a';
//   //   alpha[index] = 1;
//   // }



//   // Now, We have to check for panagram by iterating each of the character place in vector
  
//   // for(int i=0; i<26; i++){
//   //   if(alpha[i] == 0){
//   //     return 0;
//   //   }
//   // }

//   for (bool present : alpha) {
//         if (!present) {
//             return 0;
//         }
//     }

//   return 1;
// }

// int main() {

//   // Here I need to take the input from the keyboard
//   string sentence;
//   cout << "Enter the sentence : ";
//   getline(cin, sentence);


//   // Call the function that would check if the sentence is pangram
//   bool result = checkIfPangram(sentence);

//   cout << "Result = " << (result ? 1 : 0) << endl;
  
// }


/*  
Output:-
-------------
Enter the sentence : The quick brwon fox jumps over the lazy dog
Result = 1



Enter the sentence : The quick brown fox jumps over the do 
Result = 0



TC : O(N)
SC: O(1)
*/







// Solution . 2 (with the help of a set)


#include<iostream>
#include<set>
using namespace std;
bool checkIfPangram(string sentence){
  // Create a set to store unique characters
  set<char> uniqueChars;

  for(char ch : sentence){
    if(isalpha(ch)){
      // Convert character to lower case and insert character into set
      uniqueChars.insert(tolower(ch));
    }
  }

  // If size of set is 26 , it means each of the character from a-z present into it, then return true
  if (uniqueChars.size() == 26)
  {
    return 1;
  }else {
    return 0;
  }

}

int main() {
  string sentence;
  cout << "Enter the sentence : ";
  getline(cin, sentence);

  // Call the function that would check if the sentence is pangram
  bool result = checkIfPangram(sentence);
  cout << "Result = " << (result ? 1 : 0) << endl;


  return 0;
}





/*  
Output:-
-----------
Enter the sentence : The quick brown fox jumps over the lazy dog
Result = 1


Enter the sentence : The quick brown fox jumps over the lazy do
Result = 0
 

*/







