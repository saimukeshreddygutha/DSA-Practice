class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int ans = 0;
        string s = strs[0];
        int n = s.size();

        for(int i = 0;i < n;i++){
            int prev = 0;
            for(auto k: strs){
                if(prev > k[i]){ans++;break;}
                else prev = k[i];
            }
        }

        return ans;
    }
};
