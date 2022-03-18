class Solution {
public:
  
    /*
    Solved using two pointer approach with O(n^2) TC
    */
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0 or n == 1)
            return n;
        unordered_set<int> e;
        
        e.insert(s[0]);
        int i = 0, j = 1, ans = 1;
        
        while(j < n){
            while(e.count(s[j])){
                e.erase(s[i]);
                i++;
                
                if(i == j && j == n-1){
                    break;
                }
                    
            }
            if(j < n){
                e.insert(s[j++]);
                int l = e.size();
                ans = max(ans , l);
            }
        }
        
        return ans;
        
        
        
    }
};
