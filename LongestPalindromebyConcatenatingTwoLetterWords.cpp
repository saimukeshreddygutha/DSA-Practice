class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        int ans = 0;
        vector<vector<int>> m(26, vector<int>(26, 0));
        
        for(string w: words){
            int i = w[0] - 'a';
            int j = w[1] - 'a';
            
            if(m[j][i]){
                ans += 4;
                m[j][i]--;
            }else m[i][j]++;
        }
        
        for(int i = 0;i < 26;i++)
            if(m[i][i])return ans += 2;
        
        return ans;
    }
};
