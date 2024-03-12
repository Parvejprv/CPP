import java.util.Scanner;
public class secondMaxInArray {

  public static int print2largest(int arr[], int n) {
    int max = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++){
      if (arr[i] > max){
        max = arr[i];
      }
    }

    int secondMax = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++) {
      if (arr[i] != max) {
        if (secondMax == Integer.MIN_VALUE || arr[i] > secondMax) {
          secondMax = arr[i];
        }
      }
    }

    if (secondMax == Integer.MIN_VALUE) {
      return -1;
    }
    else {
      return secondMax;
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("enter the size of the array : ");
    int n = sc.nextInt();
    int arr[] = new int[n];     // creating an array of size n
    
    // taking input into the array
    for (int i=0; i<n; i++) {
      arr[i] = sc.nextInt();
    }
    
    // Function call
    int secondMax = print2largest(arr, n);
    System.out.println("Second Max Integer in Array = " + secondMax);
    sc.close();

  }
}