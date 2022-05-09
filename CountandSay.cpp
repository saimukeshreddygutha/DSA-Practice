class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)return "1";
        string s = countAndSay(n-1);
        string ns = "";
        char t = s[0];
        int count = 1;
        
        for(int i = 1;i < s.size();i++){
            if(t == s[i])count++;
            else{
                ns += (to_string(count) + t);
                    t = s[i];
                    count = 1;
            }
        }
        ns += (to_string(count) + s[s.size()-1]);
        return ns;
        
    }
};
