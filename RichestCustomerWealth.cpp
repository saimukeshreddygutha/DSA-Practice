class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = INT_MIN;
        for(auto v: accounts){
            if(maxwealth < accumulate(v.begin(),v.end(),0))
                maxwealth = accumulate(v.begin(),v.end(),0);
        }
        
        return maxwealth;
    }
};
