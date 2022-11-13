class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans = "";
        string w;
        while(ss >> w){
            ans = ' ' + w + ans;
        }
        return ans.substr(1);
    }
};
