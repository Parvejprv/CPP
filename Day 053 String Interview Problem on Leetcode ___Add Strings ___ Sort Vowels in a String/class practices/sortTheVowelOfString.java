// package CPP-DSA-180-Days.Day 053 String Interview Problem on Leetcode ___Add Strings ___ Sort Vowels in a String.class practices;

import java.util.Scanner;


public class sortTheVowelOfString {

  public static String sortVowel(String s){
    int[] lower = new int[26];
    int[] upper = new int[26];

    StringBuilder sb = new StringBuilder(s);

    // Iterate over the string
    for (int i = 0; i < sb.length(); i++) {
      char c = sb.charAt(i);
      // lower - a, e, i, o, u
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        lower[c - 'a']++;
        sb.setCharAt(i, '#');
      }
      // upper - A, E, I, O, U
      else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        upper[c - 'A']++;
        sb.setCharAt(i, '#');
      }
    }


    StringBuilder vowel = new StringBuilder();

    // upper
    for (int i = 0; i < 26; i++) {
      char ch = (char) ('A' + i);
      while(upper[i] > 0){
        vowel.append(ch);
        upper[i]--;
      }
    }
    // lower
    for (int i = 0; i < 26; i++) {
      char ch = (char) ('a' + i);
      while(lower[i] > 0){
        vowel.append(ch);
        lower[i]--;
      }
    }


    // Now we have the vowel in a string and we have to store the vowel at the position of '#' symbol that we assign earlier

        // take two pointer
        int first = 0, second = 0; // second points to the index of the vowel

        while(second < vowel.length()){
          if(sb.charAt(first) == '#'){
            sb.setCharAt(first, vowel.charAt(second));
            second++;
          }

          first++;
        }
      return sb.toString();
  }


  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    String str;
    System.out.println("Enter the String(str): ");
    str = sc.nextLine();

    // Method call to sort the vowel of a string
    String result = sortVowel(str);
    System.out.println("Result: " + result);


  }


}





/*  
 Output:-
 -----------



 
*/