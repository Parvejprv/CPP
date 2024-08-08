/*  
Question: WAP to generate paranthesis of a given size that should be valid.

Ex:-
-----
input : n=3
Output(generate all the valid paranthesis):-
( ( ( ) ) ) 
( ( ) ( ) )
( ( ) ) ( )
( ) ( ( ) )
( ) ( ) ( )


*/

#include<iostream>
#include<vector>
using namespace std;


void paranthesis(int n, int left, int right, vector<string>&ans, string &temp){     // here we are sending it as a reference so that it should be also pop_back() after doing certain work definitely
  if(temp.size() == 2*n){
    ans.push_back(temp);
    return;
  }

  // Left side paranthesis should be added
  if(left < n){
    temp.push_back('(');
    paranthesis(n, left+1, right, ans, temp);
    temp.pop_back();
  } 
  
  // Right side paranthesis should be added
  if (right < left){
    temp.push_back(')');
    paranthesis(n, left, right+1, ans, temp);
    temp.pop_back();
  }
}


int main() {
  int n;
  cout<<"Enter the size of the parenthesis:" << endl;
  cin >> n;

  int open = 0, close = 0;
  // vector of type string that gonna store all the valid paranthesis
  vector<string> ans;
  string temp;
  paranthesis(n, open, close, ans, temp);

  // Display the vector elements after adding paranthesis
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }

}

/*

void paranthesis(int n, int left, int right, vector<string>& ans, string &temp) {

  // Base condition
  if(right + left == 2*n) {
    ans.push_back(temp);
    return;
  }

  // Left paranthesis
  if(left < n) {
    temp.push_back('(');
    paranthesis(n, left+1, right, ans, temp);
    temp.pop_back();  // because we are passing this as a reference so that it gonna work for same for all
  }

  // Right paranthesis
  if(right < left) {
    temp.push_back(')');
    paranthesis(n, left, right+1, ans, temp);
    temp.pop_back();  // need to pop back after doing certain works because we pass that as a refernce
  }

}

int main() {
  int n = 4;
  int open = 0, close = 0;
  vector<string> ans;   // final answer
  string temp;
  paranthesis(n, open, close, ans, temp);

  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

*/

/*  
Output:-
--------
n=3
( ( ( ) ) ) 
( ( ) ( ) )
( ( ) ) ( )
( ) ( ( ) )
( ) ( ) ( )


n=4
( ( ( ( ) ) ) ) 
( ( ( ) ( ) ) ) 
( ( ( ) ) ( ) ) 
( ( ( ) ) ) ( ) 
( ( ) ( ( ) ) ) 
( ( ) ( ) ( ) ) 
( ( ) ( ) ) ( ) 
( ( ) ) ( ( ) ) 
( ( ) ) ( ) ( ) 
( ) ( ( ( ) ) ) 
( ) ( ( ) ( ) ) 
( ) ( ( ) ) ( ) 
( ) ( ) ( ( ) ) 
( ) ( ) ( ) ( )



Enter the size of the parenthesis:
3
((()))
(()())
(())()
()(())
()()()



*/