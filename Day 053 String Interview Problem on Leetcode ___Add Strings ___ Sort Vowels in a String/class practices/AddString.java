/*  
 Question :- Write a Java Program to add the string on the basis of the number, but take as an string input from the user.
*/



import java.util.Scanner;

/*
 * @author :- Parvej Alam
 * AddString
*/
public class AddString {

  public static String add(String num1, String num2){
    // Ensure num1 is always the larger or equal length string
    if(num1.length() < num2.length()){
      // swap these two value 
      String temp = num1;
      num1 = num2;
      num2 = temp;
    }

    StringBuilder ans = new StringBuilder();
    int index1 = num1.length() - 1;
    int index2 = num2.length() - 1;

    int carry = 0, sum;

    while(index2 >= 0){
      sum = (num1.charAt(index1) - '0') + (num2.charAt(index2) - '0') + carry;
      carry = sum / 10;   // carry updation
      ans.append( (char) ('0' + sum % 10));
      index1--;
      index2--;
    }

    while(index1 >= 0){
      sum = (num1.charAt(index1) - '0') + carry;
      carry = sum / 10;   // carry updation
      ans.append((char) ('0' + sum % 10));
      index1--;
    }

    // a case where carry still remains 1
    if(carry > 0){
      ans.append(carry);
    }

    // reverse the result string
    ans.reverse();
    return ans.toString();
  }

  public static String addString(String num1, String num2){
    return add(num1, num2);
  }

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);

      System.out.println("Enter the num1(as string): ");
      String num1 = sc.next();
      System.out.println("Enter the num2(as string): ");
      String num2 = sc.next();

      // Method, call for adding the string
      String result;
      result = addString(num1, num2);

      System.out.println("Result: " + result);
    }

}


/*  
Output:-
----------
Enter the num1(as string): 
99589
Enter the num2(as string): 
698
Result: 100287



*/


