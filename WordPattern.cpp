class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> m;
        unordered_map<string, char> r;
        stringstream ss(s);
        int n = pattern.size();
        string ns;
        for(int i = 0;i < n;i++){
            
            ss >> ns;
            if(r.find(ns) != r.end() && r[ns] != pattern[i])return false;
            else if(m.find(pattern[i]) == m.end()){
                m[pattern[i]] = ns;
                r[ns] = pattern[i];
            }else if(m[pattern[i]] == ns)continue;
            else return false;
        }
        int i =0;
        while(ss>>ns)i++;
        return i==0;
    }
};
