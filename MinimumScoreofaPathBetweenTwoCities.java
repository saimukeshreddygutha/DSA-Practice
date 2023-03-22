class Solution {
    HashMap<Integer, List<Pair<Integer, Integer>>> adj = new HashMap<Integer, List<Pair<Integer, Integer>>>();
    int res = Integer.MAX_VALUE;
    
    public void dfs(int i, int[] vi){
        if(vi[i] == 1)return;
        vi[i] = 1;
        List<Pair<Integer, Integer>> list = adj.get(i);
        for(int j = 0;j < list.size();j++){
            Pair<Integer, Integer> p = list.get(j);
            res = Math.min(res, p.getValue());
            if(vi[p.getKey()] == 0)dfs(p.getKey(), vi);
        }
    }
    public int minScore(int n, int[][] roads) {
        
        for(int i = 1;i < n+1;i++)adj.put(i, new ArrayList<Pair<Integer, Integer>>());

        for(int i = 0;i < roads.length;i++){
            adj.get(roads[i][0]).add(new Pair<Integer, Integer>(roads[i][1], roads[i][2]));
            adj.get(roads[i][1]).add(new Pair<Integer, Integer>(roads[i][0], roads[i][2]));
        }

        int[] vi = new int[n+1];
        Arrays.fill(vi, 0);
        dfs(1, vi);
        return res;
    }
}
