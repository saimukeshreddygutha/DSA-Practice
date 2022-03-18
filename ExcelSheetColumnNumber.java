class Solution {
    public int titleToNumber(String columnTitle) {
        int ans = 0;
        for(int i = 0;i < columnTitle.length(); i++){
            ans +=  ((int)columnTitle.charAt(i) - 64)*((int)Math.pow(26,columnTitle.length()-i-1));
        }
        return ans;
    }
}
