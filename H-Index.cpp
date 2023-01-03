class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        int ans = 0;
        for(int h = 1;h <= 5000;h++){
            int hc = 0;
            for(auto i: citations){
                if(i >= h)hc++;
            }
            if(hc >= h)ans = max(ans, h);
        }

        return ans;
    }
};
