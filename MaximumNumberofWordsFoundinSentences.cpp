class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans = INT_MIN;
        
        for(auto s: sentences){
            int count = 0;
            for(int i = 0;i < s.size();i++){
                if(s[i] == ' ')
                    count++;
                
            }
            ans = max(ans, count);
        }
        
        return ans+1;
    }
};
