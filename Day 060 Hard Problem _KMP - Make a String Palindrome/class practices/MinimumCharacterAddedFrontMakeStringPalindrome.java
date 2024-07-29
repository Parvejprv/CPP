// package CPP-DSA-180-Days.Day 060 Hard Problem _KMP - Make a String Palindrome.class practices;

import java.util.Scanner;

public class MinimumCharacterAddedFrontMakeStringPalindrome {

  // Boolean method to check if a string isPalindrome 
  public static boolean isPalindrome(String str){
    int n = str.length();
    
    for (int i = 0, j = n-1; i <= j; i++, j--) {
      if(str.charAt(i) != str.charAt(j)){
        return false;
      }
    }
    return true;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("enter string : ");
    String s = sc.nextLine();

    int count = 0, flag = 0;

    while(s.length() > 0){
      // if a string becomes palindrome then break
      if(isPalindrome(s)){
        flag = 1;
        break;
      } else {
        count++;
        s = s.substring(0, s.length()-1);
      }
    }

    if(flag == 1){
      System.out.println("minimum character added to make string palindrome : " + count);
    }

  }
}




/*  
Output:-
-----------
enter string : 
BABABAA
minimum character added to make string palindrome : 2


*/