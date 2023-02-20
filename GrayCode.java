class Solution {
    public List<Integer> grayCode(int n) {
        
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int m = 1;
        ans.add(0);
        ans.add(1);
        for(int i = 1;i < n;i++){
            m *= 2;
            int ansN = ans.size();
            for(int j = ansN - 1;j > -1;j--){
                ans.add(ans.get(j) + m);
            }
        }

        return ans;
    }
}
