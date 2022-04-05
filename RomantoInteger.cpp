class Solution {
public:
    int romanToInt(string s) {
        
        
        unordered_map<char, int> values;
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;
        
        int ans = 0;
        int len = s.size();
        for(int i = 0;i < len;i++){
            if(((i+1) < len) && (values[s[i+1]] > values[s[i]]))
                {ans = ans + values[s[i+1]] - values[s[i]];i++;}
            else
                ans += values[s[i]];
        }
        
        return ans;
    }
};
