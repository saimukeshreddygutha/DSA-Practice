class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0 , countL = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'A') countA++;
            if(s[i] == 'L') countL++;
            else countL = 0;
            if(countA>1 || countL>=3) return false;
        }
    return true;
    }
};
