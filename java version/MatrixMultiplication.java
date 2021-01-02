public class MatrixMultiplication {
    private int[][] multiplication;
    private int[][] a;
    private int[][] b;

    public MatrixMultiplication(int[][] first, int[][] second){
        a = first;
        b = second;
    }

    public void multiplyMatrices(int row, int column){
           multiplication = new int[row][column];
           for(int i=0; i<row; i++){
               for(int j=0; j<column; j++){
                   for(int k=0; k<column; k++){
                       multiplication[i][j] += a[i][k]*b[k][j];
                   }
               }
           }
        System.out.println("\t\tMatrix C\n***********************************");
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++) {
                System.out.print("\t"+multiplication[i][j]);
            }
            System.out.println("\n");
        }
    }
}
