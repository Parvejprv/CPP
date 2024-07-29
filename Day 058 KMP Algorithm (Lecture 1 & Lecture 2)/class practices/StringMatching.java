/*  
 * 
 * String Matching
 * =================
 * 
*/

import java.util.Scanner;

public class StringMatching{

  public static int strStr(String str1, String s) {
    // if s length is zero then, return 0
    if(s.equals("")){
        return 0;
    }

    // ohterwise loop will goes from
    for(int i=0; i < (str1.length() - s.length())+1 ; i++){
        for(int j=0; j< s.length() ; j++){
            if(str1.charAt(i+j) !=  s.charAt(j)){
                break;
            }

            // and check
            if( j == s.length()-1){
                return i;
            }
        }
    }
    return -1;          // if these condition does not match then

  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the first String str1: ");
    String first = sc.nextLine();
    System.out.println("Enter the second String str2: ");
    String second = sc.nextLine();


    // Method call
    int resultSubstringIndex = strStr(first, second);
    System.out.println("Result = " + resultSubstringIndex);
    sc.close();

  }
}



/* 
Bruteforce approach:-
-----------------------

Output:-
--------
Enter the first String str1: 
cdabcdacy
Enter the second String str2:
abcdacy
Result = 2

*/