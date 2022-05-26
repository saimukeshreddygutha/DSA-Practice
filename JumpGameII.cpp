class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size();
        if(len == 1 && nums[0] == 0)return 0;
        int ans = 0;
        int jumps[len];
        fill(jumps, jumps + len, INT_MAX);
        jumps[0] = 0;
        for(int i = 1;i < len;i++){
            for(int j = 0;j < i;j++){
                if(j + nums[j] >= i)
                    jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
        return jumps[len - 1];
    }
};
