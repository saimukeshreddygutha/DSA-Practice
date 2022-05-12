class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> counts;
        int len = s.size();
        for(int i = 0;i < len;i++){
           counts[s[i]]++;
        }
        for(int i = 0;i < len;i++)
            if(counts[s[i]] == 1)return i;
        return -1;
    }
};
