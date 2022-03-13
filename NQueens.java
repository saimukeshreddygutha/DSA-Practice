import java.io.*;
import java.util.*;
import java.lang.Math;

public class NQueens {

	static int x[] = new int[20];

	static boolean place(int k, int i){

		for(int j=1;j<=k-1;j++){ // check for all the queens placed from 1 to k-1 and check if queen at ith column and kth row clashes with them
			if(x[j]==i || Math.abs(x[j]-i)==Math.abs(k-j)) // checks for same column or diagonal queens i.e. difference in rows equals difference in columns
				return false;
		}
		return true;
	}

	static void nQueens(int k, int n){ //k is the queen in kth row

		for(int i=1;i<=n;i++){

			if(place(k,i)){ // checks if kth queen can be placed at ith column
				x[k]=i;
				if(k==n){ // if all n queens are placed print the output
					for(int j=1;j<=n;j++)
						System.out.print(x[j]+" ");
					System.out.println();
				}
				else 
					nQueens(k+1,n);// place next queen if all queens are not placed
			}
		}

	}  

	public static void main(String[] args) {

		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} 

		catch (Exception e) {
			System.err.println("Error");
		}

		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();

		nQueens(1,n); //placing 1 to n queens in the nXn board
	}
}
