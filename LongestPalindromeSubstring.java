import java.io.*;
import java.util.*;
/*
use input.txt and output.txt for input output respectively
it prints both longest palindromes length and the string
*/

public class LongestPalindromeSubstring {

	public static void main(String[] args) {

		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} 

		catch (Exception e) {
			System.err.println("Error");
		}

		Scanner scan = new Scanner(System.in);

		String s = scan.next();

		int slen = s.length();
		int a[][] = new int[slen][slen];

		String ansString=s.substring(0,1);
		int ansLen = 1;

		for(int i=0;i<slen;i++){
			for(int j=0;j<slen;j++){
				if(i==j)
					a[i][j]=1;
				else if((j == i+1) && (s.charAt(i) == s.charAt(j))){
					a[i][j]=1;
					ansLen=j-i+1;
					ansString=s.substring(i,j+1);
				}
			}
		}


		for(int k=2;k<slen;k++){
			for(int i =0;i<slen-k;i++){
				if((s.charAt(i)==s.charAt(i+k)) && (a[i+1][i+k-1]==1)){
					a[i][i+k]=1;
					if(ansLen < i+k-1){
						ansLen = k+1;
						ansString = s.substring(i,i+k+1);
					}
				}
			}
		}

		System.out.println(ansString);
		System.out.println(ansLen);

	}
}
