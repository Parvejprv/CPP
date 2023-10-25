/*  

Question:-
-------------
Third largest element
BasicAccuracy: 45.04%Submissions: 88K+Points: 1
Given an array of distinct elements. Find the third largest element in it.

Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.

Example 1:

Input:
N = 5
A[] = {2,4,1,3,5}
Output: 3
Example 2:

Input:
N = 2
A[] = {10,2}
Output: -1
Your Task:
Complete the function thirdLargest() which takes the array a[] and the size of the array, n, as input parameters and returns the third largest element in the array. It return -1 if there are less than 3 elements in the given array.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 105


*/


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
