class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        unordered_map<char, int> m;
        unordered_map<char, bool> b;
        int len = s.size();
        for(int i = 0;i < len;i++)m[s[i]]++;
        stack<char> st;
        for(int i = 0;i < len;i++){
            m[s[i]]--;
            if(b[s[i]])continue;
            if(st.empty()){st.push(s[i]);b[s[i]] = true;}
            else{
                while(!st.empty() && st.top() > s[i] && m[st.top()] > 0){
                    // m[st.top()]--;
                    b[st.top()] = false;
                    st.pop();
                }
                // if(m[s[i]])
                st.push(s[i]);
                b[s[i]] = true;
            }
        }
        string ans = "";
        while(!st.empty()){ans += st.top();st.pop();}
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
