class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int len = arr.size();
        if(len < k)return 0;
        int pre[len + 1];
        fill(pre, pre + len + 1, 0);
        for(int i = 1;i < len + 1;i++)
            pre[i] = pre[i - 1] + arr[i - 1];
        int count = 0;
        for(int i = k;i < len + 1;i++){
            if((pre[i] -pre[i - k])/k >= threshold)count++;
        }
        return count;
    }
};
