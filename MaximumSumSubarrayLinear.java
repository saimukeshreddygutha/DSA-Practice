import java.io.*;
import java.util.*;
import java.lang.*;

public class MaximumSumSubarrayLinear {

	public static int findMax(int array[], int n){

		int max=Integer.MIN_VALUE;
		for(int i=0;i<n;i++){
			if(max<array[i])
				max=array[i];
		}

		return max;

	}

	public static int findMaxSumSubarray(int array[], int n){

		int sum =0,ans =0;

		for(int i=0;i<n;i++){
			sum+=array[i];
			if(sum<0)
				sum=0;
			ans = Math.max(ans,sum);


		}
		return ans;


	}

	public static void main(String[] args) {

		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} 

		catch (Exception e) {
			System.err.println("Error");
		}

		int n;
		Scanner scan = new Scanner(System.in);
		n = scan.nextInt();

		int[] array = new int[n];

		boolean allNegative = true;

		for(int i=0;i<n;i++){
			array[i]=scan.nextInt();
			if(array[i]>0)
				allNegative=false;
		}

		int ans;
		if(allNegative){
			ans = findMax(array,n);
		}
		else
			ans = findMaxSumSubarray(array,n);

		System.out.println(ans);


	}
}