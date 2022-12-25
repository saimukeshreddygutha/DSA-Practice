class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 1;i < n;i++){
            nums[i] = nums[i-1] + nums[i];
        }
        vector<int> ans;
        int m = q.size();
        for(int i = 0;i < m;i++){
            int l = 0, h = n-1;
            int temp = -1;
            while(l <= h){
                int m = (l + h)/2;
                if(nums[m] <= q[i]){temp = m;l = m + 1;}
                else h = m - 1;

            }
            // if(nums[n-1] <= q[i])ans.push_back(n);
            ans.push_back(temp + 1);
        }

        return ans;
        
    }
};
