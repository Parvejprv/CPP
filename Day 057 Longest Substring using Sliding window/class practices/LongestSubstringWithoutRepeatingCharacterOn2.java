/*  

Question : Longest substring of a String without repeating character of string, it include any characters.

*/

import java.util.Scanner;

/**
 * LongestSubstringWithoutRepeatingCharacterOn2
 */
public class LongestSubstringWithoutRepeatingCharacterOn2 {
  public static int longestUniqueSubtringLength(String s){

    int lenAns = 0 ;

    for(int i = 0; i < s.length(); i++){
      boolean[] visited = new boolean[256];   // let's create an array of size 256 because we have total character of size 256.
      for(int j = i;  j < s.length(); j++){
        if(visited[s.charAt(j)] == true){
          break;
        } else {
          // update the result, and mark as the current character is visited
          lenAns = Math.max(lenAns, j - i + 1);
          visited[s.charAt(j)] = true;
        }
      }
      // remove the first charater of previous
      visited[s.charAt(i)] = false;
    }

    return lenAns;
  }
  public static void main(String[] args) {
  
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the String: ");
    String str = sc.nextLine();

    int len = longestUniqueSubtringLength(str);
    System.out.println("Length of the Longest Substring : " + len);
  
  }
}

/* 

Output:-
---------
Enter the String: 
abcdecbeadf
Length of the Longest Substring : 6

*/










