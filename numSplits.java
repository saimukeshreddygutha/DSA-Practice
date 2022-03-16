class Solution {
    public int numSplits(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        int n = s.length();
        for(int i=0;i<n;i++){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0)+1);
        }
        HashSet<Character> set = new HashSet<>();
        
        int ans=0;
        for(int i=0;i<n-1;i++){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0)-1);
            map.remove(s.charAt(i),0);
            set.add(s.charAt(i));
            if(set.size() == map.keySet().size())
                ans++;
        }
        return ans;
    }
    
}
