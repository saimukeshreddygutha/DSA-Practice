class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int n = colors.size();
        if(n == 1)return 0;
        int ans = 0;
        int maxUpto = neededTime[0];
        int total = neededTime[0];
        char prev = colors[0];
        for(int i = 1;i < n;i++){
            
            total += neededTime[i];
            if(colors[i] != prev){
                prev = colors[i];
                ans += maxUpto;
                maxUpto = neededTime[i];
            }else{
                maxUpto = max(maxUpto, neededTime[i]);
            }
        }
        
        if(n > 1)ans += maxUpto;
        
        return total - ans;
    }
};
