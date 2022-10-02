class Solution {
public:
    bool checkValidString(string s) {
        
        stack<int> open, star;
        int n = s.size();
        for(int i = 0;i < n;i++){
            if(s[i] == '(')open.push(i);
            else if(s[i] ==')'){
                if(!open.empty())open.pop();
                else if(!star.empty())star.pop();
                else return false;
            }else star.push(i);
        }
        
        while(!open.empty() && !star.empty()){
            if(open.top() > star.top())return false;
            open.pop();
            star.pop();
        }
        
        return open.empty();
    }
};
