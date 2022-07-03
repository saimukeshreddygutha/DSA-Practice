class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26];
        fill(count, count + 26, 0);
        int slen = s.size(), tlen = t.size();
        if(slen != tlen)return false;
        for(int i = 0;i < slen;i++)count[s[i] - 'a']++;
        for(int i = 0;i < tlen;i++)count[t[i] - 'a']--;
        for(int i = 0;i < 26;i++)if(count[i])return false;
        return true;
    }
};
