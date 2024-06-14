import java.util.*;

public class Main {
    
    public static int getMaxValue(int n, int[][] queries) {
        int[] arr = new int[n];
        for (int[] query : queries) {
            int start = query[0] - 1;
            int end = query[1] - 1;
            int value = query[2];
            arr[start] += value;
            if (end + 1 < n) {
                arr[end + 1] -= value;
            }
        }
        int max = arr[0];
        int sum = arr[0];
        for (int i = 1; i < n; i++) {
            sum += arr[i];
            max = Math.max(max, sum);
        }
        return max;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the size of the array: ");
        int n = scanner.nextInt(); // size of the array
        System.out.println("Enter the number of queries: ");
        int m = scanner.nextInt(); // number of queries
        int[][] queries = new int[m][3];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 3; j++) {
                queries[i][j] = scanner.nextInt();
            }
        }
        System.out.println(getMaxValue(n, queries));
    }
}