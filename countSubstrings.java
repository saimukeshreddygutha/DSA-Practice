class Solution {
    public int countSubstrings(String s, String t) {
        
        int slen = s.length();
        int tlen = t.length();
        int ans =0;
        for(int sp=0;sp<slen;sp++){
            for(int tp=0;tp<tlen;tp++){
                int diff=0;
                int x=sp;
                int y=tp;
                while(x<slen && y<tlen){
                    if(s.charAt(x)!=t.charAt(y))
                        diff++;
                    if(diff==1)
                        ans++;
                    if(diff>1)
                        break;
                    x++;
                    y++;
                }
            }
        }
        return ans;
    }
}
