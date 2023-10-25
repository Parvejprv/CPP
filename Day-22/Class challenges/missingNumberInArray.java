// package Day-22.Class challenges;

import java.util.*;

public class missingNumberInArray {

  public static int missingNumber(int[] nums) {

    // sum of given array
    int sum = 0;
    for(int num : nums) {
        sum += num;
    }

    // sum of n number
    int n = nums.length;
    int sumN = 0;
    sumN = n*(n+1)/2;

    // now, missing number is
    return sumN-sum;
     
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the size of the array: ");
    int n = sc.nextInt();

    int arr[] = new int[n];     // new array creation of size n
    System.out.println("Input the elements into the array : ");
    for(int i=0; i<n; i++){
      arr[i] = sc.nextInt();    // array element input
    }

    // Method call
    int missingNum = missingNumber(arr);
    System.out.println("Missing number = " + missingNum);
    
  }
}
