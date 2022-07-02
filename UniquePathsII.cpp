class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        
        int r = og.size();
        int c = og[0].size();
        if(og[0][0] == 1)return 0;
        int dp[r][c];
        bool f = true;
        for(int i =  1;i < c;i++){
            if(og[0][i])f = false;
            if(f){dp[0][i] = 1;}
            else {dp[0][i] = 0;}
        }
        f = true;
        for(int i =  1;i < r;i++){
            if(og[i][0])f = false;
            if(f){dp[i][0] = 1;}
            else {dp[i][0] = 0;}
        }
        dp[0][0] = 1;
        for(int i = 1;i < r;i++){
            for(int j = 1;j < c;j++){
                if(og[i][j])dp[i][j] = 0;
                else{
                    dp[i][j] = dp[i - 1][j] + dp[i][j -1];
                }
            }
        }
        // for(int i = 0;i < r;i++){
        //     for(int j = 0;j < c;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[r - 1][c - 1];
    }
};
