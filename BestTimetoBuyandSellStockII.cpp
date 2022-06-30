class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        // if(len == 1)return prices[0];
        int a[len];
        a[0] = 0;
        for(int i = 1;i < len;i++){
            a[i] = prices[i] - prices[i - 1];
        }
        
          
        int sum = 0;
        
        for(int i = 0;i < len;i++){
            if(a[i] > 0)sum += a[i];
        }
        
        return sum;
    }
};
