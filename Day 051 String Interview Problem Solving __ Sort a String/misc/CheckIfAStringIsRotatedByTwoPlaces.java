import java.util.Scanner;



/**
 * CheckIfAStringIsRotatedByTwoPlaces
 */





public class CheckIfAStringIsRotatedByTwoPlaces
{
    // rotate clock wise
    public static void rotateclockwise(StringBuilder s){
        // last char
        char last = s.charAt(s.length()-1);
        int index = s.length()-2;
        
        while(index >= 0){
            s.setCharAt(index+1, s.charAt(index));
            index--;
        }
        s.setCharAt(0, last);
    }
    
    // rotate anti clock wise
    public static void rotateanticlockwise(StringBuilder s){
        // last char
        char first = s.charAt(0);
        int index = 1;
        
        while(index < s.length()){
            s.setCharAt(index-1, s.charAt(index));
            index++;
        }
        s.setCharAt(s.length()-1, first);
    }
    
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    public static boolean isRotated(String str1, String str2)
    {
        // Check if these two string length is equals or not 
        if(str1.length() != str2.length())
        return false;
        
        // make two new string that would consist the str1 for each
        StringBuilder clockwise = new StringBuilder(str1);
        StringBuilder anticlockwise = new StringBuilder(str1);
        
        
        // After rotation check for these string 
        
        // Clockwise rotation
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        
        if(clockwise.toString().equals(str2)){
            return true;
        }
        
        // Anti Clockwise rotation
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        
        if(anticlockwise.toString().equals(str2)){
            return true;
        }
        
        return false;
    }

    public static void main(String[] args) {
      
      Scanner sc = new Scanner(System.in);

      System.out.println("Enter the First String str1: ");
      String str1 = sc.next();
      System.out.println("Enter the Second String str1: ");
      String str2 = sc.next();


      // Call the method that is responsible for rotation of the string 

      Boolean rotation =  isRotated(str1, str2);
      if(rotation){
        System.out.println("Yes, It is rotated by two places.");
      } else {
        System.out.println("No, It is not rotated by two places.");
      }

    }


}
