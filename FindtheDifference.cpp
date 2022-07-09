class Solution {
public:
    char findTheDifference(string s, string t) {
        int ss = 0, tt = 0;
        for(char i : s){
            ss += i;
        }
        for(char i : t){
            tt += i;
        }
        
        return tt-ss;
    }
};
