class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int ans = 0;
        map<int, int> mm;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i]==0?-1:1;
            
            if(sum == 0){
                if(ans < (i+1)){
                    ans = i + 1;
                }
            }
            else if(mm.find(sum) != mm.end()){
                if(ans < (i - mm[sum])){
                    ans = i-mm[sum];
                }
            }
            else{
                mm[sum]=i;
            }
        }
        
        return ans;
    }
};
