class Solution {
public:
    string robotWithString(string s) {
        
        stack<char> st;
        int n = s.size();
        if(n == 1)return s;
        st.push((char)123);
        stack<char> s2;
        string output = "";
        for(int i = n - 1;i > -1;i--){
            
            if(s[i] <= st.top())st.push(s[i]);
        }
        
        int i = 0;
        while(i != n){
            
            while(!s2.empty() && !st.empty() && s2.top() <= st.top()){output += s2.top();s2.pop();}
            if(s[i] > st.top()){
                s2.push(s[i]);
            }else if(s[i] == st.top()){
                output += s[i];st.pop();
                
            }
            i++;
        }
        
        while(!s2.empty()){output += s2.top();s2.pop();}
        return output;
        
    }
};
