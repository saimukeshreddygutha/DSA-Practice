class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        int ans = 0;
        int n = c.size();
        vector<int> diff;
        for(int i= 0;i < n;i++)diff.push_back(c[i] - r[i]);

        sort(diff.begin(), diff.end());

        for(int i = 0;i < n;i++){
            if(a >= diff[i]){ans++;a -= diff[i];}
        }
        return ans;

    }
};
