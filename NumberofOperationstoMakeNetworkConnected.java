class Solution {
    private HashMap<Integer, ArrayList<Integer>> graph = new HashMap<>();
    private int[] vi;

    public void dfs(int k){
        if(vi[k] == 1)return;

        vi[k] =1;
        ArrayList<Integer> a = graph.getOrDefault(k, null);
        if(a == null)return;
        for(int i = 0;i < a.size();i++){
            dfs(a.get(i));
        }
    }
    public int makeConnected(int n, int[][] connections) {
        int len = connections.length;

        if(len < n-1)return -1;
        
        for(int i = 0; i < len;i++){
            int a = connections[i][0];
            int b = connections[i][1];
            if(graph.getOrDefault(a, null) == null)graph.put(a, new ArrayList<Integer>());
            graph.get(a).add(b);
            if(graph.getOrDefault(b, null) == null)graph.put(b, new ArrayList<Integer>());
            graph.get(b).add(a);

        }

        vi = new int[n];
        Arrays.fill(vi, 0);
        int components = 0;
        for(int i = 0;i < n;i++){
            if(vi[i] == 1)continue;
            dfs(i);
            components++;
        }

        return components-1;
    }
}
