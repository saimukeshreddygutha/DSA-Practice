class Solution {
public:
    string customSortString(string order, string s) {
        int countss[26];
        fill(countss, countss + 26, 0);
        
        for(char i : s)
            countss[i - 'a']++;
        
        string ans = "";
        
        for(char c : order){
            while(countss[c - 'a']){
                ans += c;
                countss[c - 'a']--;
            }
        }
        
        for(int i = 0;i < 26;i++){
            while(countss[i]){
                ans += char('a' + i);
                countss[i]--;
            }
        }
        
        return ans;
        
    }
};
