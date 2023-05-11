class Solution {
    public boolean isEcho(String s){
        int n = s.length();

        for(int i = 0, j = n/2;i < j && j < n;i++,j++){
            if(s.charAt(i) != s.charAt(j))return false;
        }

        return true;
    }
    public int distinctEchoSubstrings(String text) {
        
        if(text == null)return 0;
        int n = text.length();
        
        HashSet<String> set = new HashSet<>();
        for(int i = 0;i < n;i++){

            for(int j = i+1; j <= n;j++){
                if(((j-i)&1) == 0 && !set.contains(text.substring(i, j)) && isEcho(text.substring(i, j)))set.add(text.substring(i, j));
            }
        }

        return set.size();
    }
}
