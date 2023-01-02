class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n = word.size();
        int c = 0;
        for(int i =1;i < n;i++)
            if(word[i] >= 'a')c++;
        
        if(c == n-1)return true;
        return c == 0 && word[0] < 'a';

    }
};
