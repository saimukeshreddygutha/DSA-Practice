class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> s;
        int ans = -1;
        for(auto i : nums){
            s.insert(i);
            if(s.find(-1*i) != s.end())ans =  max(ans, abs(i));
        }
        
        return ans;
    }
};
