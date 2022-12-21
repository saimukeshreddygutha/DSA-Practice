class Solution {
public:
    struct numcompare {
        bool operator() (const pair<int, pair<int, int>> &x, const pair<int, pair<int, int>> &y){
            return x.first > y.first;
        }
    };
    
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue< pair<int, pair<int, int>>, vector< pair<int, pair<int, int>>>, numcompare> minheap;
        int start = 0, end = INT_MAX, curr_max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(!nums[i].empty()){
                minheap.push({nums[i][0], {i, 0}});
                curr_max = max(curr_max, nums[i][0]);
            }
        }
        while(minheap.size() == nums.size()){
            auto tops = minheap.top();
            minheap.pop();
            if(end - start > curr_max - tops.first){
                start = tops.first;
                end = curr_max;
            }
            tops.second.second++;
            if(nums[tops.second.first].size() > tops.second.second){
                tops.first = nums[tops.second.first][tops.second.second];
                minheap.push(tops);
                curr_max = max(curr_max, tops.first);
            }
        }
        return {start, end};
    }
};