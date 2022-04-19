class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        
        int len = letters.size();
        int l = 0, h = len - 1;
        
        char ans = letters[0];
        
        while(l <= h){
            int m = (l + h)/2;
            if(letters[m] > target){
                ans = letters[m];
                h = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        
        return ans;
    }
};
