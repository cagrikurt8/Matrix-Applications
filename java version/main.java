import java.util.Arrays;
import java.util.Scanner;

public class main{
    public static void main(String []args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the row number for Matrix A: ");
        int n = scanner.nextInt();
        System.out.print("Enter the column number for Matrix A: ");
        int m = scanner.nextInt();

        Matrix matrix1 = new Matrix(n, m, "A");
        matrix1.setMatrix();
        matrix1.writeMatrix();
        int[][] matrixA = matrix1.getMatrix();

        System.out.print("Enter the row number for Matrix B: ");
        int n1 = scanner.nextInt();
        System.out.print("Enter the column number for Matrix B: ");
        int m1 = scanner.nextInt();

        Matrix matrix2 = new Matrix(n1,m1,"B");
        matrix2.setMatrix();
        matrix2.writeMatrix();
        int[][] matrixB = matrix2.getMatrix();

        if(m == n1){
            MatrixMultiplication multiplication = new MatrixMultiplication(matrixA, matrixB);
            multiplication.multiplyMatrices(n1,m);
        }
        else{
            System.out.println("You cannot multiply these matrices!");
        }
    }
}
