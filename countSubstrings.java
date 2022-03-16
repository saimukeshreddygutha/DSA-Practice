class Solution {
    public int countSubstrings(String s, String t) {
        
        int slen = s.length();
        int tlen = t.length();
        int ans =0;
        for(int len = 1;len <= slen;len++){
            
            for(int sp = 0; sp <= slen-len; sp++){
                
                for(int tp=0; tp <=tlen-len;tp++){
                    int diff=0;
                    int i = 0;
                    while(i<len){
                        if(s.charAt(i+sp)!=t.charAt(i+tp))
                            diff+=1;
                        if(diff > 1)
                            break;
                        i++;
                    }
                    if(diff==1)
                        ans+=1;
                    
                }
            }
        }
        return ans;
    }
}
