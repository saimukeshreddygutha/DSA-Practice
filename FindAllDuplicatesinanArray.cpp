class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> a;
        unordered_map<int, int> :: iterator it = a.begin();
        for(auto i : nums)a[i]++;
        vector<int> ans;
        for(it = a.begin();it != a.end();it++){
            if(it->second == 2)ans.push_back(it->first);
        }
        return ans;
    }
};
