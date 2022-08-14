class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> m;
        for(char c: stones)m[c]++;
        int n = jewels.size();
        int ans = 0;
        for(int i = 0;i < n;i++){
            if(m[jewels[i]])ans += m[jewels[i]];
        }
        
        return ans;
    }
};
