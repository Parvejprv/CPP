// This function should return the two smallest numbers in arr[] of size n.

import java.util.Arrays;
import java.util.Scanner;

public class smallestAndSecondSmallestGFG {

  public long[] minAnd2ndMin(long arr[], long n)  
    {
        if(n <= 1) {
            return new long[]{-1, -1};
        }
        
        long smallest = Integer.MAX_VALUE;
        long secondSmallest = Integer.MAX_VALUE;
        
        for(int i=0; i<n; i++){
            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            } else if (arr[i] != smallest && arr[i] < secondSmallest) {
                secondSmallest = arr[i];
            }
        }
        
        if(secondSmallest == Integer.MAX_VALUE) {
            return new long[]{-1, -1};
        } else {
            return new long[]{smallest, secondSmallest};
        }
    }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("enter the size of the array : ");
    int n = sc.nextInt();

    long arr[] = new long[n];
    System.out.println("Enter elements of array");
    for (int index = 0; index < arr.length; index++) {
        arr[index] = sc.nextLong();
    }

    // Method Call
    long result[] = new smallestAndSecondSmallestGFG().minAnd2ndMin(arr, n);
    System.out.println("Result = " + Arrays.toString(result));
    
    // OR

    System.out.print("Result = [");
    for (int i = 0; i < result.length; i++) {
        System.out.print(result[i]);
        if (i != result.length - 1) {
            System.out.print(", ");
        }
    }
    System.out.println("]");

  }
}
