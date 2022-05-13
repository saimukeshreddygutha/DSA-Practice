class Solution {
public:
    const int mod = 1e9 + 7;
    int numSub(string s) {
        long i = 0, j = 0, count = 0;
        int len = s.size();
        while(j < len){
            if(s[j] == '1')j++;
            else{
                count += ((((j - i)%mod * (j - i + 1)%mod)%mod)/2);
                i = j + 1;
                j++;
            }
        }
        count += (((j - i)%mod * (j - i + 1)%mod)%mod)/2;
        return count%mod;
    }
};
