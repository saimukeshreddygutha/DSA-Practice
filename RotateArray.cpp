class Solution {
public:
    
    void r(vector<int>& nums, int s, int e){
        while(e > s){
            int t = nums[e];
            nums[e] = nums[s];
            nums[s] = t;
            e--;
            s++;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1)return;
        k = (k % n);
        r(nums, 0, n - 1);
        r(nums, 0, k - 1);
        r(nums, k, n - 1);
        
    }
};
