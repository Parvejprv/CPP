// package Day-22.misc.gfg questions;

import java.util.Scanner;
public class thirdLargestElementOfArray {


  public static int thirdLargest(int arr[], int n){
    if (n < 3) return -1; // If array has less than three elements, there is no third largest element

    int firstLargest = Integer.MIN_VALUE;
    int secondLargest = Integer.MIN_VALUE;
    int thirdLargest = Integer.MIN_VALUE;
      
    for(int i=0; i<n; i++){
        if(arr[i] > firstLargest){
          thirdLargest = secondLargest;
          secondLargest = firstLargest;
          firstLargest = arr[i];
        } else if(arr[i] != firstLargest && arr[i] > secondLargest) {
          thirdLargest = secondLargest;
          secondLargest = arr[i];
        } else if(arr[i] != firstLargest && arr[i] != secondLargest && arr[i] > thirdLargest) {
          thirdLargest = arr[i];
        }
    }
    
    return thirdLargest;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the size of the array : ");
    int n = sc.nextInt(); //size
    int arr[] = new int[n];

    System.out.println("Enter elements in the array :");
    for (int i=0; i<n; ++i) {
      arr[i] = sc.nextInt();
    }

    // Method Call
    System.out.println("Third Largest Element is: " + thirdLargest(arr, n));

  }
}
