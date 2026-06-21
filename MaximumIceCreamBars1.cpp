class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        unordered_map<int, int> mp;
        int len = costs.size();

        for(int i = 0;i < len;i++){
            mp[costs[i]] += 1;
        } 
        int res = 0;
        for(int i = 1;i < (int)10e5 + 1;i++){
            if(mp[i] == 0)continue;
            if(coins < i)break;
            while(mp[i] != 0 && coins >= i){
                mp[i] -= 1;
                res += 1;
                coins -= i;
            }

        }

        return res;
    }
};
