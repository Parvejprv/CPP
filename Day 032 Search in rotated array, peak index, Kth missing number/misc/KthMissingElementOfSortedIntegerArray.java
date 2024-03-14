import java.util.*;
public class KthMissingElementOfSortedIntegerArray{
  public static int findKthMissing(int[] arr, int k){
    int n = arr.length;
    int prev = 0;

    for(int i=0; i<n; i++){
      int missing = arr[i] - prev - 1;
      if(missing >= k){
        return prev + k;
      }
      k -= missing;
      prev = arr[i];
    }
    return arr[n-1] + k;
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of the array: ");
    int n = sc.nextInt();
    int[] arr = new int[n];   // size

    // Array elements inputed here
    System.out.print("Enter elements of the sorted integer array:");
    for(int i=0; i<n; i++) {
      arr[i] = sc.nextInt();
    }

    System.out.print("Enter the Kth value :");
    int k = sc.nextInt();
    sc.close();

    System.out.print("The " + k + "th missing posititve element of the integer sorted array is:" + findKthMissing(arr, k));
  }
}

/*  
 * Output:-
Enter the size of the array: 
5 
Enter elements of the sorted integer array:
2 3 4 7 11
Enter the value of k:
9
The 9th missing posititve element of the integer sorted array is:14
  
*/