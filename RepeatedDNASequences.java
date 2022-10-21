class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        
        
        HashSet<String> hs = new HashSet<String>();
        HashSet<String> r = new HashSet<String>();
        
        int n = s.length();
        
        if(n < 10)return new ArrayList<String>();
        List<String> ls = new ArrayList<String>();
        for(int i = 0;i < n - 9;i++){
            if(hs.contains(s.substring(i, i + 10)) && !r.contains(s.substring(i, i + 10))){ls.add(s.substring(i, i + 10));r.add(s.substring(i, i + 10));}
            else hs.add(s.substring(i, i + 10));
        }
        
        return ls;
    }
}
