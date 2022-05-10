class Solution {
public:
    static bool sortP(vector<int> a, vector<int> b){
        
        if(a[0] == b[0])return a[1] < b[1];
        
        return a[0] < b[0];
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>> p;
        int len = ages.size();
        for(int i = 0;i < len;i++){
            p.push_back({ages[i], scores[i]});
        }
        sort(p.begin(), p.end(), sortP);
        
        int ans[len];
        ans[0] = p[0][1];
        int maxans = ans[0];
        
        for(int i = 1;i < len;i++){
            ans[i] = p[i][1];
            for(int j = 0;j < i;j++){
                if(p[j][1] <= p[i][1])
                    ans[i] = max(ans[i], ans[j] + p[i][1]);
            }
            maxans = max(ans[i], maxans);
        }
        return maxans;
    }
};
