class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size();
        int dayschange[len] ;
        for(int i = 1;i < len;i++){
            dayschange[i] = prices[i] - prices[i-1];
        }
        dayschange[0] = 0;
        
        if(*max_element(dayschange,dayschange+len) <= 0)
            return 0;
        
        int ans = 0;
        int sum = 0;
        
        for(int i = 0;i < len;i++){
            sum += dayschange[i];
            
            if(sum < 0)
                sum = 0;
            
            ans = max(sum, ans);
        }
        
        return ans;
    }
};
