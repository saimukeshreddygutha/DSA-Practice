class Solution {

    public boolean similar(String s1, String s2){
        int diff = 0;
        for(int i = 0;i < s1.length();i++){
            if(s1.charAt(i) != s2.charAt(i))diff++;

            if(diff > 2)return false;
        }

        return true;
    }

    public void dfs(String[] strs, String s, HashSet<String> vi){
        if(vi.contains(s))return;

        vi.add(s);
        for(int i = 0;i < strs.length;i++){
            if(similar(s, strs[i])){
                dfs(strs, strs[i], vi);
            }
        }
    }
    public int numSimilarGroups(String[] strs) {
        HashSet<String> visited = new HashSet<>();

        int result = 0;
        for(int i = 0;i < strs.length;i++){
            if(!visited.contains(strs[i])){
                dfs(strs, strs[i], visited);
                result++;
            }
        }
        return result;
    }
}
