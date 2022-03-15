class Solution {
    public String longestPalindrome(String s) {
        int l = s.length();
        String ans = s.substring(0,1);
        int maxlen = 1;
        
        for(int i=0;i<l;i++){
            /*
            if i runs from 1 to l-1 it fails for Plaindrome strings with 2 characters
            
            */
            int p1 = i-1;
            int p2 = i+1;
            
            
            while((p1 >= 0) && (s.charAt(p1) == s.charAt(i))){
                p1--;
            }
            
            while((p2 <= l-1) && (s.charAt(p2) == s.charAt(i)))
                p2++;
            
            while((p1 >= 0) && (p2 <= l-1) && (s.charAt(p1) == s.charAt(p2))){
                p1--;
                p2++;
            }
            
            if((p2-p1-1) > maxlen){
              
                maxlen = p2-p1-1;
                ans = s.substring(p1+1,p2);
            }
        }
        return ans;
    }
}
