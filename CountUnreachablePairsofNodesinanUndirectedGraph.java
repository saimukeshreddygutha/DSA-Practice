class Solution {
    HashMap<Integer, List<Integer>> graph = new HashMap<>();
    long cc;
    public void dfs(int i, int[] vi){
        if(vi[i]==1)return;
        vi[i] = 1;
        cc++;
        List<Integer> a = graph.get(i);
        if(a==null)return;
        for(int j = 0;j < a.size();j++){
            dfs(a.get(j), vi);
        }

    }
    public long countPairs(int n, int[][] edges) {
      long totalNodesVisited = 0;
        for(int i = 0;i < edges.length;i++){
            int a = edges[i][0];
            int b = edges[i][1];
            if(graph.get(a) == null)graph.put(a, new ArrayList<Integer>());
            if(graph.get(b) == null)graph.put(b, new ArrayList<Integer>());
            graph.get(a).add(b);
            graph.get(b).add(a);
        }
        int[] vi = new int[n];
        long res = 0;
        for(int i = 0;i < n;i++){
            cc = 0; 
            if(vi[i] == 0){
              dfs(i, vi);
              totalNodesVisited+=cc;
              res+=(cc*(n-cc));
            }
            
        }

        return res/2;
    }
}
