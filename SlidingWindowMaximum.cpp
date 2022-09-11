class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        for(int i = 0;i < k;i++)pq.push(make_pair(nums[i], i));
        pair<int, int> tp = pq.top();
        ans.push_back(tp.first);
        for(int i = k;i < n;i++){
            pq.push(make_pair(nums[i], i));
            pair<int, int> p = pq.top();
            while(p.second <= i - k){
                pq.pop();
                p = pq.top();
            }
            ans.push_back(p.first);
        }
        return ans;
    }
};
