class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> m;
        unordered_set<int> s;
        vector<string> ans;
        string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";
        for(int i = 0;i < s1.size();i++)m[s1[i]] = 1;
        for(int i = 0;i < s2.size();i++)m[s2[i]] = 2;
        for(int i = 0;i < s3.size();i++)m[s3[i]] = 3;
        
        
        
        for(int i = 0;i < words.size();i++){
            for(int j = 0;j < words[i].size();j++)s.insert(m[(char)tolower(words[i][j])]);
            if(s.size() == 1)ans.push_back(words[i]);
            s.clear();
        }
        return ans;
        
        
    }
};
