class Solution {
    public int countVowelStrings(int n) {
        if(n == 1)return 5;
        int[] arr = {1,1,1,1,1};
        int ans = 0;
        n--;
        while(n-->0){
            ans = 0;
            for(int i = 3;i >= 0;i--){
                arr[i] += arr[i+1];
                ans += arr[i];
            }
        }
        
        return ans + 1;
    }
}
