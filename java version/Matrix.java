import java.lang.reflect.Array;
import java.util.Scanner;

public class Matrix {
    private String name;
    private int n;
    private int m;
    private int[][] matrixA;

    public Matrix(int row, int column, String id) {
        n = row;
        m = column;
        name = id;
        matrixA = new int[n][m];
    }

    public void setMatrix(){
        Scanner scanner = new Scanner(System.in);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                System.out.print(name+(i+1)+(j+1)+": ");
                int userInput = scanner.nextInt();
                matrixA[i][j] = userInput;
            }
        }
    }

    public void writeMatrix(){
        System.out.println("\t\tMatrix "+name+"\n*****************************************************");
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                System.out.print("\t"+matrixA[i][j]);
            }
            System.out.println("\n");
        }
    }

    public int[][] getMatrix(){
        return matrixA;
    }
}