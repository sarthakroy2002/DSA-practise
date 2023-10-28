
public class Solution {

	public static void rowWiseSum(int[][] mat) {
		//Your code goes here
        // int row = 0,col = 0;
        // int col  ;
        int rows = mat.length;
        if(rows == 0){
            return; //this we are doing for blank array. 
        }
         int cols = mat[0].length;//for initiazing coloumn
        int sum = 0;
        
        for(int i = 0; i < rows;i++)
        {
            sum = 0;
            for(int j = 0;j<cols;j++)
            {
                sum = sum +mat[i][j];
                // System.out.print (sum + " ");
            }
            System.out.print(sum + " ");
            
            // sum = 0;
        }
        // sum = 0;
	}

}
