class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int count = 0;
        for(int i = 0;i < n;i++){
            s[i] = tolower(s[i]);
            if(i+1)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')i < n/2 ? count++ : count--;
        }
        return count == 0;
    }
};
