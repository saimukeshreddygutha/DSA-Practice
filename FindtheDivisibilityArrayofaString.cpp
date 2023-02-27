class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans;
        long long prevRem = 0;

        for(int i = 0;i < (int)word.size();i++){
            prevRem = prevRem*10 + (word[i] - '0');
            if(prevRem%m == 0)ans.push_back(1);
            else ans.push_back(0);
            prevRem = prevRem % m;
        }
        return ans;
        
    }
};
