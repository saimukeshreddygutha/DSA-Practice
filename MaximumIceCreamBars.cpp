class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(), costs.end());
        int i = 0, n = costs.size(), ans = 0;
        while(coins && i < n){
            if(costs[i] <= coins){ans++;coins -= costs[i];}
            else break;
            i++;
        }

        return ans;
    }
};
