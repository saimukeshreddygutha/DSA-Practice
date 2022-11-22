class Solution {
public:
    int strStr(string haystack, string needle) {
        
        long hsize=haystack.size();
        long nsize = needle.size();

        if(hsize < nsize)return -1;
        const long mod = 1e9+7;
        long nhash = 0;
        long p = 139;
        long p1 = p;
        long hhash = 0;
        for(int i = 0;i < nsize;i++){
            nhash = (nhash + (needle[i]*p1)%mod)%mod;
            hhash = (hhash + (haystack[i]*p1)%mod)%mod;
            p1 = (p1 * p)%mod;
        }
        long p2 = p;
        if(nhash == hhash)return 0;
        for(int i = 0;i < hsize - nsize;i++){
            hhash = (hhash - (haystack[i]*p2)%mod + mod)%mod;
            hhash = (hhash + (haystack[i+nsize]*p1)%mod)%mod;
            nhash = (nhash*p)%mod;
            p1 = (p1 * p)%mod;
            p2= (p2 * p)%mod;
            if(hhash == nhash)return i + 1;
        }

        return -1;



    }
};
