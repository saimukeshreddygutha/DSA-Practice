class Solution {
    public boolean isSubsequence(String s, String t) {
        int slen =s.length();
        int tlen = t.length();
        
        int sp=0,tp=0;
        while(sp<slen && tp<tlen){
            if(s.charAt(sp)==t.charAt(tp))
                sp++;
            tp++;
        }
        return sp==slen;
    }
}
