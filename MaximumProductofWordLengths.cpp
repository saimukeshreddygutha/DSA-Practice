class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>state(words.size(), 0);
        int ans = 0;
        for(int i = 0;i < words.size();i++){
            for(char c: words[i])state[i] |= (1 << (c - 'a'));
            for(int j = 0;j < i;j++){
                if(!(state[i]&state[j])){
                    int il = words[i].size();
                    int jl = words[j].size();
                    ans = max(ans, il * jl);
                }
            }
        }
        return ans;
    }
};
