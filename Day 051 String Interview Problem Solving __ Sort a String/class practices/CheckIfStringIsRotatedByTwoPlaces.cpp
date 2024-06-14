/*  
Question :- Check if a String is rotated by two places


Note:- Here we can check in both direction clockwise and anticlock wise both. If the String str1 rotated two places then return 1(true) otherwise 0(false).

*/



#include<iostream>
using namespace std;

// Function/method for checking the rotation of clockwise
void rotateClockwise(string str){
  // Let suppose here is a string "Leetcode"
  /*  
  Note:- While rotating the clockwise, I can not start with index 0, but definitely I can copy the last character into another variable, so that the space of the last will not remain occupied or it would be empty.
  */
  
  // last character of str
  char last = str[str.size()-1]; 

  // cout << "last character : " << ch << endl;
  int index = str.size()-2;     // we should start at the ending side of str

  // Now, I may use a loop to copy the element with its adjacent ele
  while(index >= 0){
    str[index+1] = str[index];
    index--;
  }
  str[0] = last; 
}

// Function to rotate anticlockwise
void rotateAnticlockwise(string s){

  // first character of the string
  char first = s[0];
  int index = 1;
  while(index < s.size()){
    s[index-1] = s[index];
    index++;
  }
  s[s.size()-1] = first;
}

int main() {

  string str1, str2;

  cout  << "Enter the string 1 : ";
  cin >> str1;
  cout  << "Enter the string 2 : ";
  cin >> str2;

  string clockwise = str1, anticlockwise = str1;

  // To check the rotation of the string clockwise
  rotateClockwise(clockwise);   // 1 place rotation
  rotateClockwise(clockwise);

  if(clockwise == str2){
    return 1;
  }

  // To check the rotation of the string clockwise
  rotateAnticlockwise(anticlockwise);
  rotateAnticlockwise(anticlockwise);

  if(anticlockwise == str2){
    return 1;
  }

  return 0;
}











// GFG Solution,


/*  
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    
    void rotateClockwise(string &s){
        // take last character of the string into another var
        char last = s[s.size()-1];
        int index = s.size()-2;
        
        while(index >= 0){
            s[index+1] = s[index];
            index--;
        }
        s[0] = last;
    }
    
    void rotateAnticlockwise(string &s){
        char first = s[0];
        int index = 1;
        
        while(index < s.size()){
            s[index-1] = s[index];
            index++;
        }
        s[s.size()-1] = first;
    }
    
    
    bool isRotated(string str1, string str2)
    {
        // Check if these two strings are not equal 
        if(str1.size() != str2.size())
        return 0;
        
        string clockwise, anticlockwise;
        
        clockwise = str1;
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);
        
        if(clockwise == str2)
        return 1;
        
        anticlockwise = str1;
        rotateAnticlockwise(anticlockwise);
        rotateAnticlockwise(anticlockwise);
        
        if(anticlockwise == str2)
        return 1;
        
        
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends



*/