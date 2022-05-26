class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int countarr[20001];
        fill(countarr, countarr + 20001, 0);
        for(int i : nums)countarr[10000 + i]++;
        int mx = *max_element(nums.begin(), nums.end()) + 10000;

        while(k > 0){
            if(countarr[mx]){
                countarr[mx]--;k--;
            }else
                mx--;
        }
        return mx - 10000;
    }
};
