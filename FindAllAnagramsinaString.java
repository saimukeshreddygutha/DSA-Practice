class Solution {
    public boolean isAnagram(int[] a, int[] b){
        for(int i = 0;i < 26;i++)if(a[i] != b[i])return false;
        return true;
    }
    public int[] calCount(String a){
        int[] count = new int[26];
        for(int i = 0;i < a.length();i++)count[a.charAt(i) - 'a']++;

        return count;
    }
    public List<Integer> findAnagrams(String s, String p) {
        
        int sLen = s.length(), pLen = p.length();
    
        List<Integer> ans = new ArrayList<Integer>();
        if(sLen < pLen)return ans;
        int[] countP = calCount(p);

        int[] countS = calCount(s.substring(0,pLen));
        if(isAnagram(countP, countS))ans.add(0);

        for(int i = 1;i < sLen - pLen + 1;i++){
            countS[s.charAt(i-1) - 'a']--;
            countS[s.charAt(i+pLen-1) - 'a']++;
            if(isAnagram(countP, countS))ans.add(i);
        }

        return ans;
        
    }
}
