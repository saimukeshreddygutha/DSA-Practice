class Solution {
    int ans = Integer.MAX_VALUE;
    public int diff(String s, String e){
        int n = s.length();
        int c = 0;
        for(int i = 0;i < n;i++){
            if(s.charAt(i) != e.charAt(i))c++;
        }
        
        return c;
    }
    public void mutate(String s, String e, String[] bank, int count, boolean[] vi){
        
        if(diff(s, e) == 0){
            ans = Math.min(count, ans);
            
            return;
        }
        
        int n = bank.length;
        
        for(int i = 0;i < n;i++){
            if(!vi[i] && diff(s, bank[i]) == 1){vi[i] = true;mutate(bank[i], e, bank, count + 1, vi);vi[i] = false;}
        }
        
        
        
    }
    public int minMutation(String start, String end, String[] bank) {
        ans = Integer.MAX_VALUE;
        int n = bank.length;
        boolean[] vi = new boolean[n];
        mutate(start, end, bank, 0, vi);
        return ans == Integer.MAX_VALUE ? -1 : ans;
    }
}
