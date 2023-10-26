
public class TotalSum {

	public static void totalSum(int[][] mat) {
		//Your code goes here
        int requiredSum = 0;
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat.length; j++) {
                if (i == j || (i + j) == mat.length - 1) {
                    requiredSum += mat[i][j];
                }
                else if (i == 0 || j == 0 || i == mat.length - 1|| j == mat.length - 1) {
                    requiredSum += mat[i][j];
                }
            }
        }
        System.out.println(requiredSum);
    }
}
