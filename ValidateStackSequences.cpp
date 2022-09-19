class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int idx = 0;
        for(int i = 0;i < popped.size();i++){
            s.push(pushed[i]);
            while(idx < popped.size() && s.top() == popped[idx]){s.pop();idx++;}
        }
        
        return idx == popped.size();
        
        
    }
};
