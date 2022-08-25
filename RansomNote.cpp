class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counts[26];
        fill(counts, counts + 26, 0);
        int n = magazine.size();
        for(int i = 0;i < n;i++)counts[magazine[i] - 'a']++;
        int m = ransomNote.size();
        for(int i = 0;i < m;i++)counts[ransomNote[i] - 'a']--;
        for(int i = 0;i < 26;i++)if(counts[i] < 0)return false;
        return true;
    }
};
