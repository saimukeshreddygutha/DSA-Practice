class Solution {
    
    /*
    https://leetcode.com/problems/n-th-tribonacci-number/
    */
public:
    int tribonacci(int n) {
        int ans[38];
        ans[0]=0;
        ans[1]=1;
        ans[2]=1;
        
        if(n==1 || n==2 || n==0)
            return ans[n];
        
        for(int i=3;i<=n;i++){
            ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
        }
        
        return ans[n];
        
    }
};
