class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        
        for(int x: nums){
            mp[x]++;
        }
        
        for(auto x: mp)
        {
            pq.push({x.second, x.first});
        }
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
        
        
    }
};
