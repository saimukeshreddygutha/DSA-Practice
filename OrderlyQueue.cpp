class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        int n = s.size();
        string ans = s;
        if(k == 1){
            for(int i = 0;i < n;i++){
                string temp = s.substr(i) + s.substr(0, i);
                if(ans.compare(temp) > 0)ans = temp;
            }

            return ans;
        }

        sort(s.begin(), s.end());

        return s;
            
    }
};
