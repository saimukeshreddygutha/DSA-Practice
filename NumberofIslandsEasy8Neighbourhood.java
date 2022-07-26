import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void dfs(int a[][], int i, int j){
        int r = a.length;
        int c = a[0].length;
        if(i < 0 || i >= r || j < 0 || j >= c || a[i][j] != 1)return;
        a[i][j] = 0;
        dfs(a, i - 1, j);
        dfs(a, i - 1, j + 1);
        dfs(a, i, j + 1);
        dfs(a, i + 1, j + 1);
        dfs(a, i + 1, j);
        dfs(a, i + 1, j - 1);
        dfs(a, i, j - 1);
        dfs(a, i - 1, j - 1);
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int r = sc.nextInt();
            int c = sc.nextInt();
            int a[][] = new int[r][c];
            for(int i = 0;i < r;i++){
                String s = sc.next();
                for(int j = 0;j < c;j++){
                    if(s.charAt(j) == '0')a[i][j] = 0;
                    else a[i][j] = 1;
                }
            }
            int ans = 0;
            for(int i = 0;i < r;i++){
                for(int j = 0;j < c;j++){
                    if(a[i][j] == 1){
                        ans++;
                        dfs(a, i, j);
                    }
                }
            }
            System.out.println(ans);
        }
    }
}
