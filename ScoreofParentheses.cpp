class Solution {
public:
    int scoreOfParentheses(string s) {
        
       stack<int> st;
        
        for(char c : s){
            if(c == '(')st.push(0);
            else{
                if(st.top() == 0){
                    st.pop();
                    st.push(1);
                }
                else{
                    int t = 0;
                    while(!st.empty() && st.top() != 0){
                        t += st.top();
                        st.pop();
                    }
                    if(st.top() == 0){
                        st.pop();
                        st.push(2 * t);
                    }
                    else st.push(t);
                }
            }
        }
        int ans = 0;
        while(!st.empty()){ans += st.top();st.pop();}
        return ans;
    }
};
