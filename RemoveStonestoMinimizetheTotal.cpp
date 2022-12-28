class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        const int s = 1e4+1;
        int stones[s];
        fill(stones, stones + s, 0);
        long sum = 0;
        for(auto i: piles){stones[i]++;sum += i;}

        for(int i = s - 1;i > 0 && k;i--){
            while(stones[i] && k){
                stones[i]--;k--;
                sum -= (i/2);
                stones[i - (i/2)]++;
            }
        }

        return sum;


    }
};
