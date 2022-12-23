class Solution {
public:
    char repeatedCharacter(string s) {
        int count[26];
        fill(count, count + 26, 0);
        int n = s.size();
        for(int i = 0;i < n;i++){count[s[i]-'a']++;if(count[s[i]-'a'] > 1)return s[i];}
        return 'a';
    }
};
