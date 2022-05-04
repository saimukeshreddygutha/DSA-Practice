class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int len = arr.size();
        vector<int> pre(len+1, 0);
        int ans = 0;
        for(int i = 0;i < len;i++){
            pre[i+1] += arr[i] + pre[i];
            ans += arr[i];
        }
        
        for(int l = 3;l < len + 1;l += 2){
            for(int i = 0;i < len + 1 - l;i++){
                ans += pre[l+i] - pre[i]; 
            }
        }
        
        return ans;
    }
};
