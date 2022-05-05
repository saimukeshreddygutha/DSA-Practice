class Solution {
public:
    string match(string s1, string s2){
        
        string ans = "";
        int l1 = s1.size();
        int l2 = s2.size();
        int i = 0,j = 0;
        while(i < l1 && j < l2){
            if(s1[i] == s2[j])ans += s1[i];
            else break;
            i++;j++;
        }
        
        return ans;
        
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if(len == 1)return strs[0];
        string ans = strs[0];
        
        for(int i = 1;i < len;i++){
            ans = match(strs[i], ans);
            if(ans == "")break;
        }
        
        return ans;
    }
};
