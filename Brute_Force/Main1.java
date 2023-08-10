/*program to implement the matrix multiplication*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE VALUE OF N");
        n = sc.nextInt();
        int a[][] = new int[n][n];
        int b[][] = new int[n][n];
        System.out.println("ENTER THE ELEMENTS OF MATRIX A");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                a[i][j] = sc.nextInt();
        }

        System.out.println("ENTER THE ELEMENTS OF MATRIX B");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                b[i][j] = sc.nextInt();
        }
        
        int[][] result = multiplyMatrices(a, b);
        
        // Print the resulting matrix
        for (int i = 0; i < result.length; i++) {
            for (int j = 0; j < result[0].length; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
    
    public static int[][] multiplyMatrices(int[][] a, int[][] b) {
        int rowsA = a.length;
        int colsA = a[0].length;
        int colsB = b[0].length;
        
        int[][] result = new int[rowsA][colsB];
        
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                int sum = 0;
                for (int k = 0; k < colsA; k++) {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
            }
        }
        
        return result;
    }
}
