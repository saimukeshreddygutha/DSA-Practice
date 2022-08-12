class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, int> m;
        for (int i = 0; i < score.size(); i++) m[score[i]] = i;
        
        vector<string> res(score.size());
        int cnt = 1;
        reverse_iterator it = m.rbegin();
        
        for (; it != m.rend(); it++) {
            if (cnt == 1) res[it->second] = "Gold Medal";
            else if (cnt == 2) res[it->second] = "Silver Medal";
            else if (cnt == 3) res[it->second] = "Bronze Medal";
            else res[it->second] = to_string(cnt);
            
            cnt++;
        }
        
        return res;
    }
};
