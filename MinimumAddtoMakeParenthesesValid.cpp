class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int i = 0, len = s.size(), ans = 0;
        while(i < len){
            if(s[i] == '(')st.push('(');
            else{
                if(!st.empty())st.pop();
                else ans++;
            }
            i++;
        }
        
        while(!st.empty()){
            ans++;
            st.pop();
        }
        return ans;
    }
};
