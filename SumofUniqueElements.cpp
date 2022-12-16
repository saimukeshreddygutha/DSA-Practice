class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int counts[101];
        fill(counts, counts + 101, 0);

        for(auto i: nums)counts[i]++;
        int sum = 0;
        for(int i = 0;i < 101;i++){
            if(counts[i]==1)sum+=i;
        }

        return sum;
    }
};
