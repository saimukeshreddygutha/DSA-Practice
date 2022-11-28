class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        int m = 1e5+1;
        int lose[m];
        fill(lose, lose + m, -1);
        int mx = INT_MIN;
        for(int i = 0;i < n;i++){
            if(lose[matches[i][1]]==-1)lose[matches[i][1]]=0;
            if(lose[matches[i][0]]==-1)lose[matches[i][0]]=0;
            lose[matches[i][1]]++;
            mx = max(mx, max(matches[i][0], matches[i][1]));
        }
        vector<vector<int>> ans;
        vector<int> ans1, ans2;
        for(int i = 1;i <= mx;i++){
            if(lose[i] == 0)ans1.push_back(i);
            else if(lose[i] == 1)ans2.push_back(i);
        }
        return {ans1, ans2};
    }
};
