class Solution {
    boolean isCycle;
    public int largestPathValue(String colors, int[][] edges) {
        List<Integer>[] graph = new ArrayList[colors.length()];
        Map<Character,Integer>[] map = new HashMap[colors.length()];
        isCycle = false;
        for(int i = 0;i<edges.length;i++){
            if(graph[edges[i][0]] == null){
                graph[edges[i][0]] = new ArrayList<Integer>();
            }
            graph[edges[i][0]].add(edges[i][1]);
        }
        int max = 0;
        for(int i = 0;i<colors.length() && !isCycle ;i++){
            if(map[i] == null){
                dfs(i,colors,graph,map,new boolean[colors.length()]);
                for(Character c : map[i].keySet()){
                    max = Math.max(max,map[i].get(c));
                }
            }
        }
        if(isCycle){
            return -1;
        }
        return max;
    }
    public void dfs(int node,String color,List<Integer>[] graph,Map<Character,Integer>[] map,boolean visited[]){
        if(visited[node]){
            isCycle = true;
            return;
        }
        if(map[node] != null){
            return;
        }
        visited[node] = true;
        map[node] = new HashMap<Character,Integer>();
        if(graph[node] != null){
            for(int i = 0;i<graph[node].size();i++){
                dfs(graph[node].get(i),color,graph,map,visited);
                for(Character c : map[graph[node].get(i)].keySet()){
                    map[node].put(c,Math.max(map[node].getOrDefault(c,0),map[graph[node].get(i)].get(c)));
                }
            }
        }
        map[node].put(color.charAt(node),map[node].getOrDefault(color.charAt(node),0)+1);
        
        visited[node] = false;
    }
}
