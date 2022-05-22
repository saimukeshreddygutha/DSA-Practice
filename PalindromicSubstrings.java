class Solution {
    public int countSubstrings(String s) {
        
        int len = s.length();
        int ans = 0;
        
        int[][] a = new int[len][len];
        
        // for(int i = 0;i < len;i++)Arrays.fill(a[i], 0);
        
        for(int i = 0;i < len;i++){
            for(int j = 0;j < len;j++){
                if(i == j)
                    {a[i][j] = 1;ans++;}
                else if(j == i + 1){
                    if(s.charAt(i) == s.charAt(j))
                        {a[i][j] = 1;ans++;}
                }
            }
        }
        
        for(int k = 2;k < len;k++){
			for(int i = 0;i< len - k;i++){
				if((s.charAt(i) == s.charAt(i+k)) && (a[i+1][i+k-1] == 1)){
					a[i][i+k] = 1;ans++;
					// if(ansLen < i+k-1){
					// 	ansLen = k+1;
					// 	ansString = s.substring(i,i+k+1);
					// }
				}
			}
		}
        
        return ans;
        
        
    }
}
