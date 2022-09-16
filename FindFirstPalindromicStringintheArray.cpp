class Solution {
public:
    bool palindrome(string words){
        int n = words.size();
        string rev = "";
        for(int i = 0;i < n;i++)rev = words[i] + rev;
        if(words.compare(rev) == 0)return true;
        return false;
    }
    
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i = 0;i < n;i++){
            if(palindrome(words[i]))return words[i];
        }
        
        return "";
    }
};
