class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> ans;
        for(auto i :nums){
            if(ans.find(i) != ans.end())return i;
            ans.insert(i);
            // if(ans.)
        }
        return 0;
    }
};
