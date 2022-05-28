class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int counts[10001];
        fill(counts, counts + 10001, 0);
        int len = nums.size();
        // bool flag = true;
        for(int i = 0;i < len;i++)
            counts[nums[i]]++;
        for(int i = 0;i < len;i++)
            if(!counts[i])return i;
        return len;
    }
};
