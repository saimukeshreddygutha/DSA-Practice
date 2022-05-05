class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int l = 100002;
        int a[l];
        fill(a, a+l,0);
        for(auto i: nums){
            a[50000 + i]++;
        }
        
        vector<int> ans;
        for(int i = 0;i < l;i++){
            while(a[i]--)
                ans.push_back(i - 50000);
        }
        
        return ans;
    }
};
